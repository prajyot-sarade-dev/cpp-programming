#include <iostream>
#include <string>
using namespace std;

// Base class
class BankAccount
{
protected:
    string name;
    int accountNumber;
    double balance;

public:
    // Constructor
    BankAccount(string n, int accNo, double bal)
    {
        name = n;
        accountNumber = accNo;
        balance = bal;
    }

    // Deposit money
    void deposit(double amount)
    {
        balance += amount;
        cout << "Deposited: " << amount << endl;
    }

    // Display basic details
    void displayDetails()
    {
        cout << "Account Holder: " << name << endl;
        cout << "Account Number: " << accountNumber << endl;
        cout << "Balance: " << balance << endl;
    }
};


// Saving Account
class SavingAccount : public BankAccount
{
private:
    double interestRate;

public:
    // Constructor
    SavingAccount(string n, int accNo, double bal, double rate)
        : BankAccount(n, accNo, bal)
    {
        interestRate = rate;
    }

    // Withdraw money
    void withdraw(double amount)
    {
        if (amount <= balance)
        {
            balance -= amount;
            cout << "Withdrawn: " << amount << endl;
        }
        else
        {
            cout << "Insufficient balance!" << endl;
        }
    }

    // Calculate interest
    void calculateInterest()
    {
        double interest = balance * interestRate / 100;
        balance += interest;

        cout << "Interest added: " << interest << endl;
    }

    // Statement
    void statement()
    {
        cout << "\n--- Saving Account Statement ---" << endl;
        displayDetails();
        cout << "Interest Rate: " << interestRate << "%" << endl;
    }
};


// Checking Account
class CheckingAccount : public BankAccount
{
private:
    double transactionFee;

public:
    // Constructor
    CheckingAccount(string n, int accNo, double bal, double fee)
        : BankAccount(n, accNo, bal)
    {
        transactionFee = fee;
    }

    // Withdraw money with transaction fee
    void withdraw(double amount)
    {
        double total = amount + transactionFee;

        if (total <= balance)
        {
            balance -= total;

            cout << "Withdrawn: " << amount << endl;
            cout << "Transaction Fee: " << transactionFee << endl;
        }
        else
        {
            cout << "Insufficient balance!" << endl;
        }
    }

    // Statement
    void statement()
    {
        cout << "\n--- Checking Account Statement ---" << endl;
        displayDetails();
        cout << "Transaction Fee: " << transactionFee << endl;
    }
};


int main()
{
    // Creating Saving Account object
    SavingAccount saving("Prajyot", 101, 10000, 5);

    // Creating Checking Account object
    CheckingAccount checking("Atharav", 102, 15000, 50);

    // Saving account operations
    cout << "SAVING ACCOUNT\n";

    saving.deposit(2000);
    saving.withdraw(1000);
    saving.calculateInterest();
    saving.statement();


    // Checking account operations
    cout << "\n\nCHECKING ACCOUNT\n";

    checking.deposit(3000);
    checking.withdraw(2000);
    checking.statement();

    return 0;
}