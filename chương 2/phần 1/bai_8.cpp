// Online C++ compiler to run C++ program online
#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    float a,b,c,d;
    cout << "nhap vao 4 so:";
    cin >> a >> b >> c >> d;
    cout << "so lon nhat la:" << max({a,b,c,d});
    cout << "\nso nho nhat la:" << min({a,b,c,d});
    
    
    return 0;
}