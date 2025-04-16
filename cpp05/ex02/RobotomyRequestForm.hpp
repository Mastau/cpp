#pragma once

#include "AForm.hpp"

class RobotomyRequestForm : public AForm {
  public:
    RobotomyRequestForm(const RobotomyRequestForm &ref);
    RobotomyRequestForm(const std::string &name);
    RobotomyRequestForm(void);
    ~RobotomyRequestForm(void);

    RobotomyRequestForm &operator=(RobotomyRequestForm const &src);
private:
	void _interExecute(const Bureaucrat &b) const;
};
