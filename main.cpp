#include <iostream>
#include <string>
#include "src/account.hpp"
using namespace std;

int main()
{
    /*
    testing
    Account person("Steve Jobs");
    person.deposit(100);
    person.checkBalance();
    person.listDetails();
    */
    string accName;
    char option;
    int amount;
    
    cout << "######################################################################" << endl;
    cout << "#                EXTREMELY SIMPLE BANKING SYSTEM v2.0                #" << endl;
    cout << "######################################################################" << endl << endl << endl;

    cout << "Account name (one word only): ";
    cin >> accName;
    cout << endl << endl << endl;
    
    Account account(accName);
    


    while(1)
    {
        cout << "Options:" << endl;
        cout << "a - show all details of the account" << endl;
        cout << "w - withdraw money from the account" << endl;
        cout << "d - deposit money from the account" << endl;
        cout << "b - show balance of the account" << endl;
        cout << "q - quit" << endl;

        cout << "--" << endl;

        cout << "Option to choose: ";
        cin >> option;
        cout << endl;

        switch (option)
        {
        case 'a':
            account.listDetails();
            cout << endl;
            break;

        case 'w':
            cout << "Amount: ";
            cin >> amount;
            cout << endl;
            account.withdraw(amount);
            break;

        case 'd':
            cout << "Amount: ";
            cin >> amount;
            cout << endl;
            account.deposit(amount);
            break;

        case 'b':
            account.checkBalance();
            break;

        case 'q':
            cout << "https://github.com/infinyFox936" << endl;
            cout << "thx for taking your precoius time to check a stupid extremely simple bnking system; transactions prob coming 👀";
            return 0;
            break;

        default:
            cout << "Incorrect option, try again" << endl << endl;
        }
    }
    return 0;
}