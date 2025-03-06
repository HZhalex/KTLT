#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;
int main(){
    float x_A,x_B,y_A,y_B;
    cout << "nhập tọa độ (x,y) của điểm A:";
    cin >> x_A >> y_A;
    cout << "nhập tọa độ (x,y) của điểm B:";
    cin >> x_B >> y_B;
    float length;
    length = sqrt((x_A-x_B)*(x_A-x_B) + (y_A-y_B)*(y_A-y_B));
    cout << "độ dài của vecto là:" << length;
    
  
   
    return 0;
}