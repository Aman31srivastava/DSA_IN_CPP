#include <iostream>
using namespace std;

// Function to find length of a character array (C-style string)
int getlength(char s[]) {
    int count = 0;
    for (int i = 0; s[i] != '\0'; i++) {
        count++;
    }
    return count; // return the length
}

int main() {
    char x[] = "aman"; // C-style string (null terminated)
    cout << "The length of the character array is: " << getlength(x) << endl;
    return 0;
}
