#include <iostream>
using namespace std;

class BankAccount {
private:
    int accountNumber;
    string accountHolderName;
    double balance;

public:
    void setAccountDetails(int accNo, string name, double bal) {
        accountNumber = accNo;
        accountHolderName = name;
        balance = bal;
    }

    void deposit(double amount) {
        balance += amount;
        cout << "Amount Deposited Successfully!\n";
    }

    void withdraw(double amount) {
        if (balance >= amount) {
            balance -= amount;
            cout << "Withdrawal Successful!\n";
        } else {
            cout << "Insufficient Balance!\n";
        }
    }

    void display() {
        cout << "\nAccount Number: " << accountNumber;
        cout << "\nAccount Holder: " << accountHolderName;
        cout << "\nBalance: " << balance << endl;
    }
};

int main() {
    BankAccount b;
    int choice;
    int accNo;
    string name;
    double balance, amount;

    cout << "Enter Account Number: ";
    cin >> accNo;
    cout << "Enter Account Holder Name: ";
    cin >> name;
    cout << "Enter Initial Balance: ";
    cin >> balance;

    b.setAccountDetails(accNo, name, balance);

    do {
        cout << "\n1. Deposit";
        cout << "\n2. Withdraw";
        cout << "\n3. Display Details";
        cout << "\n4. Exit";
        cout << "\nEnter choice: ";
        cin >> choice;

        switch(choice) {
        case 1:
            cout << "Enter Amount: ";
            cin >> amount;
            b.deposit(amount);
            break;

        case 2:
            cout << "Enter Amount: ";
            cin >> amount;
            b.withdraw(amount);
            break;

        case 3:
            b.display();
            break;

        case 4:
            cout << "Exiting...";
            break;

        default:
            cout << "Invalid Choice!";
        }
    } while(choice != 4);

    return 0;
}