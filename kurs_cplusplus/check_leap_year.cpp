#include <iostream>

int main() {
  int year;
  bool flag = false;
  bool leap_year = false;

  // Input and format check
  do {
    std::cout << "Give year:" << std::endl;
    std::cin >> year;

    if (year >= 1000 && year < 10000) flag = true;
    else std::cout << "Format incorrect:" << std::endl;

  } while (flag == false);

  // Check leap year
  if (year % 4 == 0){
    if (year % 100 == 0 && year % 400 != 0){
      leap_year = false;
    } else
      leap_year = true;
  }
  else leap_year = false;

  // Give answer
  std::cout << "The year "<< year << " is " << leap_year  << std::endl;

}
