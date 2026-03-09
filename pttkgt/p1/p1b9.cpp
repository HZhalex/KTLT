#include <iostream> 
using namespace std;

int n,B,a[100],x[100];

void f(int i,int s,int sum){
    for(int j=s;j<=n;j++){
        x[i]=a[j];
        
        if(sum+a[j]==B){
            for(int k=1;k<=i;k++) cout<<x[k]<<" ";
            cout<<"\n";
        }
        
        if(sum+a[j]<B) f(i+1,j,sum+a[j]);
    }
}

int main(){
    cin>>n>>B;
    for(int i=1;i<=n;i++) cin>>a[i];
    f(1,1,0);
}