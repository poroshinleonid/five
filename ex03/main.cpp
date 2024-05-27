#include "AForm.h"
#include "Bureaucrat.h"
#include "Intern.h"
#include "PresidentialPardonForm.h"
#include "RobotomyRequestForm.h"
#include "ShrubberyCreationForm.h"

int main() {
  {
    Intern someRandomIntern;
    AForm *rrf;
    rrf = someRandomIntern.makeForm("robotomy request", "Bender");
    rrf = someRandomIntern.makeForm("robotomy requesst", "Bender");
  }
}