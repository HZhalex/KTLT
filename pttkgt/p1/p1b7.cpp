#include <iostream>
using namespace std;

int n,x[100],d[100];

void f(int k){
    for(int i=1;i<=n;i++)
        if(!d[i]){
            x[k]=i; d[i]=1;
            if(k==n){
                for(int j=1;j<=n;j++) cout<<x[j]<<" ";
                cout<<endl;
            }else f(k+1);
            d[i]=0;
        }
}
//               _
//         /     |     \ 
//        1      2      3
//      /  \    /  \   /  \ 
//     2     3  1   3  1   2
//     |     |  |   |  |   |
//     3     2  3   1  2   1
int main(){
    cin>>n;
    f(1);
}