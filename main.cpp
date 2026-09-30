#include <iostream>
#include <string>
using namespace std;

// Homework 6 — Your Name
// CIS 5 Week 06 · Menu

int option_1 = 1,
    option_2 = 2,
    option_3 = 3,
    selection;

string name = "Cesar";
string hello = "Hello";
string phrase = hello + " " + name;
string phrase2 = "Option 2";

int main() {

  do
  {
    cout << "Make a Selection\n";

    cout << "Enter the number 1: \n" 
         << "Enter the number 2: \n"
         << "Enter the number 3:\n"
         << "Enter an option: \n";
         cin >> selection;

  } while(selection <= option_1); {
      cout << phrase;

  } while(selection <= option_2); {
      cout << phrase;
  }



  return 0;
}
