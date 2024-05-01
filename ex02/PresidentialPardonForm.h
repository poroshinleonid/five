#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

class PresidentialPardonForm {
public:
  PresidentialPardonForm();
  PresidentialPardonForm(PresidentialPardonForm const &other);
  ~PresidentialPardonForm();
  PresidentialPardonForm &operator=(const PresidentialPardonForm &obj);

private:
  static const int grade_to_sign_;
  static const int grade_to_execute;
};

#endif // PRESIDENTIALPARDONFORM_HPP
