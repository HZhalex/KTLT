#include <iostream>
using namespace std;
int songuyento(int x){
    if(x < 2) return false;
    for(int i = 2;i*i<x;i++)
        if (x % i == 0) return false;
    return true;
}
void timSoXuatHienNhieuNhat(int A[10][10], int n) {
    int so[100];  // lưu các số đã gặp
    int dem[100]; // đếm tần suất tương ứng
    int demSo = 0;      // số lượng số khác nhau đã ghi nhận

    // Đếm tần suất từng số
    for (int i = 0; i < n; ++i)
        for (int j = 0; j < n; ++j) {
            int x = A[i][j];
            bool daCo = false;
            for (int k = 0; k < demSo; ++k) {
                if (so[k] == x) {
                    dem[k]++;
                    daCo = true;
                    break;
                }
            }
            if (!daCo) {
                so[demSo] = x;
                dem[demSo] = 1;
                demSo++;
            }
        }

    // Tìm tần suất lớn nhất
    int maxFreq = 0;
    for (int i = 0; i < demSo; ++i)
        if (dem[i] > maxFreq)
            maxFreq = dem[i];

    // Xuất kết quả
    cout << "Cac so xuat hien nhieu nhat (" << maxFreq << " lan): ";
    for (int i = 0; i < demSo; ++i)
        if (dem[i] == maxFreq)
            cout << so[i] << " ";
    cout << endl;
}
void lietKeDongNhieuChanNhat(int A[10][10], int n) {
    int maxChan = 0;
    int chan[10] = {0};

    for (int i = 0; i < n; ++i) {
        int dem = 0;
        for (int j = 0; j < n; ++j)
            if (A[i][j] % 2 == 0) dem++;
        chan[i] = dem;
        if (dem > maxChan) maxChan = dem;
    }

    cout << "Cac dong co nhieu so chan nhat (" << maxChan << " so):\n";
    for (int i = 0; i < n; ++i)
        if (chan[i] == maxChan) {
            cout << "Dong " << i << ": ";
            for (int j = 0; j < n; ++j)
                cout << A[i][j] << " ";
            cout << endl;
        }
}
void lietKeDongNhieuSNTNhat(int A[10][10], int n) {
    int maxSNT = 0;
    int snt[10] = {0};

    for (int i = 0; i < n; ++i) {
        int dem = 0;
        for (int j = 0; j < n; ++j)
            if (songuyento(A[i][j])) dem++;
        snt[i] = dem;
        if (dem > maxSNT) maxSNT = dem;
    }

    cout << "Cac dong co nhieu so nguyen to nhat (" << maxSNT << " so):\n";
    for (int i = 0; i < n; ++i)
        if (snt[i] == maxSNT) {
            cout << "Dong " << i << ": ";
            for (int j = 0; j < n; ++j)
                cout << A[i][j] << " ";
            cout << endl;
        }
}
int tinhTongDuongBien(int A[10][10], int n) {
    int tong = 0;

    for (int i = 0; i < n; ++i) {
        // Hàng đầu và hàng cuối: cộng toàn bộ hàng
        if (i == 0 || i == n - 1) {
            for (int j = 0; j < n; ++j)
                tong += A[i][j];
        } else {
            // Các hàng ở giữa: chỉ cộng cột đầu và cột cuối
            tong += A[i][0] + A[i][n - 1];
        }
    }

    return tong;
}

int main() {
    int hung[10][10], n, s = 0,max = 0,am =0;
    cout << "Nhap mang ma tran vuong n:";
    cin >> n;
    for (int i = 0;i<n;i++)
        for(int j = 0;j<n;j++){
            cout <<"[" << i <<"][" << j <<"]:"<<endl;
            cin >> hung[i][j];
        }
    for (int i = 0;i<n;i++)
        for(int j = 0;j<n;j++){
            cout << "[" << i <<"][" << j <<"]:";
            cout << hung[i][j]<<endl;
        }
    for (int i = 0;i<n;i++){
        for(int j =0;j<n;j++){
            if (i != j){
                s += hung[i][j];
            }
        }
    }
    cout << "tong cua s la :" << endl;
    cout << s;
    for (int i = 0;i<n;i++)
        for(int j = 0;j<n;j++){
            if(i = j && hung[i][j]>max) max = hung[i][j];
        }
    cout << "giá trị lớn nhất trên đường chéo chính:"<<endl;
    cout<<max;
    for(int i =0;i < n;i++){
        if(hung[i][n-1-i] < 0) am++;
    };
    cout <<"phần tử là số âm nằm trên đường chéo phụ:" <<am<<endl;
    int dem = 0;
    for (int i = 0;i<n;i++)
        for(int j = 0;j<n;j++){
            if (songuyento(hung[i][j])){
                dem ++;
            }
        }
    cout << "Tong so nguyen to: " << dem << endl;
    timSoXuatHienNhieuNhat(hung, n);
    lietKeDongNhieuChanNhat(hung, n);
    lietKeDongNhieuSNTNhat(hung, n);
    cout << "Tong cac so tren duong bien: " << tinhTongDuongBien(hung, n) << endl;
    return 0;
}