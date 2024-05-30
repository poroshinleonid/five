#include "PresidentialPardonForm.h"

PresidentialPardonForm::PresidentialPardonForm() {}

PresidentialPardonForm::PresidentialPardonForm(
    PresidentialPardonForm const &other) : AForm() {
  (void)other;
};

PresidentialPardonForm::~PresidentialPardonForm() {}

PresidentialPardonForm &
PresidentialPardonForm::operator=(const PresidentialPardonForm &other) {
  (void)other;
  return (*this);
}

PresidentialPardonForm::PresidentialPardonForm(const std::string &target)
    : AForm("PresidentialPardonForm", 25, 5), target_(target) {}

void PresidentialPardonForm::execution_implementation(
    const Bureaucrat &executor) const {
  (void)executor;
  std::cout << target_ << " has been pardoned by Zaphod Beeblebrox."
            << std::endl;
}
