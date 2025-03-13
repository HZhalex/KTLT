// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
    int a,b;
    cout << "nhập vào số tự nhiên a và b:";
    cin >> a >> b;
    if (a >= b){
        cout << "số lớn nhất là:" << a;
    }
    else{
        cout << "số lơn nhất là:" << b;
    };
    return 0;
}