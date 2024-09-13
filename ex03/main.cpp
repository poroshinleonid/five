#include "AForm.h"
#include "Bureaucrat.h"
#include "Intern.h"
#include "PresidentialPardonForm.h"
#include "RobotomyRequestForm.h"
#include "ShrubberyCreationForm.h"
#include <iostream>

int main() {
  Intern someRandomIntern;
  AForm *rrf;
  rrf = someRandomIntern.makeForm("robotomy requesst", "Bender");
  delete rrf;
  rrf = someRandomIntern.makeForm("robotomy request", "Bender");
  std::cout << rrf->getName() << std::endl;
  std::cout << rrf->getGradeToExecute() << std::endl;
  std::cout << rrf->getGradeToSign() << std::endl;
  Bureaucrat president("Obama", 1);
  rrf->beSigned(president);
  rrf->execute(president);
  rrf->execute(president);
  rrf->execute(president);
  rrf->execute(president);
  rrf->execute(president);
  rrf->execute(president);
  delete rrf;

  std::cout << std::endl << std::endl;
  rrf = someRandomIntern.makeForm("presidential pardon", "(not) a criminal");
  std::cout << rrf->getName() << std::endl;
  std::cout << rrf->getGradeToExecute() << std::endl;
  std::cout << rrf->getGradeToSign() << std::endl;
  rrf->beSigned(president);
  rrf->execute(president);
  delete rrf;

  std::cout << std::endl << std::endl;
  rrf = someRandomIntern.makeForm("shrubbery creation", "SAMPLE_SHRUB");
  std::cout << rrf->getName() << std::endl;
  std::cout << rrf->getGradeToExecute() << std::endl;
  std::cout << rrf->getGradeToSign() << std::endl;
  rrf->beSigned(president);
  rrf->execute(president);
  delete rrf;
}