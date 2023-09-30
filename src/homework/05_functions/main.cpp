//write include statements
#include "func.h"
#include <iostream>
#include <string>

using std::cin;
using std::cout;

// Menu

// 1- Get GC Content
// 2- Get DNA Complement
// 3- Exit

// In main.cpp, write code that prompts user to enter 1 for Get GC Content, or 2 for Get DNA Complement.
// The program will prompt user
// for a DNA string and call either get gc content or get dna complement function and display the result.
int main()
{
  int menu_option;

  do {
      // Create menu and get input for option
      int start = 0;
      do {
        if (start == 0) {
          cout<<"1-Get GC Content\n";
        } else if (start == 1) {
          cout<<"2-Get DNA Complement\n";
        } else {
          cout<<"3-Exit\n";
        }
        start += 1;
      } while (start < 3);

      cout<<"What function would you like to perform? ";
      cin>>menu_option;

      if (menu_option == 1) {

          std::string inputString = "";
          cout<<"Input string to calculate the GC content: ";
          cin>>inputString;
          cout<<"GC Content calculated is: "<<get_gc_content(inputString)<<"\n";
          cout<<"---------------------------------------------\n";

        } else if (menu_option == 2) {

          std::string inputString = "";
          cout<<"Input string to get the DNA Complement: ";
          cin>>inputString;
          cout<<"DNA Complement is: "<<get_dna_complement(inputString)<<"\n";
          cout<<"---------------------------------------------\n";

        } else {

          std::string answer = "";
          cout<<"Are you sure you want to exit?: ";
          cin>>answer;
          if (answer == "YES") {
            menu_option = 4;
          }
          cout<<"---------------------------------------------\n";
        }
  } while (menu_option != 4);

  return 0;
}
