#include <iostream>
#include <ctime>
using namespace std;
int main() {
    
    int ngay,thang,n,t;
    
    cout << "nhap vao ngay va thang:\n";
    cin >> ngay >> thang;
    if ( 3>=thang >=1){
        cout << "quy1";
       
    }
    else if (6>=thang >=4){
        cout << "quy2";
    }
    else if (9>=thang >=7){
        cout << "quy3";
    }
    else{
        cout << "quy4";
        
    }
    if (thang == 1 || thang == 3 ||
    thang == 5 || thang == 7 || thang == 8 ||
    thang == 10 || thang == 12 ){
        if ( 31>=ngay >= 1){
            cout << "ngay thang nhap hop le!";
            cout <<"thang nhap co 31 ngay !";
        }
        else {
            cout << "deo hop le!";
        }
        n = ngay +1 ;
        if (n > 31){
            cout << " ngay hom som sau la:" << 1;
        }
        else {
            cout << " ngay hom som sau la:" << n;
        }
    }
    
    else if (thang == 2){
        if ( 29>=ngay >= 1){
            cout << "ngay thang nhap hop le!";
            cout <<"thang nhap co 29 ngay !";
        }
        else {
            cout << "deo hop le!";
        }
        n = ngay +1 ;
        if (n > 29){
            cout << " ngay hom som sau la:" << 1;
        }
        else {
            cout << " ngay hom som sau la:" << n;
        }
    }
    
    else{
        if ( 30>=ngay >= 1){
            cout << "ngay thang nhap hop le!";
            cout <<"thang nhap co 30 ngay !";
        }
        else {
            cout << "deo hop le!";
        }
        n = ngay +1 ;
        if (n > 30){
            cout << " ngay hom som sau la:" << 1;
        }
        else {
            cout << " ngay hom som sau la:" << n;
        }
        
    }
    t = ngay -1;
    if (thang == 1 || thang == 2 ||
    thang == 4 || thang == 6 || thang == 8 ||
    thang == 9 || thang == 11 ){
        if ( t == 0){
            cout << " ngay truoc la:" << 31;
        }
        else {
            cout<< " ngay truoc la:" << t;
        }
    }
    else if (thang == 3){
        if ( t == 0){
            cout << " ngay truoc la:" << 29;
        }
        else {
            cout<< " ngay truoc la:" << t;
        }
    }
    else {
        if ( t == 0){
            cout << " ngay truoc la:" << 30;
        }
        else {
            cout<< " ngay truoc la:" << t;
        }
    }
    
    

    return 0;
}