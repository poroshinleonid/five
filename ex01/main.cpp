#include "Bureaucrat.h"
#include <iostream>
#include <string>

int main() {
  std::cout << "Trying grade 1110 (too low)" << std::endl;
  try {
    Bureaucrat a("Jack", 1110);
  } catch (std::exception &e) {
    std::cerr << "Exception: " << e.what() << std::endl;
  }
  std::cout << "------------------------------" << std::endl << std::endl;

  std::cout << "Trying grade 0 (too high)" << std::endl;
  try {
    Bureaucrat b("Jim", 0);
  } catch (std::exception &e) {
    std::cerr << "Exception: " << e.what() << std::endl;
  }
  std::cout << "------------------------------" << std::endl << std::endl;

  std::cout << "Create bureaucrat and increment until error" << std::endl;
  Bureaucrat c("Jeb", 3);
  try {
    while (1) {
      std::cout << c << std::endl;
      c.promote();
    }
  } catch (std::exception &e) {
    std::cerr << "Exception: " << e.what() << std::endl;
  }
  std::cout << "------------------------------" << std::endl << std::endl;

  std::cout << "Create bureaucrat and decrement until error" << std::endl;
  Bureaucrat d("Jeb", 148);
  try {
    while (1) {
      std::cout << d << std::endl;
      d.demote();
    }
  } catch (std::exception &e) {
    std::cerr << "Exception: " << e.what() << std::endl;
  }



  
}