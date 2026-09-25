#include <iostream>
using namespace std;

class LibraryItem
{
public:
    int id;
    string title;

    void getItem()
    {
        cout << "Enter ID: ";
        cin >> id;
        cout << "Enter Title: ";
        cin >> title;
    }

    void displayItem()
    {
        cout << "ID: " << id << endl;
        cout << "Title: " << title << endl;
    }
};

// Derived class 1
class Book : public LibraryItem
{
public:
    string author;

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

// Derived class 2
class Magazine : public LibraryItem
{
public:
    int issueNo;

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

    cout << "--- Book Details ---" << endl;
    b.getBook();

    cout << "\n--- Magazine Details ---" << endl;
    m.getMagazine();

    cout << "\n--- Book Details ---" << endl;
    b.displayBook();

    cout << "\n--- Magazine Details ---" << endl;
    m.displayMagazine();

    return 0;
}