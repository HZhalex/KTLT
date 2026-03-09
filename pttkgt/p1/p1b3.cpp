#include <iostream>
using namespace std;
int n;
int f(int n){
    return (n<10) ? n : f(n/10)+(n%10);
}
int main() {
    
    cin >> n;
    cout << f(n);
}