// Online C++ compiler to run C++ program online
#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    float a,b,x;
    cout << "nhap vao cac he so a va b:";
    cin >> a >> b;
    if (b == 0){
        if (a == 0){
            cout << "\nphuong trinh vo so nghiem!";
        }
        else {
            cout << "\n phuong trinh co 1 nghiem duy nhat: x = 0";
        };
        
    }
    else{
       cout << "\n nghiem cua phuong trinh la:" << -b/a; 
    };
    
    
    return 0;
}