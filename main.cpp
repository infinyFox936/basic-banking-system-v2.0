#include <iostream>
#include <string>
#include "src/account.hpp"
#include "src/info.hpp"
using namespace std;

int main()
{
    string accName;
    char option;
    int amount;
    
    cout << "######################################################################" << endl;
    cout << "#                     SIMPLE BANKING SYSTEM v2.0                     #" << endl;
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
        cout << "i - show info of program and author" << endl;
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
        
        case 'i':
            programInfo();
            break;
            
        case 'q':
            cout << "https://github.com/infinyFox936" << endl;
            return 0;
            break;

        default:
            cout << "Incorrect option, try again" << endl << endl;
        }
    }
    return 0;
}