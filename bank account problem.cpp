#include <iostream>
using namespace std;

class BankAccount {
private:
    int accountNumber;
    double balance;

public:
    string accountHolderName;
    string bankName;

    BankAccount(int accNo, double initialBalance) {
        accountNumber = accNo;
        balance = initialBalance;
    }

    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            cout << "Deposit successful" << endl;
        } else {
            cout << "Amount must be greater than zero"<<endl;
        }
    }

    void withdraw(double amount) {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
            cout << "Withdrawal successful" << endl;
        } else {
            cout << "Not enough balance" << endl;
        }
    }

    double getBalance() {
        return balance;
    }

    void displayAccountDetails() {
        cout << "Account Holder Name: " << accountHolderName << endl;
        cout << "Bank Name: " << bankName << endl;
        cout << "Account Number: " << accountNumber << endl;
        cout << "Current Balance: " << balance << endl;
    }
};

int main() {
    int accNo;
    double initialBalance;
    double depositAmount, withdrawAmount;

    cout << "Enter Account Number: ";
    cin >> accNo;

    cout << "Enter Initial Balance: ";
    cin >> initialBalance;

    BankAccount acc(accNo, initialBalance);

    cout << "Enter Account Holder Name: ";
    cin.ignore();
    getline(cin, acc.accountHolderName);

    cout << "Enter Bank Name: ";
    getline(cin, acc.bankName);

    cout << "Enter Deposit Amount: ";
    cin >> depositAmount;
    acc.deposit(depositAmount);

    cout << "Enter Withdraw Amount: ";
    cin >> withdrawAmount;
    acc.withdraw(withdrawAmount);

    cout << "\nFinal Balance: " << acc.getBalance() << endl;
    acc.displayAccountDetails();

    return 0;
}
