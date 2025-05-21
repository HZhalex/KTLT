#include <iostream>
using namespace std;

bool containsLapTrinh(const char* S) {
    const char* target = "Lap Trinh";
    const char* pS = S;  
    
    while (*pS != '\0') {
        const char* pTarget = target;
        const char* pTemp = pS; 
        while (*pTemp != '\0' && *pTarget != '\0' && *pTemp == *pTarget) {
            pTemp++;
            pTarget++;
        }

        if (*pTarget == '\0') {
            return true;
        }
        
        pS++; 
    }
    
    return false;
}

int main() {
    char* S = new char[100];  
    
    cout << "Nhap chuoi S: ";
    cin.getline(S, 100);
    
    if (containsLapTrinh(S)) {
        cout << "Chuoi co chua 'Lap Trinh'" << endl;
    } else {
        cout << "Chuoi KHONG chua 'Lap Trinh'" << endl;
    }
    
    delete[] S;  
    return 0;
}