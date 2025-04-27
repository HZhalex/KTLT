#include <iostream>
using namespace std;
int UCLN(int a, int b){
	if(a==b)return a; //Trường hợp cơ sở
	if(a>b)return UCLN(a-b, b); //Thuật toán Euclid
	if(a<b)return UCLN(a, b-a);}
int BCNN(int a, int b){
    return (a*b)/UCLN(a,b);
}
int main() {
    int a,b,c,s;
    cout << "Nhap vao 3 so nguyen a,b va c:";
    cin >> a >> b >> c;
    s = UCLN(a,b) + BCNN(a,c);
    cout << s;
    return 0;
}