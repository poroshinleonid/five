#include "AForm.h"
#include "Bureaucrat.h"

AForm::AForm()
    : name_("Unnamed AForm"), is_signed_(false), grade_to_sign_(150),
      grade_to_execute_(150) {}

AForm::AForm(AForm const &other)
    : name_(other.name_), is_signed_(other.is_signed_),
      grade_to_sign_(other.grade_to_sign_),
      grade_to_execute_(other.grade_to_execute_){};

AForm::~AForm() {}

AForm &AForm::operator=(const AForm &other) {
  (void)other;
  return (*this);
}

AForm::AForm(const std::string &name, int grade_to_sign, int grade_to_execute)
    : name_(name), is_signed_(false), grade_to_sign_(grade_to_sign),
      grade_to_execute_(grade_to_execute) {
  if (grade_to_sign_ < min_possible_grade_value_ ||
      grade_to_execute_ < min_possible_grade_value_) {
    throw GradeTooHighException();
  }
  if (grade_to_sign_ > max_possible_grade_value_ ||
      grade_to_execute_ > max_possible_grade_value_) {
    throw GradeTooLowException();
  }
}

const std::string &AForm::getName() const { return name_; }

const bool &AForm::isSigned() const { return is_signed_; }

const int &AForm::getGradeToSign() const { return grade_to_sign_; }

const int &AForm::getGradeToExecute() const { return grade_to_execute_; }

void AForm::beSigned(const Bureaucrat &signer) {
  if (isSigned()) {
    std::cout << "Can't sign the form " << *this << ": already signed!"
              << std::endl;
    return;
  }
  if (signer.getGrade() > getGradeToSign()) {
    throw GradeTooLowException();
  }
  is_signed_ = true;
}

std::ostream &operator<<(std::ostream &out_stream, const AForm &form) {
  out_stream << "AForm '" << form.getName() << "', ";
  if (form.isSigned()) {
    out_stream << "signed";
  } else {
    out_stream << "not signed";
  }
  out_stream << ", grade " << form.getGradeToSign() << " to sign, grade ";
  out_stream << form.getGradeToExecute() << " to execute.";
  return out_stream;
}

bool AForm::canSign(const Bureaucrat &signer) const {
  if (isSigned()) {
    return false;
  }
  if (signer.getGrade() > getGradeToSign()) {
    return false;
  }
  return true;
}

void AForm::execute(const Bureaucrat &executor) const {
  if (executor.getGrade() > getGradeToExecute()) {
    throw AForm::GradeTooLowException();
    return;
  }
  if (isSigned() == false) {
    std::cerr << executor.getName() << " couldn't execute the form "
              << getName() << ". Reason: The form is not signed." << std::endl;
    return;
  }
  execution_implementation(executor);
}

const char *AForm::GradeTooHighException::what() const throw() {
  return "Grade too high";
}

const char *AForm::GradeTooLowException::what() const throw() {
  return "Grade too low";
}