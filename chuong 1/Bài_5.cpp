#include <iostream>

using namespace std;
int main(){
    float dt,dl,dh;
    float hst,hsl,hsh;
    float dtb;
    cout << "nhập vào điểm toán và hệ số môn toán: ";
    cin >> dt >> hst;

    cout << "\n nhập vào điểm hóa và hệ số môn hóa:";
    cin >> dh >> hsh;

    cout << "\n nhập vào điểm lý và hệ số môn lý:";
    cin >> dl >> hsl;


    dtb = (dt * hst + dl * hsl + dh *hsh)/ (hst + hsl + hsh);
    cout << "\n điểm trung bình của sinh viên là:" << dtb;
    return 0;



}