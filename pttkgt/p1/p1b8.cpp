#include <iostream>
using namespace std;

int x[6];

void f(int i){
    for(int j=0;j<=1;j++){
        if(j==0 && x[i-1]==0) continue;
        x[i]=j;
        if(i==5){
            for(int k=1;k<=5;k++) cout<<x[k];
            cout<<endl;
        }
        else f(i+1);
    }
}
//   (start)
//   /      \ 
//   0        1
//   |       / \ 
//   1      0   1
int main(){
    x[0]=1;
    f(1);
}