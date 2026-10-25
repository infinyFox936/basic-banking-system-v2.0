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
    cout << "######################################################################" << endl << "by fox" << endl << endl;
    cout << endl;
    cout << "Account name (one word only): ";
    cin >> acc_name;
    cout << endl;

    Account acc(acc_name);
    accounts.push_back(acc);



    while(1) {
        acc_name = ""; // prevent some errors
        // idk what errors but yk how they say
        // if it works dont touch it
        
        cout << endl;
        cout << "Options:" << endl;
        cout << "a - show all details of the account" << endl;
        cout << "w - withdraw money from the account" << endl;
        cout << "d - deposit money from the account" << endl;
        cout << "b - show balance of the account" << endl;
        cout << "i - show info of program and author" << endl;
        cout << "-" << endl;
        cout << "s - select account" << endl;
        cout << "n - new account" << endl;
        cout << "-" << endl;
        cout << "q - quit" << endl;
        cout << "---" << endl;

        cout << endl;
        cout << "Option to choose: ";
        cin >> option;
        cout << endl;
        

        switch (option) {
            case 's':
                // acc_name will be used here and in more places
                // to prevent more memory use and aditional variables
                cout << "Account name: "; cin >> acc_name;
                for(int i = 0; i < accounts.size(); i++) {
                    if(accounts[i].name == acc_name) {
                        select = i;
                        cout << "Account selected to " << accounts[i].name << endl;
                    } else {
                        cout << "Invalid name" << endl;
                    }
                }
                break;

            case 'n':
                // code in next commit
                break;
                
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
