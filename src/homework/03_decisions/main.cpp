//write include statements
#include "decisions.h"
#include <iostream>

using std::cin;
using std::cout;

int main()
{
  int reported_grade;
  cout<<"What was you numerical grade: ";
  cin>>reported_grade;

  if (reported_grade != reported_grade*1) {
    cout<<"Not a valid input.";
    return 0;
  }

  if (reported_grade < 0 || reported_grade > 100) {
    cout<<"Grade is not in the range of 1 to 100.";
    return 0;
  }

  cout<<"Using the if function, your grade is: "<<get_letter_grade_using_if(reported_grade)<<"\n";
  cout<<"Using the switch function, your grade is: "<<get_letter_grade_using_switch(reported_grade)<<"\n";

  return 0;
}