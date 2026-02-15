#include <iostream>
using namespace std;

bool isvowel(char ch) {
    // check if character is a vowel (case insensitive)
    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
        ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
        return true;
    } 
    else {
        return false;
    }
}

int main() {
    char x[] = {'a', 'b', 'c', 'd', '\0'}; // null-terminated char array (string)
    
    cout << "Vowels in the string are: ";
    for (int i = 0; x[i] != '\0'; i++) {
        if (isvowel(x[i])) {
            cout << x[i] << " ";
        }
    }
    cout << endl;

    return 0;
}
