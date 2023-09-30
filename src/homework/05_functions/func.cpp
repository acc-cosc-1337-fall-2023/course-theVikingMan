//add include statements
#include "func.h"
#include <iostream>
#include <cstring>


//add function code here

double get_gc_content(const std::string& dna)
{
  int lenOfString = dna.length();
  int validChars = 0;
  for (char c : dna) {
    if (c == 'G' || c == 'C') {
      validChars += 1;
    }
  }

  return (static_cast<double>(validChars) / lenOfString);
};


std::string get_reverse_string(std::string dna)
{
  std::string reversedString = "";
  for (int i = dna.length() - 1; i >= 0; i--) {
      reversedString += dna[i];
  }

  return reversedString;
};


std::string get_dna_complement(std::string dna)
{
  std::string reversedString = get_reverse_string(dna);
  std::string result = "";
  for (char letter : reversedString) {
    switch (letter) {
      case 'A':
          result += 'T';
          break;
      case 'T':
          result += 'A';
          break;
      case 'G':
          result += 'C';
          break;
      case 'C':
        result += 'G';
        break;
      default:
        break;
    }
  }
  return result;
}