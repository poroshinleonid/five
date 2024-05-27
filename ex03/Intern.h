#ifndef INTERN_HPP
#define INTERN_HPP

#include "AForm.h"
#include <string>

class Intern {
private:
  Intern(Intern const &other);
  Intern &operator=(const Intern &obj);
public:
  Intern();
  ~Intern();

  AForm *makeForm(const std::string &name, const std::string &target);

private:
};

#endif // INTERN_HPP
