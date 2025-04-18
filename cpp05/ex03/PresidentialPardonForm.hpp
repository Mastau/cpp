#pragma once

#include "AForm.hpp"
#include "Bureaucrat.hpp"

class PresidentialPardonForm : public AForm {
	public:
		PresidentialPardonForm(const PresidentialPardonForm &copy);
		PresidentialPardonForm(const std::string &target);
		PresidentialPardonForm(void);
		~PresidentialPardonForm(void);
		PresidentialPardonForm &operator=(PresidentialPardonForm const &copy);

		std::string getTarget(void) const;
		virtual void execute(const Bureaucrat &executor) const;
	private:
		std::string _target;
};
