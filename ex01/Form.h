#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
#include <stdexcept>
#include <string>

class Form {
public:
  Form();
  Form(Form const &other);
  ~Form();
  Form &operator=(const Form &obj);

  class GradeTooHighException : public std::exception {
  public:
    virtual const char *what() const throw() { return "Grade too high"; }
  };

  class GradeTooLowException : public std::exception {
  public:
    virtual const char *what() const throw() { return "Grade too low"; }
  };

private:
  static const int max_possible_grade_value_ = 1;
  static const int min_possible_grade_value_ = 150;
  const std::string name_;
  bool is_signed_;
  const int grade_to_sign_;
  const int grade_to_execute_;
};

#endif / / FORM_HPP
