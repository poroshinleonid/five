#include "ShrubberyCreationForm.h"
#include <fstream>
#include <iostream>
#include <string>

ShrubberyCreationForm::ShrubberyCreationForm() {}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &other)
    : AForm() {
  (void)other;
}

ShrubberyCreationForm::~ShrubberyCreationForm() {}

ShrubberyCreationForm &
ShrubberyCreationForm::operator=(const ShrubberyCreationForm &other) {
  (void)other;
  return (*this);
}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string &target)
    : AForm("ShrubberyCreationForm", 145, 137), target_(target) {}

void ShrubberyCreationForm::execution_implementation(
    const Bureaucrat &executor) const {
  (void)executor;
  std::ofstream target_file;
  target_file.open((target_ + "_shrubbery").c_str());

  target_file << "       _-_\n\
    /~~   ~~\\ \n\
 /~~         ~~\\ \n\
{               } \n\
 \\  _-     -_  / \n\
   ~  \\\\ //  ~ \n\
_- -   | | _- _ \n\
  _ -  | |   -_ \n\
      // \\\\ \n\
";
  target_file.close();
  return;
}