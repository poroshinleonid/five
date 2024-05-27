#include "AForm.h"
#include "Bureaucrat.h"
#include "PresidentialPardonForm.h"
#include "RobotomyRequestForm.h"
#include "ShrubberyCreationForm.h"

void robo_check() {
  std::cout << std::endl;
  std::cout << std::endl;
  std::cout << std::endl;
  std::cout << std::endl;
  std::cout << std::endl;
  std::cout << std::endl;
  std::cout << std::endl;
  std::cout << std::endl;
  std::cout << std::endl;
  std::cout << std::endl;
  std::cout << std::endl;
  std::cout << std::endl;
  RobotomyRequestForm r1("John Smith");
  RobotomyRequestForm r2("John Smith");
  RobotomyRequestForm r3("John Smith");
  RobotomyRequestForm r4("John Smith");
  RobotomyRequestForm r5("John Smith");
  Bureaucrat president("A. Lincoln", 1);
  president.signForm(r1);
  president.signForm(r2);
  president.signForm(r3);
  president.signForm(r4);
  president.signForm(r5);
  for (int i = 0; i < 1000; i++) {
      president.executeForm(r1);
      president.executeForm(r2);
      president.executeForm(r3);
      president.executeForm(r4);
      president.executeForm(r5);
  }
}

int main() {
  /*
1.
2. C
3. Try signing each form unsuccessfully (low grade)
4. Try executing each form unsuccessfully (not signed)
5. Sign each form successfully
6. Try executing then again unsuccessfully (low grade)
7. Execute each form successfully
8. Execute Robotomy several times
*/

 // Create AForm(fail)
 // AForm wrong_form;
  Bureaucrat low_ranker("Low Ranker", 150);
  Bureaucrat president("A. Lincoln", 1);

 // Create 3 forms
  ShrubberyCreationForm shrub_example("forest");
  RobotomyRequestForm robo_example("John Smith");
  PresidentialPardonForm pardon_example("O. J. Simpson");
  // 3. Try signing each form unsuccessfully (low grade)
  try {
    low_ranker.signForm(shrub_example);
  } catch (std::exception &e) {
    std::cerr << "Exception: " << e.what() << std::endl;
  }
  try {
    low_ranker.signForm(robo_example);
  } catch (std::exception &e) {
    std::cerr << "Exception: " << e.what() << std::endl;
  } 
  try {
    low_ranker.signForm(pardon_example);
  } catch (std::exception &e) {
    std::cerr << "Exception: " << e.what() << std::endl;
  }

  // 4. Try executing each form unsuccessfully (not signed)
  try {
    president.executeForm(shrub_example);
  } catch (std::exception &e) {
    std::cerr << "Exception: " << e.what() << std::endl;
  }
  try {
    president.executeForm(robo_example);
  } catch (std::exception &e) {
    std::cerr << "Exception: " << e.what() << std::endl;
  } 
  try {
    president.executeForm(pardon_example);
  } catch (std::exception &e) {
    std::cerr << "Exception: " << e.what() << std::endl;
  }

  // 5. Sign each form successfully
  try {
    president.signForm(shrub_example);
  } catch (std::exception &e) {
    std::cerr << "Exception: " << e.what() << std::endl;
  }
  try {
    president.signForm(robo_example);
  } catch (std::exception &e) {
    std::cerr << "Exception: " << e.what() << std::endl;
  } 
  try {
    president.signForm(pardon_example);
  } catch (std::exception &e) {
    std::cerr << "Exception: " << e.what() << std::endl;
  }

  // 6. Try executing then again unsuccessfully (low grade)
  try {
    low_ranker.executeForm(shrub_example);
  } catch (std::exception &e) {
    std::cerr << "Exception: " << e.what() << std::endl;
  }
  try {
    low_ranker.executeForm(robo_example);
  } catch (std::exception &e) {
    std::cerr << "Exception: " << e.what() << std::endl;
  } 
  try {
    low_ranker.executeForm(pardon_example);
  } catch (std::exception &e) {
    std::cerr << "Exception: " << e.what() << std::endl;
  }
  // 7. Execute each form successfully
  try {
    president.executeForm(shrub_example);
  } catch (std::exception &e) {
    std::cerr << "Exception: " << e.what() << std::endl;
  }
  try {
    president.executeForm(robo_example);
  } catch (std::exception &e) {
    std::cerr << "Exception: " << e.what() << std::endl;
  } 
  try {
    president.executeForm(pardon_example);
  } catch (std::exception &e) {
    std::cerr << "Exception: " << e.what() << std::endl;
  }
  // 8. Execute Robotomy several times
  president.executeForm(robo_example);
  president.executeForm(robo_example);
  president.executeForm(robo_example);
  president.executeForm(robo_example);
  president.executeForm(robo_example);
  president.executeForm(robo_example);
  president.executeForm(robo_example);

  std::cout << std::endl;
  std::cout << std::endl;
  std::cout << std::endl;
  std::cout << std::endl;
  
  RobotomyRequestForm r1("John Smith");
  RobotomyRequestForm r2("John Smith");
  RobotomyRequestForm r3("John Smith");
  RobotomyRequestForm r4("John Smith");
  RobotomyRequestForm r5("John Smith");
  president.signForm(r1);
  president.signForm(r2);
  president.signForm(r3);
  president.signForm(r4);
  president.signForm(r5);
  president.executeForm(r1);
  president.executeForm(r2);
  president.executeForm(r3);
  president.executeForm(r4);
  president.executeForm(r5);
  robo_check();
}