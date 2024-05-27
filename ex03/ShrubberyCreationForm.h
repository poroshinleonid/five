#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include "AForm.h"
#include <string>

class ShrubberyCreationForm : virtual public AForm {
private:
  ShrubberyCreationForm();
  ShrubberyCreationForm(ShrubberyCreationForm const &other);
  ShrubberyCreationForm &operator=(const ShrubberyCreationForm &obj);

public:
  ~ShrubberyCreationForm();

  ShrubberyCreationForm(std::string target);

  void execution_implementation(const Bureaucrat &executor) const;

private:
  const std::string target_;
};

#endif // SHRUBBERYCREATIONFORM_HPP
