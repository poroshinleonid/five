#include "PresidentialPardonForm.h"

PresidentialPardonForm::PresidentialPardonForm() {}

PresidentialPardonForm::PresidentialPardonForm(
    PresidentialPardonForm const &other)
    : grade_to_sign_(other.grade_to_sign_),
      grade_to_execute(other.grade_to_execute){};

PresidentialPardonForm::~PresidentialPardonForm() {}

PresidentialPardonForm &
PresidentialPardonForm::operator=(const PresidentialPardonForm &other) {
  if (this != &other) {
    this->grade_to_sign_ = other.grade_to_sign_;
    this->grade_to_execute = other.grade_to_execute;
  }
  return (*this);
}
