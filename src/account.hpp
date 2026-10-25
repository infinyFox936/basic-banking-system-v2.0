#pragma once
#include <string>
using namespace std;

struct Account {
    Account(string accName);
    void deposit(int amount);
    void withdraw(int amount);
    void checkBalance();
    void listDetails();
    string name;
    int balance = 0; // I know this isnt optimal at all but its a fix for char option = 't'
};