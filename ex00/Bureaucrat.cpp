#include "Bureaucrat.h"

#include <string>

Bureaucrat::Bureaucrat() : name_("John Smith"), grade_(150) {}

Bureaucrat::Bureaucrat(Bureaucrat const &other) : name_(other.name_), grade_(other.grade_) {};

Bureaucrat::~Bureaucrat() {}

Bureaucrat	&Bureaucrat::operator=(const Bureaucrat &other) {
  if (this != &other) {
    grade_ = other.grade_;
  }
  return (*this);
}

Bureaucrat::Bureaucrat(const std::string &name, int grade) : name_(name) {
  if (grade > max_grade_) {
    throw GradeTooLowException();
  }
  if (grade < min_grade_) {
    throw GradeTooHighException();
  }
  grade_ = grade;
}

const std::string &Bureaucrat::getName() const {
  return name_;
}

int Bureaucrat::getGrade() const{
  return grade_;
}

void Bureaucrat::promote() {
  if (grade_ <= min_grade_) {
    throw GradeTooHighException();
  }

  --grade_;
} 

void Bureaucrat::demote() {
  if (grade_ >= max_grade_) {
    throw GradeTooLowException();
  }
  ++grade_;
}

