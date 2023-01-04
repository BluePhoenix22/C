//
//  main.cpp
//  CSC450Mod2CTAStringInputConsole
//
//  Created by Joanna Ciesielski on 3/3/22.
//

#include <iostream>
#include <string>
using namespace std;

string reverse(string userString) {
    string afterReverse;
    for (int i = 0; i < userString.length(); ++i) {
        afterReverse += userString[userString.length() - i - 1];
    }
    return afterReverse;
}

int main() {
    string userString;
    cout << "Enter the first string: ";
    getline(cin, userString);
    cout << "You entered \"" << userString << "\" the reversed string is \"" << reverse(userString) << "\"" << endl;

    cout << "\nEnter the second string: ";
    getline(cin, userString);
    cout << "You entered \"" << userString << "\" the reversed string is \"" << reverse(userString) << "\"" << endl;

    cout << "\nEnter the third string: ";
    getline(cin, userString);
    cout << "You entered \"" << userString << "\" the reversed string is \"" << reverse(userString) << "\"" << endl;
    return 0;
}
