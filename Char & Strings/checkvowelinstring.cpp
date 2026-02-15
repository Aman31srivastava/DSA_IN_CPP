#include <iostream>
using namespace std;

bool isVowel(char ch) {
    return (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
            ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U');
}

string reverseVowels(string s) {
    int start = 0;
    int end = s.size() - 1;

    while (start < end) {
        while (start < end && !isVowel(s[start])) {
            start++;
        }
        while (start < end && !isVowel(s[end])) {
            end--;
        }

        if (start < end) {
            swap(s[start], s[end]);
            start++;
            end--;
        }
    }

    return s;
}

int main() {
    string s;
    cout << "Enter a string: ";
    cin >> s;

    cout << "String after reversing vowels: " << reverseVowels(s) << endl;

    return 0;
}
