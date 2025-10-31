#include <iostream>
#include <string>
using namespace std;
int main() {
    string str;
    cout << "Enter string: ";
    cin >> str;
    string rev = string(str.rbegin(), str.rend());
    if (str == rev) cout << "Palindrome";
    else cout << "Not Palindrome";
    return 0;
}