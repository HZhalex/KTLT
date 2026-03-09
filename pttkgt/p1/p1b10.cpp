#include <iostream> 
using namespace std;

int a[100], n, T;
char op[4] = {'+','-','*','/'}, x[100];
bool ok = 0;

long long calc(long long u,long long v,char c){
    if(c=='+') return u+v;
    if(c=='-') return u-v;
    if(c=='*') return u*v;
    if(c=='/' && v) return u/v;
    return 1e18;
}

void check(){
    long long r=a[1];
    for(int i=1;i<n;i++){
        r=calc(r,a[i+1],x[i]);
        if(r==1e18) return;
    }
    if(r==T){
        ok=1;
        for(int i=1;i<=n;i++){
            cout<<a[i];
            if(i<n) cout<<x[i];
        }
        cout<<"="<<T<<"\n";
    }
}

void gen_op(int i){
    for(int j=0;j<4;j++){
        x[i]=op[j];
        if(i==n-1) check();
        else gen_op(i+1);
    }
}

void gen_num(int i){
    if(i>n){ gen_op(1); return; }
    for(int j=i;j<=n;j++){
        swap(a[i],a[j]);
        gen_num(i+1);
        swap(a[i],a[j]);
    }
}

int main(){
    n=4;
    a[1]=1;a[2]=2;a[3]=3;a[4]=4;
    T=1;

    gen_num(1);

    if(!ok) cout<<"Khong co\n";
}