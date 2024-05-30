#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include "AForm.h"
#include "Bureaucrat.h"

class PresidentialPardonForm : virtual public AForm {
private:
  PresidentialPardonForm();
  PresidentialPardonForm(PresidentialPardonForm const &other);
  PresidentialPardonForm &operator=(const PresidentialPardonForm &obj);

public:
  ~PresidentialPardonForm();

  PresidentialPardonForm(const std::string &target);

  void execution_implementation(const Bureaucrat &executor) const;

private:
  std::string target_;
};

#endif // PRESIDENTIALPARDONFORM_HPP
