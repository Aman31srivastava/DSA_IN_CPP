#include <iostream>
#include <string>
using namespace std;

string reversestring(string name) {
    int s = 0;
    int e = name.length() - 1;

    while (s < e) {
        swap(name[s], name[e]);
        s++;
        e--;
    }
    return name;  // return the reversed string
}

int main() {
    string x = "aman";

    cout << "The original string is: " << x << endl;
    cout << "The reversed string is: " << reversestring(x) << endl;

    return 0;
}
