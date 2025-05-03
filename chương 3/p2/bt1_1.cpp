#include <iostream>
using namespace std;
bool snt(int n)
{
    if (n < 2)
        return false;
    for (int i = 2; i * i <= n; ++i)
        if (n % i == 0)
            return false;
    return true;
}
int c(int hung[],int n){
    bool giam = true;
    bool tang = true;
    if ( n <= 1){
        return 1;
    }
    for(int i = 1; i < n ; i++){
        if (hung[i] < hung[i-1]){
            tang = false;
        }
        if (hung[i] > hung[i-1]){
            giam = false;
        }
        if (!tang && !giam){
            return 0;
        }
    }
    if (tang){ 
        return 1;
    }
    else if(giam){
        return -1;
    }
    return 0;
}
int d1(int hung[],int n){
    for (int i = 0;i < n ; i++){
        for ( int j = i + 1; j < n;j++){
            if (hung[i] == hung[j]){
                return true;
            }
        }
    }
    return false;
}
int d2(int hung[],int n){
    for (int i = 0;i < n ; i++){
        for ( int j = i + 1; j < n;j++){
            if (hung[i] == hung[j]){
                while ( j < n){
                    hung[j] == hung[j+1];
                    j ++;
                }
                --n;
            }
        }
    }
    return n;
}


int main() {
    int n, hung[100];
    cout << "nhap so luong ptm:";
    cin >> n;
    for (int i = 0;i < n ; i++){
        cout << "hung " << i << endl;
        cin >> hung[i];
    }
    for (int j = 0 ; j < n; j ++){
        if (hung[j] % 2 != 0){
            cout << "mang ko chua toan so chan!";
            break;
        }
    }
    for (int j = 0 ; j < n; j ++){
        snt(hung[j]);
    }    
    if (c(hung,n) == 1){
        cout << "ham tang";
    }
    else if(c(hung,n) == -1){
        cout << "ham giam";
    }
    else {
        cout << "mang ko sap xep";
    }

    return 0;
}