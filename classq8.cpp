#include <iostream>
using namespace std;

void swap(int &r1, int &r2) {
    int temp = r1;
    r1 = r2;
    r2 = temp;
}

int main() {
    int a, b;
    a = 3;
    b = 5;

    cout << "Before swap: " << a << " " << b << endl;

    swap(a, b);   

    cout << "After swap: " << a << " " << b << endl;

    return 0;
}
