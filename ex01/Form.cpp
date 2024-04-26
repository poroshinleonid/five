#include "Form.h"
#include "Bureaucrat.h"

Form::Form()
    : name_("Unnamed Form"), is_signed_(false), grade_to_sign_(150),
      grade_to_execute_(150) {}

Form::Form(Form const &other)
    : name_(other.name_), is_signed_(other.is_signed_),
      grade_to_sign_(other.grade_to_sign_),
      grade_to_execute_(other.grade_to_execute_){};

Form::~Form() {}

Form &Form::operator=(const Form &other) {
  (void)other;
  return (*this);
}

Form::Form(const std::string &name, int grade_to_sign, int grade_to_execute)
    : name_(name), is_signed_(false), grade_to_sign_(grade_to_sign),
      grade_to_execute_(grade_to_execute) {}

const std::string &Form::getName() const { return name_; }

const bool &Form::isSigned() const { return is_signed_; }

const int &Form::getGradeToSign() const { return grade_to_sign_; }

const int &Form::getGradeToExecute() const { return grade_to_execute_; }

void Form::beSigned(const Bureaucrat &signer) {
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

std::ostream &operator<<(std::ostream &out_stream, const Form &form) {
  out_stream << "Form '" << form.getName() << "', ";
  if (form.isSigned()) {
    out_stream << "signed";
  } else {
    out_stream << "not signed";
  }
  out_stream << ", grade " << form.getGradeToSign() << " to sign, grade ";
  out_stream << form.getGradeToExecute() << " to execute.";
  return out_stream;
}
