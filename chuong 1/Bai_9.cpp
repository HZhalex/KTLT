// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main() {
    int n,a,t;
    cout << "nhập vào số N:";
    cin >> n;
  
    
    while (n) {
    a = n % 10;
    n =  n / 10;
    t += a ;
    
}
    cout << "in ra: " << t;
    return 0;
}