/*
    Người dùng nhập:  3↵  (↵ là phím Enter)

Bộ đệm ban đầu:  |3|\n|  (| là vị trí con trỏ đọc)

Sau cin >> n:     |3||\n|  (đã đọc số 3)
                      ^
                      Con trỏ đọc đang ở đây

Nếu dùng getline() ngay:  |3|\n||  (đọc một dòng rỗng)
                                ^
                                Con trỏ đọc đã đọc \n

Nếu dùng cin.ignore():    |3|\n||  (bỏ qua \n)
                                ^
                                Con trỏ đọc đã đọc và bỏ qua \n
*/
#include <iostream>
#include <string>
using namespace std;

const int MAX_SIZE = 49; // Kích thước tối đa của mảng (số phần tử < 50)

// Hàm lấy tên (phần cuối cùng) từ chuỗi họ tên đầy đủ
string getLastName(string fullName) {
    size_t lastSpace = fullName.find_last_of(" "); // Tìm vị trí khoảng trắng cuối cùng
    
    if (lastSpace != string::npos) {
        return fullName.substr(lastSpace + 1); // Lấy phần từ sau khoảng trắng cuối cùng đến hết
    } else {
        return fullName; // Nếu không có khoảng trắng thì lấy toàn bộ chuỗi
    }
}

int main() {
    int n;
    string fullName[MAX_SIZE];
    string firstName[MAX_SIZE];
    string lastName[MAX_SIZE];
    
    // Nhập số lượng sinh viên
    do {
        cout << "Nhap so luong sinh vien (toi da 49): ";
        cin >> n;
        
        if (n <= 0 || n >= 50) {
            cout << "So luong sinh vien phai lon hon 0 va nho hon 50. Vui long nhap lai.\n";
        }
    } while (n <= 0 || n >= 50);
    
    // Xóa bộ đệm
    cin.ignore();
    
    // Nhập họ và tên của các sinh viên
    cout << "Nhap ho va ten cua " << n << " sinh vien:\n";
    for (int i = 0; i < n; i++) {
        cout << "Sinh vien " << i + 1 << ": ";
        getline(cin, fullName[i]);
    }
    
    // Xuất mảng fullName ban đầu
    cout << "\nDanh sach ho va ten sinh vien ban dau:\n";
    for (int i = 0; i < n; i++) {
        cout << i + 1 << ". " << fullName[i] << endl;
    }
    
    // Tách họ của sinh viên và lưu vào mảng firstName
    for (int i = 0; i < n; i++) {
        string name = fullName[i];
        size_t pos = name.find(" "); // Tìm vị trí khoảng trắng đầu tiên
        
        if (pos != string::npos) {
            firstName[i] = name.substr(0, pos); // Lấy phần từ đầu đến vị trí khoảng trắng đầu tiên
        } else {
            firstName[i] = name; // Nếu không có khoảng trắng thì lấy toàn bộ chuỗi
        }
    }
    
    // Xuất mảng firstName
    cout << "\nDanh sach ho cua sinh vien:\n";
    for (int i = 0; i < n; i++) {
        cout << i + 1 << ". " << firstName[i] << endl;
    }
    
    // Tách tên của sinh viên và lưu vào mảng lastName
    for (int i = 0; i < n; i++) {
        lastName[i] = getLastName(fullName[i]);
    }
    
    // Xuất mảng lastName
    cout << "\nDanh sach ten cua sinh vien:\n";
    for (int i = 0; i < n; i++) {
        cout << i + 1 << ". " << lastName[i] << endl;
    }
    
    // Sắp xếp mảng fullName theo thứ tự tăng dần của phần tên (a->z)
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            // Lấy tên của sinh viên thứ i và j
            string lastNameI = getLastName(fullName[i]);
            string lastNameJ = getLastName(fullName[j]);
            
            // So sánh và hoán đổi nếu tên của sinh viên thứ i lớn hơn tên của sinh viên thứ j
            if (lastNameI > lastNameJ) {
                // Hoán đổi họ tên đầy đủ
                string temp = fullName[i];
                fullName[i] = fullName[j];
                fullName[j] = temp;
                
                // Hoán đổi họ
                temp = firstName[i];
                firstName[i] = firstName[j];
                firstName[j] = temp;
                
                // Hoán đổi tên
                temp = lastName[i];
                lastName[i] = lastName[j];
                lastName[j] = temp;
            }
        }
    }
    
    // Xuất mảng fullName sau khi sắp xếp
    cout << "\nDanh sach ho va ten sinh vien sau khi sap xep theo ten (a->z):\n";
    for (int i = 0; i < n; i++) {
        cout << i + 1 << ". " << fullName[i] << " (Ten: " << lastName[i] << ")" << endl;
    }
    
    return 0;
}