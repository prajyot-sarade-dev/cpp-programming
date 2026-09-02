#include <iostream>
#include <string>
using namespace std;

class CheckingAccount
{
private:
    string name;
    int accountNumber;
    double balance;
    double transactionFee;

public:

    // Constructor
    CheckingAccount(string n, int accNo, double bal, double fee)
    {
        name = n;
        accountNumber = accNo;
        balance = bal;
        transactionFee = fee;
    }

    // Deposit
    void deposit(double amount)
    {
        balance = balance + amount;

        cout << "Deposited: " << amount << endl;
    }

    // Withdrawal
    void withdraw(double amount)
    {
        double total = amount + transactionFee;

        if (total <= balance)
        {
            balance = balance - total;

            cout << "Withdrawn: " << amount << endl;
            cout << "Transaction Fee: " << transactionFee << endl;
            cout << "Total Deducted: " << total << endl;
        }
        else
        {
            cout << "Insufficient Balance!" << endl;
        }
    }

    // Account Statement
    void statement()
    {
        cout << "\n----- CHECKING ACCOUNT STATEMENT -----" << endl;

        cout << "Name: " << name << endl;
        cout << "Account Number: " << accountNumber << endl;
        cout << "Balance: " << balance << endl;
        cout << "Transaction Fee: " << transactionFee << endl;
    }
};

int main()
{
    // Creating object
    CheckingAccount account("Prajyot", 102, 15000, 50);

    account.deposit(2000);

    account.withdraw(1000);

    account.statement();

    return 0;
}