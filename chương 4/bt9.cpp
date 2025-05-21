#include <iostream>
#include <cstring> 
using namespace std;

int main() {
    char tempT[100], tempS[100];
    
    cout << "Nhap 2 chuoi: " << endl;
    cin >> tempT >> tempS;
    
    int lenT = strlen(tempT);
    int lenS = strlen(tempS);
    
    char *T = new char[lenT + lenS + 1];
    char *S = new char[lenS + 1];
    
    strcpy(T, tempT);
    strcpy(S, tempS);
    
    int i = 0;
    while (S[i] != '\0') {
        T[lenT + i] = S[i];
        i++;
    }
    T[lenT + i] = '\0';
    
    cout << "Chuoi sau khi noi: " << T << endl;
    
    delete[] T;
    delete[] S;
    
    return 0;
}