#include <iostream>
using namespace std;
int main() {
    float x1,y1,x2,y2,x3,y3;
    cout << "nhap vao toa do diem A:";
    cin >> x1 >> y1;
    cout << "\nnhap vao toa diem B:";
    cin >> x2 >> y2;
    cout << "\nnhap vao toa diem C:";
    cin >> x3 >> y3;
    cout << "\n"<<(y2-y1)<<"x - "<<(x2-x1)<<"y + "<<(x1*y2 - x2*y1)<<" = 0";
    float hung = (y2-y1)*x3-(x2-x1)*y3+(x1*y2-x2*y1);
    if (hung == 0){
        cout << "\nC thuoc duong thang noi lien A va B!";
    }
    else if(hung>0){
        cout << "\ndiem c nam ben tren duong thang!";
    }
    else{
        cout << "\ndiem c nam ben duoi duong thang!";
    }
    cout <<"\n" << hung;
    return 0;
}