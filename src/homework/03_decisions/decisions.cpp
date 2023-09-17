//write include statement for decisions header
#include "hwexpressions.h"
#include <string>


std::string get_letter_grade_using_if(int grade)
{
	if (90 <= grade && grade <= 100) {
    return "A";
  } else if (80 <= grade && grade <= 89) {
    return "B";
  } else if (70 <= grade && grade <= 79) {
    return "C";
  } else if (60 <= grade && grade <= 69) {
    return "D";
  } else {
    return "F";
  }
};


std::string get_letter_grade_using_switch(int grade)
{
    switch (grade)
    {
    case 90 ... 100:
        return "A";
    case 80 ... 89:
        return "B";
    case 70 ... 79:
        return "C";
    case 60 ... 69:
        return "D";
    default:
        return "F";
    }
}