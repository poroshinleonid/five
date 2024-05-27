#include "Intern.h"
#include "AForm.h"
#include "PresidentialPardonForm.h"
#include "RobotomyRequestForm.h"
#include "ShrubberyCreationForm.h"
#include <iostream>
#include <string>

Intern::Intern() {}

Intern::Intern(Intern const &other) : {(void)other;}

Intern::~Intern() {}

Intern	&Intern::operator=(const Intern &other) {
  (void)other;
  return (*this);
}

static AForm *makeRobotomy(const std::string &target) {
  return new RobotomyRequestForm(target);
}

static AForm *makePardon(const std::string &target) {
  return new PresidentialPardonForm(target);
}


static AForm *makeShrubbery(const std::string &target) {
  return new ShrubberyCreationForm(target);
}


AForm *Intern::makeForm(const std::string &name, const std::string &target) {
  std::string form_types[3] = {
        "robotomy request",
        "presidential pardon",
        "shrubbery creation"
    };
   AForm *(*form_generators[3])(const std::string &)= {&makeRobotomy, &makePardon, &makeShrubbery};
    AForm *(*selected_form_generator)(const std::string &target) = NULL;
    for (int i = 0; i < 3; i++) {
      if (name == form_types[i]) {
        selected_form_generator = form_generators[i];
        break;
      }
    }
    if (selected_form_generator == NULL) {
      std::cerr << "Can't create a form named \"" << name << "\" - unknown form name!" < std::endl;
      return NULL;
    }
  std::cout << "Intern creates " << name << std::endl;
  return selected_form_generator(target);
}
