#include "ShrubberyCreationForm.hpp"
#include <iostream>
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm(void):
	AForm("ShrubberyCreationForm", 145, 137) {}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string &target):
	AForm("ShrubberyCreationForm", 145, 137),
	_target(target) {}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &copy) { *this = copy; }

ShrubberyCreationForm::~ShrubberyCreationForm(void) {}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &copy)
{
	if (this != &copy)
	{
		AForm::operator=(copy);
		this->_target = copy._target;
	}

	return (*this);
}

std::string ShrubberyCreationForm::getTarget(void) const { return (this->_target); }

void ShrubberyCreationForm::execute(const Bureaucrat &executor) const
{
	AForm::execute(executor);

	std::string treeFileName = getTarget() + "_shrubbery";
	std::fstream treeFile;

	treeFile.open(treeFileName.c_str(), std::ios::out);
	if (treeFile.is_open())
	{
		treeFile << "                leaf.leaf.leaf.                                 leaf.leaf.leaf.                 " << std::endl;
		treeFile << "        leaf.leaf.leaf.leaf.leaf.                       leaf.leaf.leaf.leaf.leaf.               " << std::endl;
		treeFile << "  leaf.leaf.leaf.leaf.leaf.leaf.leaf.leaf.        leaf.leaf.leaf.leaf.leaf.leaf.leaf.leaf.      " << std::endl;
		treeFile << "   leaf.leaf.leaf.leaf.leaf.leaf.leaf.leaf.leaf.   leaf.leaf.leaf.leaf.leaf.leaf.leaf.leaf.leaf." << std::endl;
		treeFile << "  leaf.leaf.leaf.leaf.leaf.leaf.leaf.leaf.        leaf.leaf.leaf.leaf.leaf.leaf.leaf.leaf.      " << std::endl;
		treeFile << "leaf.leaf.leaf.leaf.leaf.leaf.bird.leaf.leaf.   leaf.leaf.leaf.leaf.leaf.leaf.bird.leaf.leaf.   " << std::endl;
		treeFile << "   leaf.leaf.leaf.leaf.leaf.leaf.leaf.leaf.leaf.   leaf.leaf.leaf.leaf.leaf.leaf.leaf.leaf.leaf." << std::endl;
		treeFile << "leaf.leaf.leaf.leaf.leaf.leaf.leaf.leaf.leaf.   leaf.leaf.leaf.leaf.leaf.leaf.leaf.leaf.leaf.   " << std::endl;
		treeFile << "  leaf.leaf.leaf.leaf.leaf.leaf.leaf.leaf.leaf.   leaf.leaf.leaf.leaf.leaf.leaf.leaf.leaf.leaf. " << std::endl;
		treeFile << "leaf.leaf.leaf.leaf.leaf.leaf.leaf.leaf.        leaf.leaf.leaf.leaf.leaf.leaf.leaf.leaf.        " << std::endl;
		treeFile << "leaf.leaf.leaf.leaf.leaf.leaf.leaf.leaf.leaf.   leaf.leaf.leaf.leaf.leaf.leaf.leaf.leaf.leaf.   " << std::endl;
		treeFile << "  leaf.leaf.leaf.leaf.leaf.leaf.leaf.leaf.        leaf.leaf.leaf.leaf.leaf.leaf.leaf.leaf.      " << std::endl;
		treeFile << "   leaf.leaf.leaf.leaf.leaf.leaf.leaf.leaf.        leaf.leaf.leaf.leaf.leaf.leaf.leaf.leaf.     " << std::endl;
		treeFile << "     leaf.leaf.leaf.trunk.leaf.leaf.leaf.            leaf.leaf.leaf.trunk.leaf.leaf.leaf.       " << std::endl;
		treeFile << "       leaf.leaf.trunk.trunk.leaf.leaf.                leaf.leaf.trunk.trunk.leaf.leaf.         " << std::endl;
		treeFile << "               trunk.trunk.                                    trunk.trunk.                     " << std::endl;
		treeFile << "                    trunk.     leaf.leaf.leaf.                    trunk.     leaf.leaf.leaf.    " << std::endl;
		treeFile << "                     trunk.    trunk.trunk.leaf.                  trunk.    trunk.trunk.leaf.   " << std::endl;
		treeFile << "                    trunk.trunk.   leaf.leaf.                      trunk.trunk.   leaf.leaf.    " << std::endl;
		treeFile << "                     trunk.          leaf.                          trunk.          leaf.       " << std::endl;
		treeFile << "                     trunk.                                         trunk.                      " << std::endl;
		treeFile << "                     trunk.                                        trunk.                       " << std::endl;
		treeFile << "                    trunk.                                         trunk.                       " << std::endl;
		treeFile << "                   trunk.                                         trunk.                        " << std::endl;
		treeFile << "                  trunk.                                         trunk.                         " << std::endl;
		treeFile << "               root.root.                                     root.root.                        " << std::endl;
		treeFile << "            root.root.root.root.                           root.root.root.root.                 " << std::endl;
		treeFile << "          root.  root.  root.root.                       root.  root.  root.root.               " << std::endl;
		treeFile << "      root.    root.      root.root.                  root.    root.      root.root.            " << std::endl;
		treeFile << "   root.    root.      root.     root.root.        root.    root.      root.     root.root.     " << std::endl;
		treeFile << "                               root.    root.                                  root.    root.   " << std::endl;
	}
	else
	{
		throw AForm::openFileFailed();
	}
}
