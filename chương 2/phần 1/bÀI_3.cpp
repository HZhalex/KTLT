// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
    char a ,b;
    cout << "nhập vào người chơi thứ nhất:";
    cin >> a;
    cout << "nhập vào người chơi thứ hai:";
    cin >> b;
    if (a == b){
        cout << "hòa!";
    }
    else{
    if ((a == 'B' && b == 'K') || 
        (a == 'K' && b == 'O') || 
        (a == 'O' && b == 'B'))
        {
        cout << "người chơi 1 win:" ;
    }
    else{
        cout << "người chơi 2 win:";
    };
    };
    return 0;
}