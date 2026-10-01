#include <iostream>
#include <string>
using namespace std;

// Homework 6 — Your Name
// CIS 5 Week 06 · Menu

int selection,
    num = 0,
    countdown = 0,
    option_1 = 1,
    option_2 = 2,
    option_3 = 3;

string name;
string hello = "Hello";
string phrase = hello + " " + name;

int main() {

    do {
         cout << "--Make a Selection--\n";

    cout << "Enter the number 1: \n" 
         << "Enter the number 2: \n"
         << "Enter the number 3 to Exit.\n"
         << "Enter an option: ";
         cin >> selection;
         cout << endl;

        if (selection == option_1) {

            cout << "Enter your name: ";
            cin >> name;
            cout << "Hello, " << name << "." << '\n';
            cout << endl;

        } 
        if (selection == option_2) {

            cout << "Enter a number to start the countdown: ";
            cin >> num;
            
            for (num; num >= countdown; num--) {
                cout << num << endl;
            }

        } if (selection == option_3) {

            cout << "You've selected 3.\n";

        } 

    } while (selection != option_3);

    cout << "Menu Closed.\n";

  return 0;
}
