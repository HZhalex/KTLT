#include <iostream>
using namespace std;
int main() {
    int hung[100],n;
    cout << "Nhap vao n:" << endl;
    cin >> n;
    cout << endl;
    for ( int i = 0; i < n ; i++ ){
        cout << i << endl;
        cin >> hung[i];
    }
    for ( int i = 0;i < n-1;i++){
        for (int j = i+1; j < n;j++){
            if(hung[i] >= hung[j]){
                int tmp = hung[i];
                hung[i] = hung[j];
                hung[j] = tmp;
            }
        }
    }
    cout << endl;
    for (int i = 0; i < n;i++){
        cout << hung[i] << endl;
    }

    return 0;
}