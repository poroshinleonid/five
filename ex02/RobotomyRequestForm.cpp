#include "RobotomyRequestForm.h"
#include "Bureaucrat.h"
#include <ctime>   


RobotomyRequestForm::RobotomyRequestForm() {}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &other){(void)other;};

RobotomyRequestForm::~RobotomyRequestForm() {}

RobotomyRequestForm &
RobotomyRequestForm::operator=(const RobotomyRequestForm &other) {
  (void)other;
  return (*this);
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : AForm("RobotomyRequestForm", 72, 45), target_(target){}

void RobotomyRequestForm::execution_implementation(const Bureaucrat &executor) const {
  (void)executor;
  bool coin_flip = static_cast<int>(std::time(0)) & 1;
  if (coin_flip) {
    std::cout << target_ << " has been robotomized" << std::endl;
    return;
  }
  std::cout << "The robotomization of " << target_ << " has failed." << std::endl;
  return;
}