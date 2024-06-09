#include <iostream>

using namespace std;

void accessMenu()
{
    cout << "****************" << endl;
    cout << "1. Check Balance" << endl;
    cout << "2. Deposit" << endl;
    cout << "3. Withdraw" << endl;
    cout << "4. Exit" << endl;
    cout << "****************" << endl;
}

int main()
{
    int option;
    double balance = 2000;

    do
    {
        accessMenu();

        cout << "Select Option: ";
        cin >> option;

        switch (option)
        {
        case 1:
            cout << "Available Balance: Rs." << balance << endl; break;

        case 2:
            double depositAmount;
            cout << "Enter deposit amount: ";
            cin >> depositAmount;
            balance += depositAmount;
            cout << "Deposit Successfull"<< endl; break;

        case 3:
            double withdrawAmount;
            cout << "Enter withdraw amount: ";
            cin >> withdrawAmount;

            if (withdrawAmount < balance){
                balance -= withdrawAmount;
                cout << "Take your money" << endl;
            }else{
                cout << "Insufficient balance" << endl;
            }
            break;
        }

    } while (option != 4);

    system("pause>0");
}