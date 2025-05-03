#include <iostream>
using namespace std;

int main() {
    int m,n,A[10],B[10],C[20];
    cout << "nhap m va n:";
    cin >> m >> n;
    for (int i = 0 ; i < m; i++){
        cout << "[" << i <<"]:"<<endl;
        cin >> A[i];}
    for (int i = 0 ; i < n; i++){
        cout << "[" << i <<"]:"<<endl;
        cin >> B[i];}
    int i = 0,j=0,k=0;
    while(i < m && j < n){
        if (A[i] < B[j]){
            C[k] = A[i];
            k++;i++;
        }
        else {
            C[k] = B[j];
            k++;j++;
        }
    }
    while(i < m) {
        C[k] = A[i];
        k++;i++;
    }
    
    while(j < n) {
        C[k] = B[j];
        k++;j++;
    }
    for (int h = 0 ;h < k;h++) cout << C[h];
    return 0;
}