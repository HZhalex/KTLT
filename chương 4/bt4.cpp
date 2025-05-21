#include <iostream>
using namespace std;
int main() {
    int n;
    cout <<"Nhap so luong phan tu:" << endl;
    cin >> n;
    int *a = new int [n];
    cout << "Nhap cac phan tu:" << endl;
    for (int i = 0;i < n;i++){
        cin >> a[i];
    }
    int ht = 1,bd = 0 ;
    int htmax = 1,bdmax =0;
    
    for (int i = 1;i <n;i++){
        if (a[i] > a[i-1]) ht ++;
        else{
            if (ht > htmax){
                htmax = ht;
                bdmax = bd;
            }
            ht = 1;
            bd = i;
        }
    }
    if ( ht > htmax){
        htmax = ht;
        bdmax = bd;
    }
    cout << "Do dai day con tang dan lien tuc dai nhat: " << htmax << endl;
    cout << "day con do la:" ;
    for(int i = bdmax ; i < bdmax + htmax;i++){
        cout << a[i] << " ";
    }
    delete []a;
    return 0;
}