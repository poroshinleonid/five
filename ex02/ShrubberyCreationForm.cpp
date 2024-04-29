#include "ShrubberyCreationForm.h"

ShrubberyCreationForm::ShrubberyCreationForm() {}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &other) : grade_to_sign_(other.grade_to_sign_), grade_to_execute(other.grade_to_execute){};

ShrubberyCreationForm::~ShrubberyCreationForm() {}

ShrubberyCreationForm	&ShrubberyCreationForm::operator=(const ShrubberyCreationForm &other) {
  if (this != &other) {
    this->grade_to_sign_ = other.grade_to_sign_;
    this->grade_to_execute = other.grade_to_execute;
  }
  return (*this);
}
