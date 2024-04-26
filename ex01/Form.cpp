#include "Form.h"

Form::Form() : name_("Unnamed Form"), is_signed_(false), grade_to_sign_(150), grade_to_execute_(150) {}

Form::Form(Form const &other) : name_(other.name_), is_signed_(other.is_signed_), grade_to_sign_(other.grade_to_sign_), grade_to_execute_(other.grade_to_execute_){};

Form::~Form() {}

Form	&Form::operator=(const Form &other) {
  return (*this);
}
