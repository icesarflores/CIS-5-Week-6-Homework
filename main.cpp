#include <iostream>
#include <string>
using namespace std;

// Homework 6 — Your Name
// CIS 5 Week 06 · Menu

int selection,
    counter = 0,
    num = 0,
    countdown = 0;

string name = "Cesar";
string hello = "Hello";
string phrase = hello + " " + name;

int main() {

  do
  {
    counter++;
    cout << "--Make a Selection--\n";

    cout << "Enter the number 1: \n" 
         << "Enter the number 2: \n"
         << "Enter the number 3 to Exit:\n"
         << "Enter an option: ";
         cin >> selection;
         cout << endl;

        if (selection == 1) {
            cout << "Enter your name: ";
            cin >> name;
            cout << "Hello, " << name << "." << '\n';
            cout << endl;

        } 
        else if (selection == 2) {

            cout << "Enter a number between 10 and 100: ";
            cin >> num;
            
            for (num; num >= countdown; num--){
            cout << num << endl;
            }

           
        } 

    } while (selection != 3);

cout << "Your selection is 3.\n";
cout << "The Menu is closed.\n";

  return 0;
}
