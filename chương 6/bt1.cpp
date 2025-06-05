#include <iostream>
#include <fstream> // Thư viện để làm việc với file
using namespace std;

int main() {
    ofstream outFile("numbers.txt"); // Tạo file có tên là numbers.txt

    if (!outFile) {
        cerr << "Không thể tạo hoặc mở tệp tin!" << endl;
        return 1; // Trả về mã lỗi
    }

    // Ghi các số từ 1 đến 100 vào file
    for (int i = 1; i <= 100; ++i) {
        outFile << i << endl;
    }

    outFile.close(); // Đóng file sau khi ghi xong
    cout << "Đã tạo tệp numbers.txt với các số từ 1 đến 100." << endl;

    return 0;
}
