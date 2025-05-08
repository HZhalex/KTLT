#include <iostream>
#include <cctype>
#include <sstream>
#include <string>
using namespace std;
string chuoi(const string& input){
    string result;
    string word;
    bool firstword = true;
    istringstream iss(input);
    while(iss >> word){
        if(!firstword){
            result += " ";
        }
        else{
            firstword = false;
        }
        for (int i =0;i <word.length();i++){
            if(i == 0){
                result += toupper(word[i]);
            }
            else{
                result += tolower(word[i]);
            }
        }
        
    }
    return result;
}
string e(const string& input){
    string result ="";
    for (int i = 0;i<input.length();i++){
        if (isalpha(input[i])){
            result += input[i];
        }
    }
    return result;
}
string f(const string input){
    string result = input;
    for (int i = 0;i<result.length();i++){
        if (toupper(result[i]) == result[i]){
            result[i] = '*';
        }
    }
    return result;
}
string g(const string input){
    string result = input + "Hello";
    return result;
}
int main() {
    const string target = "Ngon ngu lap trinh C++ 2015";
    string S;
    cout << "Nhap chuoi S:" << endl;
    getline(cin,S);
    for ( int i = S.length() -1;i>=0;i--){
        cout<<S[i];
    }
    cout << endl;
    int so =0,chu =0;
    for(int i =0;i<S.length();i++){
        if(isalpha(S[i])){
            chu ++;
        }
        if(isdigit(S[i])){
            so ++;
        }
    }
    cout <<"co so: "<< so << endl;
    cout<< "co chu: " << chu <<endl;
    string hung = chuoi(S);
    cout << hung;
    if (S == target) {
        cout << "la \"Ngon ngu lap trinh C++ 2015\"" << endl;
    } else {
        cout << "khong phai la \"Ngon ngu lap trinh C++ 2015\"" << endl;
    }
    string lettersOnly = e(S);
    cout << "e) Chuoi S sau khi xoa cac ki tu khong phai chu cai: " << lettersOnly << endl;
    string hung = f(S);
    cout << hung;
    string k = g(S);
    cout << k;
    return 0;
}