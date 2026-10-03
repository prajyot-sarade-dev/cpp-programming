#include <iostream>
using namespace std;

class LibraryItem
{
protected:
    int itemId;
    string title;

public:
    void getItem()
    {
        cout << "Enter Item ID: ";
        cin >> itemId;

        cout << "Enter Title: ";
        cin >> title;
    }

    void displayItem()
    {
        cout << "Item ID: " << itemId << endl;
        cout << "Title: " << title << endl;
    }
};

class Book : public LibraryItem
{
private:
    string author;

public:
    void getBook()
    {
        getItem();

        cout << "Enter Author: ";
        cin >> author;
    }

    void displayBook()
    {
        displayItem();
        cout << "Author: " << author << endl;
    }
};

class Magazine : public LibraryItem
{
private:
    int issueNo;

public:
    void getMagazine()
    {
        getItem();

        cout << "Enter Issue Number: ";
        cin >> issueNo;
    }

    void displayMagazine()
    {
        displayItem();
        cout << "Issue Number: " << issueNo << endl;
    }
};

int main()
{
    Book b;
    Magazine m;

    cout << "----- Enter Book Details -----" << endl;
    b.getBook();

    cout << "\n----- Enter Magazine Details -----" << endl;
    m.getMagazine();

    cout << "\n----- Book Details -----" << endl;
    b.displayBook();

    cout << "\n----- Magazine Details -----" << endl;
    m.displayMagazine();

    return 0;
}
