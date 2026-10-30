
#include <iostream>
#include <string>
using namespace std;

// Base Class
class BankAccount
{
protected:
    int accountNumber;
    string name;
    double balance;

public:

    // Parameterized Constructor
    BankAccount(int accNo, string customerName, double amount)
    {
        accountNumber = accNo;
        name = customerName;
        balance = amount;
    }

    // Deposit Function
    void deposit(double amount)
    {
        if (amount > 0)
        {
            balance += amount;
            cout << "Money Deposited Successfully!" << endl;
        }
        else
        {
            cout << "Invalid Amount!" << endl;
        }
    }

    // Withdraw Function
    void withdraw(double amount)
    {
        if (amount > 0 && amount <= balance)
        {
            balance -= amount;
            cout << "Money Withdrawn Successfully!" << endl;
        }
        else
        {
            cout << "Insufficient Balance or Invalid Amount!" << endl;
        }
    }

    // Display Function
    void display()
    {
        cout << "\nAccount Number: " << accountNumber;
        cout << "\nCustomer Name: " << name;
        cout << "\nAvailable Balance: " << balance << endl;
    }
};

// Derived Class 1
class SavingsAccount : public BankAccount
{
public:

    SavingsAccount(int accNo, string customerName, double amount)
        : BankAccount(accNo, customerName, amount)
    {
    }

    void calculateInterest()
    {
        double interest = balance * 0.05;
        cout << "Yearly Interest (5%): " << interest << endl;
    }
};

// Derived Class 2
class CurrentAccount : public BankAccount
{
public:

    CurrentAccount(int accNo, string customerName, double amount)
        : BankAccount(accNo, customerName, amount)
    {
    }

    void accountType()
    {
        cout << "Account Type: Current Account" << endl;
    }
};

// Main Function
int main()
{

cout << "============================================" << endl;
    cout << "   Welcome to NoMoney NoProblem Bank   $$ " << endl;
    cout << "=================================================" << endl;




    int choice;
    double amount;

    SavingsAccount s1(1001, "Prajyot", 5000);
    CurrentAccount c1(1002, "Rahul", 10000);

    do
    {
        cout << "\n===== BANKING MANAGEMENT SYSTEM =====";
        cout << "\n1. Savings Account Details";
        cout << "\n2. Current Account Details";
        cout << "\n3. Deposit Money (Savings)";
        cout << "\n4. Withdraw Money (Savings)";
        cout << "\n5. Calculate Interest";
        cout << "\n6. Deposit Money (Current)";
        cout << "\n7. Withdraw Money (Current)";
        cout << "\n8. Exit";

        cout << "\nEnter Your Choice: ";
        cin >> choice;

        switch (choice)
        {
            case 1:
                s1.display();
                break;

            case 2:
                c1.display();
                c1.accountType();
                break;

            case 3:
                cout << "Enter Deposit Amount: ";
                cin >> amount;
                s1.deposit(amount);
                break;

            case 4:
                cout << "Enter Withdrawal Amount: ";
                cin >> amount;
                s1.withdraw(amount);
                break;

            case 5:
                s1.calculateInterest();
                break;

            case 6:
                cout << "Enter Deposit Amount: ";
                cin >> amount;
                c1.deposit(amount);
                break;

            case 7:
                cout << "Enter Withdrawal Amount: ";
                cin >> amount;
                c1.withdraw(amount);
                break;

            case 8:
                cout << "Thank You for Using Our Bank!";
                break;

            default:
                cout << "Invalid Choice!";
        }

    } while (choice != 8);

    return 0;
}
