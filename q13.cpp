#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;

    int d = b*b - 4*a*c;

    if (d > 0) {
        cout << "Two real roots";
    }
    else if (d == 0) {
        cout << "One real root";
    }
    else {
        cout << "No real roots";
    }

    return 0;
}
