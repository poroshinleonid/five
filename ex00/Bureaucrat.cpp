#include "Bureaucrat.h"

#include <string>

Bureaucrat::Bureaucrat() : name_("John Smith"), grade_(150) {}

Bureaucrat::Bureaucrat(Bureaucrat const &other)
    : name_(other.name_), grade_(other.grade_){};

Bureaucrat::~Bureaucrat() {}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &other) {
  if (this != &other) {
    grade_ = other.grade_;
  }
  return (*this);
}

Bureaucrat::Bureaucrat(const std::string &name, int grade) : name_(name) {
  if (grade > max_possible_grade_value_) {
    throw GradeTooLowException();
  }
  if (grade < min_possible_grade_value_) {
    throw GradeTooHighException();
  }
  grade_ = grade;
}

const std::string &Bureaucrat::getName() const { return name_; }

int Bureaucrat::getGrade() const { return grade_; }

void Bureaucrat::promote() {
  if (grade_ <= min_possible_grade_value_) {
    throw GradeTooHighException();
  }

  --grade_;
}

void Bureaucrat::demote() {
  if (grade_ >= max_possible_grade_value_) {
    throw GradeTooLowException();
  }
  ++grade_;
}

const char *Bureaucrat::GradeTooHighException::what() const throw() {
  return "Grade too high";
}

const char *Bureaucrat::GradeTooLowException::what() const throw() {
  return "Grade too low";
}

std::ostream &operator<<(std::ostream &out_stream,
                         const Bureaucrat &bureaucrat) {
  out_stream << bureaucrat.getName();
  out_stream << ", bureaucrat grade ";
  out_stream << bureaucrat.getGrade();
  return out_stream;
}
