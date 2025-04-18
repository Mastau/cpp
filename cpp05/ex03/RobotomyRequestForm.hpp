#pragma once

#include "AForm.hpp"
#include "Bureaucrat.hpp"

class RobotomyRequestForm : public AForm {
	public:
		RobotomyRequestForm(const RobotomyRequestForm &copy);
		RobotomyRequestForm(const std::string &target);
		RobotomyRequestForm(void);
		~RobotomyRequestForm(void);

		RobotomyRequestForm &operator=(RobotomyRequestForm const &src);

		std::string getTarget(void) const;
		virtual void execute(const Bureaucrat &executor) const;
	private:
		std::string _target;

};
