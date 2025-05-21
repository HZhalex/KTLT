#include <iostream>
#include <string>
using namespace std;

string extractLastName(const string& fullName) {
    int lastSpacePos = fullName.find_last_of(' ');
    if (lastSpacePos == string::npos) {
        return fullName;
    }
    return fullName.substr(lastSpacePos + 1);
}

int main() {
    string* fullName = new string();
    cout << "full name: ";
    getline(cin, *fullName);

    string lastName = extractLastName(*fullName);
    cout << "Last name: " << lastName << endl;
    delete fullName;
    return 0;
}