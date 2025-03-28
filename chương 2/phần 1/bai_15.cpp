#include <iostream>

using namespace std;

int main() {
    int n;
    cout << "Nhap so nguyen co 3 chu so: ";
    cin >> n;
    
    if (n < 100 || n > 999) {
        cout << "So khong hop le!";
        return 0;
    }
    
    int tram = n / 100;
    int chuc = (n / 10) % 10;
    int dv = n % 10;
    
    if (tram == 1) cout << "mot ";
    else if (tram == 2) cout << "hai ";
    else if (tram == 3) cout << "ba ";
    else if (tram == 4) cout << "bon ";
    else if (tram == 5) cout << "nam ";
    else if (tram == 6) cout << "sau ";
    else if (tram == 7) cout << "bay ";
    else if (tram == 8) cout << "tam ";
    else if (tram == 9) cout << "chin ";
    
    cout << "tram";
    
    if (chuc == 0 && dv == 0) {
       
        return 0;
    }
    
    if (chuc == 0) cout << " le";
    else if (chuc == 1) cout << " muoi";
    else {
        if (chuc == 2) cout << " hai";
        else if (chuc == 3) cout << " ba";
        else if (chuc == 4) cout << " bon";
        else if (chuc == 5) cout << " nam";
        else if (chuc == 6) cout << " sau";
        else if (chuc == 7) cout << " bay";
        else if (chuc == 8) cout << " tam";
        else if (chuc == 9) cout << " chin";
        cout << " muoi";
    }
    
    if (dv != 0) {
        if (dv == 1) cout << " mot";
        else if (dv == 2) cout << " hai";
        else if (dv == 3) cout << " ba";
        else if (dv == 4) cout << " bon";
        else if (dv == 5) cout << " nam";
        else if (dv == 6) cout << " sau";
        else if (dv == 7) cout << " bay";
        else if (dv == 8) cout << " tam";
        else if (dv == 9) cout << " chin";
    }
    
    
    return 0;
}
