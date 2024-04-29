#ifndef RobotomyRequestForm_HPP
#define RobotomyRequestForm_HPP

class RobotomyRequestForm {
public:
  RobotomyRequestForm();
  RobotomyRequestForm(RobotomyRequestForm const &other);
  ~RobotomyRequestForm();
  RobotomyRequestForm &operator=(const RobotomyRequestForm &obj);

private:
  static const int grade_to_sign_;
  static const int grade_to_execute;
};

#endif
