#include "RobotomyRequestForm.h"
#include "Bureaucrat.h"
#include <ctime>
#include <cstdlib>

RobotomyRequestForm::RobotomyRequestForm() {}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &other) : AForm() {
  (void)other;
};

RobotomyRequestForm::~RobotomyRequestForm() {}

RobotomyRequestForm &
RobotomyRequestForm::operator=(const RobotomyRequestForm &other) {
  (void)other;
  return (*this);
}

RobotomyRequestForm::RobotomyRequestForm(const std::string &target)
    : AForm("RobotomyRequestForm", 72, 45), target_(target) {
  if (is_rand_seeded_ == false) {
    time_t cur_time = std::time(&cur_time);
    std::srand(static_cast<unsigned int>(cur_time));
    is_rand_seeded_ = true;
  }
}

void RobotomyRequestForm::execution_implementation(
    const Bureaucrat &executor) const {
  (void)executor;

  bool coin_flip = static_cast<unsigned int>(std::rand()) % 2;
  if (coin_flip) {
    std::cout << target_ << " has been robotomized" << std::endl;
    return;
  }
  std::cout << "The robotomization of " << target_ << " has failed."
            << std::endl;
  return;
}
bool RobotomyRequestForm::is_rand_seeded_ = false;