#include <iostream>
using namespace std;

int main() {
    int items;
    float price, total, discount = 0;

    cin >> items >> price;

    total = items * price;

    if (items > 1000) {
        discount = 0.10 * total;
        total = total - discount;
    }

    cout << "Total Expense: " << total;

    return 0;
}
