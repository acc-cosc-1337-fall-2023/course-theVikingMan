//write include statements
#include <iostream>
#include "hwexpressions.h"

//write namespace using statement for cout
using std::cin;
using std::cout;

int main()
{
  double meal_amount, tip_rate, tip_amount, tax_amount, total;

  cout<<"What was the total amount of your meal: ";
  cin>>meal_amount;

  tax_amount = get_sales_tax_amount(meal_amount);

  cout<<"What is the tip rate: "; // Assume 15% tip rate
  cin>>tip_rate;
  cout<<"\n";

  tip_amount = get_tip_amount(meal_amount, tip_rate);

  total = tip_amount + tax_amount + meal_amount;

  cout<<"Meal Amount: "<<meal_amount<<"\n"<<"Sales Tax: "<<tax_amount<<"\n"<<"Tip Amount: "<<tip_amount<<"\n"<<"Total: "<<total<<"\n";

  return 0;
}
