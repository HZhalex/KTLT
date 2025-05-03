#include <iostream>
#include <cmath>
using namespace std;
void nhap(int hung[],int n){
    for(int i = 0;i < n ; i++){
        cout << i <<":"<< endl;
        cin >> hung[i];
    }
}
void in(int hung[],int n){
     for(int i = 0;i < n;i++){
         cout << endl;
         cout << i << ":"<< endl;
         cout << hung[i];
     }
 }
bool chinhphuong(int x){
    if (x < 0) return false;
    int k = sqrt(x);
    return k*k == x ;
}
bool songuyento(int x){
    if (x < 2 ) return false;
    for (int i = 2 ; i * i < x ; i++ ){
        if (x % i == 0) return false;
    }
    return true;
}
int main() {
    int hung[100], n;
    cout << " nhap :";
    cin >> n;
    nhap(hung,n);
    for ( int i = 1;i< n;i++)
        if (chinhphuong(hung[i-1]) && songuyento(hung[i])){
            cout << hung[i];
            return 0;
        } 
    return 0;
}