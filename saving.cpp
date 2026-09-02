#include <iostream>
#include <string>
using namespace std;

class SavingAccount
{
private:
    string name;
    int accountNumber;
    double balance;
    double interestRate;

public:

    // Constructor
    SavingAccount(string n, int accNo, double bal, double rate)
    {
        name = n;
        accountNumber = accNo;
        balance = bal;
        interestRate = rate;
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
        if (amount <= balance)
        {
            balance = balance - amount;
            cout << "Withdrawn: " << amount << endl;
        }
        else
        {
            cout << "Insufficient Balance!" << endl;
        }
    }

    // Interest Calculation
    void calculateInterest()
    {   double beforeintrest=balance;
        double interest = balance * interestRate / 100;
       
        balance = balance + interest;
        cout<<"Balence before intrest==>"<<beforeintrest<<endl;


        cout << "Interest Added: " << interest << endl;
        cout<<"Balende after intrest==>"<<balence<<endl;
    }

    // Account Statement
    void statement()
    {
        cout << "\n----- ACCOUNT STATEMENT -----" << endl;
        cout << "Name: " << name << endl;
        cout << "Account Number: " << accountNumber << endl;
        cout << "Balance: " << balance << endl;
        cout << "Interest Rate: " << interestRate << "%" << endl;
    }
};

int main()
{
    // Creating object
    SavingAccount account("Prajyot", 101, 10000, 5);

    account.deposit(2000);

    account.withdraw(1000);

    account.calculateInterest();

    account.statement();

    return 0;
}