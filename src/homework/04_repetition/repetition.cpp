//add include statements
#include "repetition.h"
#include <string>


// a loop of your choice.  Do not use a recursive solution to solve this problem.
// write the function code for the factorial
int factorial(int num)
{
  int output = 1;
  for (int i = 1; i < num + 1; i++) {
    output *= i;
  }

  return output;
};

// write the function code gcd
int gcd(int num1, int num2)
{
    do {
        if (num1 < num2) {
            std::swap(num1, num2);
        } else if (num1 > num2) {
          num1 = num1 - num2;
        }
    } while (num1 != num2);

   return num1;
};

std::string to_lowercase(std::string word) {
  for (int i = 0; i < word.length(); i++) {
    word[i] = tolower(word[i]);
  }
  return word;
}


