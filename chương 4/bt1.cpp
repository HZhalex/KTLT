// Bài 1
#include <iostream>
using namespace std;
int main(){
    int hung[100],n;
    cout << "Nhap cac phan tu vao mang:"<<endl;
    cin >> n;
    for ( int i = 0;i <n;i++ )cin >> hung[i];
    int *p = new int [n];
    for (int i =0;i<n;i++){
        p[i] = hung[i];
    }
    int s = 0;
    for(int i =0;i<n;i++){
        if(p[i] % 3 == 0){
            s += p[i];
        }
    }
    cout << s << endl;
    delete []p;
    return 0;
}
