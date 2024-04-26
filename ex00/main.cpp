#include "Bureaucrat.h"
#include <string>
#include <iostream>

int main(){
  try {
  Bureaucrat a("Jack", 1110);
  } catch (std::exception & e) {
    std::cerr << "Exception: " << e.what() << std::endl;
  }
}