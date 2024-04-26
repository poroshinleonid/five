#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <string>

class	Bureaucrat {
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

  class GradeTooHighException : public std::exception {
    public:
      virtual const char* what() const throw() {
        return "Grade too high";
      }
  };

  class GradeTooLowException : public std::exception {
    public:
      virtual const char* what() const throw() {
        return "Grade too low";
      }
  };

private:
  static const int min_grade_ = 1;
  static const int max_grade_ = 150;
  const std::string name_;
  int grade_;
};

#endif //BUREAUCRAT_HPP
