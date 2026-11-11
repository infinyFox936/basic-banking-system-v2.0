#include <iostream>
#include <string>
#include "account.hpp"
using namespace std;

Account::Account(string accName) {
    name = accName;
}

void Account::deposit(double amount) {
    if (amount < 0) {
        cout << "Invalid option" << endl;
    } else {
        balance += amount;
    }
}

void Account::withdraw(double amount) {
    if(amount > balance) {
        cout << "Not enough money" << endl;
    } else if(amount < 0) {
        cout << "Invalid option" << endl;
    } else {
        balance -= amount;
    }
}

void Account::checkBalance() {
    cout << "Available Balance: " << balance << "$" << endl;
}

void Account::listDetails() {
    cout << "--------" << endl;
    cout << "Account details" << endl;
    cout << "Name: " << name << endl;
    cout << "Balance: " << balance << "$" << endl;
    cout << "--------" << endl;
}