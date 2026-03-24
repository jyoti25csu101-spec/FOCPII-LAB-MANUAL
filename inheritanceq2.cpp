#include<iostream>
using namespace std;

class Account {
    string accountnumber;
    double balance;

public:
    Account() {
        cout << "Default constructor called\n";
        accountnumber = "default";
        balance = 0;
    }

    Account(string ac, double b) {
        accountnumber = ac;
        balance = b;
    }

    void displayAccount() {
        cout << "\nAccount Number: " << accountnumber;
        cout << "\nBalance: " << balance << endl;
    }
};

class SavingAccount : public Account {
    int interestrate;

public:
    SavingAccount(string ac, double b, int i) : Account(ac, b) {
        interestrate = i;
    }

    double calculateInterst() {
        return (balance * interestrate) / 100;
    }

    void display_SavingAccount() {
        displayAccount();
        cout << "Interest: " << calculateInterst() << endl;
    }
};

int main() {
    SavingAccount s2("komal", 1000, 2);
    s2.display_SavingAccount();

    return 0;
}