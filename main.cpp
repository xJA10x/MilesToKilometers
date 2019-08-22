/******************************************

Miles to kilometers

******************************************/

// Notes:
  // 1 mile = 1.6 kilometers

#include <iostream>
using namespace std;

// Function prototype.
// Takes one parameter,
// variabe miles in the main function.
double milesToKilometers(double miles);

int main() {

  cout << endl;
  cout << "######################## Running Program #########################" << endl;
  cout << endl;

  // Declares variables
  double miles;
  double toK;
  int control;

  // Prompts user.
  cout << "Enter -1 to quit program: ";
  cin >> miles;
  cout << endl;

  while(control != -1) {

    // Prompts user.
    cout << "Enter distance in miles to conver to kilometers: ";
    cin >> miles;
    cout << endl;

    // Function call.
    // Takes one parameters.
    // Stores output in the variable toK.
    toK = milesToKilometers(miles);

    cout << miles << " miles to kilometers is " << toK << " kilometers" << endl;

    cout << "Enter -1 to quit program: ";
    cin >> control;
    cout << endl;

    if(control == -1) {

      cout << "Thanks for using the program" << endl;

    } else {

      cout << "Ok, let's do this" << endl;


    }

  }


  cout << endl;
  cout << "######################## Exting Program ###########################" << endl;
  cout << endl;


  return 0;

}

// Builds function.
// Takes one parameter,
// variable miles in the main function.
double milesToKilometers(double miles) {

  return miles * 1.6;

}
