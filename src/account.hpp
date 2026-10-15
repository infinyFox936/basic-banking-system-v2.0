#pragma once
#include <string>
using namespace std;

class Account {
    public:
        Account(string accName);
        void deposit(int amount);
        void withdraw(int amount);
        void checkBalance();
        void listDetails();
    private:
        int balance = 0;
        string name;
};