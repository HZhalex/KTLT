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
bool songuyento(int n){
    if (n < 2) return false;
    if (n == 2) return true;
    if (n % 2 == 0) return false;
    for (int i = 3; i <= sqrt(n); i += 2)
        if (n % i == 0)
            return false;
    return true;
}
int g(int hung[],int n){
    for (int i = 0; i < n ; i++){
        int j = i;
        if(songuyento(hung[i])){
            while(j < n){
                hung[j] = hung[j+1];
                j++;
            }
            n--;
        }
    }
    return n;
}
int main() {
    int hung[100], n,girl[100];
    cout << " nhap :";
    cin >> n;
    nhap(hung,n);
    int k = g(hung,n);
    in(hung,k)  ;
    return 0;
}