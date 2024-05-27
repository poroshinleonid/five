#include "Bureaucrat.h"
#include "Form.h"
#include <iostream>
#include <string>

void ex00_test();
void ex01_test();

int main() {
  ex00_test();
  ex01_test();
}

void ex01_test() {
  std::cout << "Trying Form creation: Good" << std::endl;
  try {
    Form new_form("Formular", 121, 89);
    std::cout << new_form << std::endl;
  } catch (std::exception &e) {
    std::cerr << "Exception: " << e.what() << std::endl;
  }
  std::cout << "------------------------------" << std::endl << std::endl;

  std::cout << "Trying Form creation: too HIGH" << std::endl;
  try {
    Form new_form1("Formular", 0, 89);
    std::cout << new_form1 << std::endl;
  } catch (std::exception &e) {
    std::cerr << "Exception: " << e.what() << std::endl;
  }
  std::cout << "------------------------------" << std::endl << std::endl;

  std::cout << "Trying Form creation: too LOW" << std::endl;
  try {
    Form new_form2("Formular", 228, 89);
    std::cout << new_form2 << std::endl;
  } catch (std::exception &e) {
    std::cerr << "Exception: " << e.what() << std::endl;
  }
  std::cout << "------------------------------" << std::endl << std::endl;

  Form my_form("Antrag", 100, 100);
  Bureaucrat chief("Chief", 1);

  std::cout << "Trying to sign GOOD" << std::endl;
  try {
    chief.signForm(my_form);
  } catch (std::exception &e) {
    std::cerr << "Exception: " << e.what() << std::endl;
  }
  std::cout << "------------------------------" << std::endl << std::endl;

  std::cout << "Trying to sign AGAIN" << std::endl;
  try {
    chief.signForm(my_form);
  } catch (std::exception &e) {
    std::cerr << "Exception: " << e.what() << std::endl;
  }
  std::cout << "------------------------------" << std::endl << std::endl;

  Form my_form2("Antrag2", 100, 100);
  Bureaucrat clerk("Chief", 150);

  std::cout << "Trying to sign TOO LOW" << std::endl;
  try {
    clerk.signForm(my_form2);
  } catch (std::exception &e) {
    std::cerr << "Exception: " << e.what() << std::endl;
  }
  std::cout << "------------------------------" << std::endl << std::endl;

  Form superform("Superform", 100, 100);
  Bureaucrat wagie("Wagie", 150);

  std::cout << "Trying to beSigned() TOO LOW - expecting to catch an exception!"
            << std::endl;
  try {
    superform.beSigned(wagie);
  } catch (std::exception &e) {
    std::cerr << "Exception: " << e.what() << std::endl;
  }
  std::cout << "------------------------------" << std::endl << std::endl;
}

void ex00_test() {
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
  std::cout << "------------------------------" << std::endl << std::endl;
}