#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include "AForm.h"
#include <string>

class RobotomyRequestForm : virtual public AForm {
private:
  RobotomyRequestForm();
  RobotomyRequestForm(RobotomyRequestForm const &other);
  RobotomyRequestForm &operator=(const RobotomyRequestForm &obj);

public:
  ~RobotomyRequestForm();

  RobotomyRequestForm(std::string target);

  void execution_implementation(const Bureaucrat &executor) const;

private:
  static bool is_rand_seeded_;
  const std::string target_;
};

#endif // ROBOTOMYREQUESTFORM_HPP
