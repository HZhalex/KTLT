#include <iostream>
using namespace std;
int n;
void f(int n)
{ 
    if(n){ 
        f(n/2); 
        cout<<n%2; 
    } 
}
int main(){
    cin>>n;
    n ? f(n) : (void)(cout<<0);
}