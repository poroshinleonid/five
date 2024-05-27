#ifndef INTERN_HPP
#define INTERN_HPP

#include <string>
#include "AForm.h"

class	Intern {
public:
  Intern();
  Intern(Intern const &other);
  ~Intern();
  Intern &operator=(const Intern &obj);

  AForm *makeForm(const std::string &name, const std::string &target);

private:
};

#endif // INTERN_HPP
