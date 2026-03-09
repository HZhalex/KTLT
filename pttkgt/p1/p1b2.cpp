#include <iostream>
using namespace std;
void f(){
    char c;
    c = cin.get();
    if (c == '\n') return;
    f();
    cout << c;
}
int main() {
    // char c;
    // c = cin.get();
    // cout << c << endl;
    // c = cin.get();
    // cout << c << endl;
    // c = cin.get();
    // cout << c << endl;
    // c = cin.get();
    // cout << c;
    f();
    return 0;
}