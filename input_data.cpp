#include <iostream>
#include <fstream>
#include<string>
using namespace std;
int main()
{
    ofstream file1;
    string data;
    // Open file and write data
    file1.open("stud.txt",ios::app);
    file1<<"Hello, Welcome to C++ File Handling!\n I am PJ.\n When things changes inside you , Things changes around you.\n MUmmy over everthing. ";
    cout<<"file created succesfully";
    file1.close();
    ifstream file2;
    file2.open("stud.txt");

    while (getline(file2, data))
    {
        cout << data << endl;
    }
    file2.close();

    return 0;
}