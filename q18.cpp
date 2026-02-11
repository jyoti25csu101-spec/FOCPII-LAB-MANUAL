#include <iostream>
using namespace std;

int main() {
    string id;
    cin >> id;

    int start = 0;
    int end = id.length() - 1;
    bool palindrome = true;

    while (start < end) {
        if (id[start] != id[end]) {
            palindrome = false;
            break;
        }
        start++;
        end--;
    }

    if (palindrome)
        cout << "Palindrome ID";
    else
        cout << "Not a Palindrome ID";

    return 0;
}
