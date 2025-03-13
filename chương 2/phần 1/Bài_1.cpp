// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
    int n ;
    cout << " nhập vào số tự nhiên:";
    cin >> n;
    if (n % 2 == 0){
        cout << "số vừa nhập là số chẵn!";
    }
    else{
        cout << "số vừa nhập là số lẻ!";
    };
    return 0;
}