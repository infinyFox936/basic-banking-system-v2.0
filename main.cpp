#include <iostream>
#include <string>
#include <vector>
#include "src/account.hpp"
#include "src/info.hpp"
using namespace std;

int main() {
    string acc_name;
    char option;
    int amount;
    // serves as 'i' in a for loop
    // is used to know the selected account for option being a, w, d, b
    // 0 for the first account (created on line 27)
    int select = 0;

    vector<Account> accounts;

    cout << "######################################################################" << endl;
    cout << "#                     SIMPLE BANKING SYSTEM v2.0                     #" << endl;
    cout << "######################################################################" << endl;
    cout << "/fox" << endl;
    
    cout << endl;
    cout << endl;
    
    cout << "Account name (one word only): ";
    cin >> acc_name;
    cout << endl;

    Account acc(acc_name);
    accounts.push_back(acc);


    while(1) {
        amount = 0;
        acc_name = ""; // prevent some errors
        // idk what errors but yk how they say
        // if it works dont touch it
        
        cout << endl;
        cout << "Options:" << endl;
        cout << "a - show all details" << endl;
        cout << "w - withdraw" << endl;
        cout << "d - deposit" << endl;
        cout << "b - check balance" << endl;
        cout << "i - info of program and author" << endl;
        cout << "---" << endl;
        cout << "s - select account" << endl;
        cout << "n - new account" << endl;
        cout << "l - list all accounts" << endl;
        cout << "L - list selected account" << endl;
        cout << "e - delete account" << endl;
        cout << "t - make a transaction" << endl;
        cout << "---" << endl;
        cout << "q - quit" << endl;
        cout << "------" << endl;

        cout << endl;
        cout << "Option to choose: ";
        cin >> option;
        cout << endl;
        

        switch (option) {
            
            case 's': {
                // acc_name will be used here and in more places
                // to prevent more memory use and aditional variables
                bool found = false;
                cout << "Account name: "; cin >> acc_name;
                for(int i = 0; i < accounts.size(); i++) {
                    if(accounts[i].name == acc_name) {
                        select = i;
                        cout << "Account selected to " << accounts[i].name << endl;
                        found = true;
                        break;
                    }
                }
                if(!found) cout << "Invalid name" << endl;
                break;
            }

            
            case 'n': {
                cout << "Account name: "; cin >> acc_name;
                
                Account acc(acc_name);
                accounts.push_back(acc);
            }

            
            case 'l':
                for(int i = 0; i < accounts.size(); i++) {
                    cout << "| " << accounts[i].name << endl;
                }
                break;

                
            case 'L':
                cout << accounts[select].name << endl << endl;
                break;

                
            case 'e': {
                bool found = false;
                cout << "Account name: "; cin >> acc_name;
                for(int i = 0; i < accounts.size(); i++) {
                    if(accounts[i].name == acc_name) {
                        found = true;
                        accounts.erase(accounts.begin() + i);
                        break;
                    }
                    if(!found) cout << "Invalid name" << endl;
                }
                break;
            }

            
            case 't': {
                // used pos1, pos2 instead of select
                // used name1, name2 instead of acc_name
                string name1, name2;
                int pos1, pos2;
                cout << "From account name #1: "; cin >> name1; cout << endl;
                cout << "To account name #2: "; cin >> name2; cout << endl;
                cout << "Amount: "; cin >> amount; cout << endl; 
                
                //check if name1 == name2
                if(name1 == name2) cout << "Same account, try diffrent accounts" << endl;
                
                //check if name1 and name2 exist
                bool found = false;
                for(int i = 0; i < accounts.size(); i++) {
                    if(accounts[i].name == name1) {
                        found = true;
                        pos1 = i;
                    }
                }
                if(!found) {
                    cout << "Invalid name" << endl;
                    break;
                }
                
                found = false;
                for(int i = 0; i < accounts.size(); i++) {
                    if(accounts[i].name == name2) {
                        found = true;
                        pos2 = i;
                    }
                }
                if(!found) {
                    cout << "Invalid name" << endl;
                    break;
                }

                // check if amount < 0
                if (amount < 0) {
                    cout << "Invalid amount" << endl;
                }

                // check if 1st account has enough money for transaction
                if(accounts[pos1].balance < amount) {
                    cout << "Not enough money" << endl;
                    break;
                }

                // now we know that both accounts exist and everything is set up
                accounts[pos1].withdraw(amount);
                accounts[pos2].deposit(amount);
                break;
            }

            
            case 'a':
                accounts[select].listDetails();
                break;

                
            case 'w':
                cout << "Amount: ";
                cin >> amount;
                accounts[select].withdraw(amount);
                break;

                
            case 'd':
                cout << "Amount: ";
                cin >> amount;
                accounts[select].deposit(amount);
                break;

                
            case 'b':
                accounts[select].checkBalance();
                break;

                
            case 'i':
                programInfo();
                break;

                
            case 'q':
                cout << "https://github.com/infinyFox936" << endl;
                return 0;

                
            default:
                cout << "Invalid option" << endl;
        }
    }
    return 0;
}