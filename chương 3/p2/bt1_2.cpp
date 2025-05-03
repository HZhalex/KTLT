#include <iostream>
using namespace std;
void nhap(int hung[],int n){
    for(int i = 0;i < n ; i++){
        cout << i <<":"<< endl;
        cin >> hung[i];
    }
}
int e(int hung[],int n){
    int chan = 0;
    int le = 0;
    for(int i = 0; i < n ; i++){
        if (hung[i]% 2 == 0 && hung[i] != 0) chan ++;
        else if (hung[i]% 2 == 1 && hung[i] != 0) le ++;
    }
    if (chan > le ) return 1;
    else if(chan < le ) return -1;
    else return 0;
}
int f(int hung[], int n,int x,int p){
    for (int i=n;i>p;i--){
        hung[i] = hung[i-1];
    }
    hung[p] = x;
    return n+1;
 }
void in(int hung[],int n){
     for(int i = 0;i < n;i++){
         cout << endl;
         cout << i << ":"<< endl;
         cout << hung[i];
     }
 }
int main() {
    int n,hung[100];
    cout <<"nhap:";
    cin >> n;
    nhap(hung,n);
    // cau e:
    if ( e(hung,n) == 1) cout << "chan > le";
    else if ( e(hung,n) == -1) cout << "chan < le";
    else cout << "chan = le";
    // cau f:
    int k = f(hung,n,9,0);
    in(hung,k);
    return 0;
}