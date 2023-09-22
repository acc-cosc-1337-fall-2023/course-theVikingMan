//write include statements
#include "repetition.h"
#include <iostream>
#include <string>

using std::cin;
using std::cout;

int main()
{

  int menu_option;

  do {
      // Create menu and get input for option
      int start = 0;
      do {
        if (start == 0) {
          cout<<"1-Factorial\n";
        } else if (start == 1) {
          cout<<"2-Greatest Common Divisor\n";
        } else {
          cout<<"3-Exit\n";
        }
        start += 1;
      } while (start < 3);

      cout<<"What menu option would you like to select: ";
      cin>>menu_option;

      if (menu_option == 1) {

          int num;
          cout<<"Input number of factorials to calculate to: ";
          cin>>num;
          cout<<"Factorial calculated: "<<factorial(num)<<"\n";
          cout<<"---------------------------------------------\n";

        } else if (menu_option == 2) {

            int num1; int num2;
            cout<<"Input number first number: ";
            cin>>num1;
            cout<<"Input number second number: ";
            cin>>num2;
            cout<<"The GCD is: "<<gcd(num1, num2)<<"\n";
            cout<<"---------------------------------------------\n";

        } else {

          std::string answer = "";
          cout<<"Are you sure you want to exit?: ";
          cin>>answer;
          if (to_lowercase(answer) == "yes") {
            menu_option = 4;
          }
          cout<<"---------------------------------------------\n";
        }
  } while (menu_option != 4);

  return 0;
}