// Online C++ compiler to run C++ program online
#include <iostream>
#include <cmath>

using namespace std;

int main() {
    float a,b,c,d,x,y,z,ds;
    cout << "nhập vào các hệ số a,b,c,d của phương trình mặt phẳng ax+by+cz+d =0 là :";
    cin >> a >> b >> c >> d;
    cout << "nhập vào tọa độ của điểm A(x,y,z):";
    cin >> x >> y >> z;
    ds = abs(a*x + b*y + c*z + d)/sqrt(a*a + b*b + c*c);
    
    cout << "khoảng cách giữa điểm A và phương trình mặt phẳng là:" << ds;
    

    return 0;
}