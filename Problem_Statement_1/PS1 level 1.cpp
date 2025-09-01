//CIPHER CODE
#include <iostream>
using namespace std;

char shiftChar(char c, int shift) {
    if (isupper(c)) {
        return 'A' + (c - 'A' + shift + 26) % 26;
    } else if (islower(c)) {
        return 'a' + (c - 'a' + shift + 26) % 26;
    } else {
        return c; 
    }
}

int main() {
    string s;
    int n;
    
    cout << "original = ";
    cin >> s;
    
    cout << "shift by = ";
    cin >> n;

    for (char& c : s) {
        c = shiftChar(c, n);
    }

    cout << "Encrypted = " << s << endl;

    return 0;
}
