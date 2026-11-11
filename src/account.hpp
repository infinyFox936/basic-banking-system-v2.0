#pragma once
#include <string>
using namespace std;

struct Account {
    Account(string accName);
    void deposit(double amount);
    void withdraw(double amount);
    void checkBalance();
    void listDetails();
    string name;
    double balance = 0; // I know this isnt optimal at all but its a fix for char option = 't'
};