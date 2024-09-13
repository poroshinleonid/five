#ifndef BUREAUCRAT_H
#define BUREAUCRAT_H

#include <iostream>
#include <stdexcept>
#include <string>

class AForm;

class Bureaucrat {
public:
  Bureaucrat();
  Bureaucrat(Bureaucrat const &other);
  ~Bureaucrat();
  Bureaucrat &operator=(const Bureaucrat &obj);

  Bureaucrat(const std::string &name, int grade);

  const std::string &getName() const;
  int getGrade() const;

  void promote();
  void demote();

  void signForm(AForm &form) const;
  void executeForm(const AForm &form) const;

  class GradeTooHighException : public std::exception {
  public:
    virtual const char *what() const throw();
  };

  class GradeTooLowException : public std::exception {
  public:
    virtual const char *what() const throw();
  };

private:
  static const int min_possible_grade_value_ = 1;
  static const int max_possible_grade_value_ = 150;
  const std::string name_;
  int grade_;
};

std::ostream &operator<<(std::ostream &out_stream,
                         const Bureaucrat &bureaucrat);

#endif // BUREAUCRAT_H
