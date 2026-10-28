
    
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    char data[100];

    cout << "Enter data: ";
    cin.getline(data, 100);

    ofstream fout("data.txt");

    fout.write(data, sizeof(data));

    fout.close();

    cout << "Data written successfully.";

   

     // Reading data from file
    ifstream fin("data.txt");
    fin.read(data, sizeof(data));

    cout << "\nData read from file: ";
    cout.write(data, fin.gcount());

    fin.close();

   
   
    return 0;
}



 