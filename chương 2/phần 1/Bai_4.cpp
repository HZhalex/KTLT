// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
    int tnct;
    int lcb = 650000 ;
    float luong,hs;
    cout << "so nam tham nien la:";
    cin >> tnct;
    if (tnct < 12 ){
        luong = 1.92 * lcb;
    }
    else if(12 <= tnct < 36 ) { 
        luong = 2.34 * lcb;
    }
    else if(36 <= tnct < 60) {
        luong = 3 * lcb;
    }
    else {
        luong = 4.5 * lcb;
    };
    cout << "luong nhan vien la:" << luong ;
    
    
    return 0;
}