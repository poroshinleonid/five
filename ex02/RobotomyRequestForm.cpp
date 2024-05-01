#include "RobotomyRequestForm.h"
#include "Bureaucrat.h"

RobotomyRequestForm::RobotomyRequestForm() {}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &other){};

RobotomyRequestForm::~RobotomyRequestForm() {}

RobotomyRequestForm &
RobotomyRequestForm::operator=(const RobotomyRequestForm &other) {
  (void)other;
  if (this != &other) {}
  return (*this);
}

void RobotomyRequestForm::execute(const Bureaucrat &executor) const {
  
}