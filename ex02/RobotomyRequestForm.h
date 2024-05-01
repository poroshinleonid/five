#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

class RobotomyRequestForm {
public:
  RobotomyRequestForm();
  RobotomyRequestForm(RobotomyRequestForm const &other);
  ~RobotomyRequestForm();
  RobotomyRequestForm &operator=(const RobotomyRequestForm &obj);

  virtual void execute(const Bureaucrat &executor) const;


private:
  static const int grade_to_sign_;
  static const int grade_to_execute;
};

#endif // ROBOTOMYREQUESTFORM_HPP
