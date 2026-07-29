#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int choice;

    cout << "===== MENU =====" << endl;
    cout << "1. Sum of First N Numbers" << endl;
    cout << "2. Reverse a Number" << endl;
    cout << "3. Palindrome Number" << endl;
    cout << "4. Armstrong Number" << endl;
    cout << "Enter your choice: ";
    cin >> choice;

    switch(choice) {

        case 1: {
            int n, sum = 0;
            cout << "Enter n: ";
            cin >> n;

            for(int i = 1; i <= n; i++) {
                sum = sum + i;
            }

            cout << "Sum = " << sum;
            break;
        }

        case 2: {
            int num, reverse = 0, rem;
            cout << "Enter a number: ";
            cin >> num;

            while(num != 0) {
                rem = num % 10;
                reverse = reverse * 10 + rem;
                num = num / 10;
            }

            cout << "Reverse = " << reverse;
            break;
        }

        case 3: {
            int num, original, reverse = 0, rem;
            cout << "Enter a number: ";
            cin >> num;

            original = num;

            while(num != 0) {
                rem = num % 10;
                reverse = reverse * 10 + rem;
                num = num / 10;
            }

            if(original == reverse)
                cout << "Palindrome Number";
            else
                cout << "Not a Palindrome Number";

            break;
        }

        case 4: {
            int num, original, rem, digits = 0, result = 0;

            cout << "Enter a number: ";
            cin >> num;

            original = num;

            while(num != 0) {
                digits++;
                num = num / 10;
            }

            num = original;

            while(num != 0) {
                rem = num % 10;
                result = result + pow(rem, digits);
                num = num / 10;
            }

            if(result == original)
                cout << "Armstrong Number";
            else
                cout << "Not an Armstrong Number";

            break;
        }

        default:
            cout << "Invalid Choice";
    }

   
}
