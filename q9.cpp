#include <iostream>
#include <cctype>
using namespace std;

int main() {
    char ch;
    cin >> ch;

    if (isdigit(ch)) {
        cout << "Number";
    }
    else if (isalpha(ch)) {
        char lower = tolower(ch);
        
        if (lower == 'a' || lower == 'e' || lower == 'i' ||
            lower == 'o' || lower == 'u') {
            cout << "Vowel";
        } else {
            cout << "Consonant";
        }
    }
    else {
        cout << "Special Character";
    }

    return 0;
}
