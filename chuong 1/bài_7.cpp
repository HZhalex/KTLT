#include <iostream>
#include <cmath>
double kc(double x1,double x2, double y1,double y2){
    return sqrt(pow(x2 - x1,2)+pow(y2 - y1,2));
}
using namespace std;
int main(){
    float xA,xB,yA,yB,xC,yC;
    cout << "nhập tạo độ điểm A(x,y):";
    cin >> xA >> yA;
    cout << "nhập tọa độ điểm B(x,y):";
    cin >> xB >> yB;
    cout << "nhập tọa độ điểm C(x,y):";
    cin >> xC >> yB;
    
    double a = kc(xA,xB,yA,yB);
    double b = kc(xA,xC,yA,yC);
    double c = kc(xC,xB,yC,yB);
    
    double cv = a + b + c;
    double s = cv / 2;
    double dt = sqrt(s * (s - a) * (s - b) * (s - c));
    
    cout << "chu vi tam giác là:" << cv;
    cout << "\ndiện tích tam giác là: " << dt;
  
   
    return 0;
}