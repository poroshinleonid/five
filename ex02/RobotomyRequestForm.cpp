#include "RobotomyRequestForm.h"

RobotomyRequestForm::RobotomyRequestForm() {}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &other)
    : grade_to_sign_(other.grade_to_sign_),
      grade_to_execute(other.grade_to_execute){};

RobotomyRequestForm::~RobotomyRequestForm() {}

RobotomyRequestForm &
RobotomyRequestForm::operator=(const RobotomyRequestForm &other) {
  if (this != &other) {
    this->grade_to_sign_ = other.grade_to_sign_;
    this->grade_to_execute = other.grade_to_execute;
  }
  return (*this);
}
