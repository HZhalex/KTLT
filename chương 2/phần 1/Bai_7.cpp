// Online C++ compiler to run C++ program online
#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    float a,b,c;
    cout << "nhap vao 3 so:";
    cin >> a >> b >> c;
    cout << "so lon nhat la:" << max({a,b,c});
    cout << "\nso nho nhat la:" << min({a,b,c});
    
    
    return 0;
}