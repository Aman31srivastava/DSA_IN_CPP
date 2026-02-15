/*A phrase is a palindrome if, after converting all uppercase letters into lowercase letters and removing all non-alphanumeric characters, it reads the same forward and backward. Alphanumeric characters include letters and numbers.

Given a string s, return true if it is a palindrome, or false otherwise.

 

Example 1:

Input: s = "A man, a plan, a canal: Panama"
Output: true
Explanation: "amanaplanacanalpanama" is a palindrome.
Example 2:

Input: s = "race a car"
Output: false
Explanation: "raceacar" is not a palindrome.*/


#include <iostream>
#include <string>
using namespace std;

bool isValidCharacter(char ch) {
    if (ch >= '0' && ch <= '9') return true;
    if (ch >= 'a' && ch <= 'z') return true;
    if (ch >= 'A' && ch <= 'Z') return true;
    return false;
}

string normaliseString(string &s) {
    string newStr = "";
    for (int i = 0; i < s.length(); i++) {
        char ch = s[i];
        if (isValidCharacter(ch)) {
            if (ch >= 'A' && ch <= 'Z') {
                ch = ch - 'A' + 'a';  // Convert uppercase to lowercase
            }
            newStr.push_back(ch);
        }
    }
    return newStr;
}

bool isPalindrome(string &s) {
    string newStr = normaliseString(s);
    int i = 0;
    int j = newStr.length() - 1;

    while (i <= j) {
        if (newStr[i] != newStr[j]) {
            return false;  // mismatch → not palindrome
        } else {
            i++;
            j--;
        }
    }
    return true;  // all matched → palindrome
}

int main() {
    string s;
    cout << "Enter a string: ";
    getline(cin, s); // take full line input (including spaces and punctuation)

    if (isPalindrome(s)) {
        cout << "true" << endl;
    } else {
        cout << "false" << endl;
    }

    return 0;
}
