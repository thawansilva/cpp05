#include "Form.hpp"

Form::Form() : _name("Unknown Form"), _isSigned(false), _signGrade(150),
	_executeGrade(150)
{}

Form::Form(const std::string &name, unsigned int signGrade, unsigned int executeGrade) : _name(name), _isSigned(false), _signGrade(signGrade), _executeGrade(executeGrade)
{}

Form::~Form()
{}

Form::Form(const Form& other)
{
	*this = other;
}

Form&	Form::operator=(const Form& other)
{
	if (this != &other)
		_value = other._value;
	return (*this);
}

bool			Form::isSigned(void) const
{
	return (_isSigned)
}

void			Form::beSigned(const Bureaucrat &signer)
{
	if (signer.getGrade() > getSignGrade())
		throw Form::GradeTooLowException();
	else if (!isSigned())
	{
		_isSigned = true;
		std::cout << getName() << " Form was signed by ";
		std::cout << signer.getName() << std::endl;
	}
	else
		std::cout << getName() << "Form is already signed" << std::endl;
}

std::string		Form::getName(void) const
{
	return (_name);
}

unsigned int	Form::getSignGrade(void) const
{
	return (_signGrade);
}

void			Form::setSignGrade(unsigned int grade)
{
	if (grade < 1)
		throw Form::GradeTooHighException();
	else if (grade > 150)
		throw Form::GradeTooLowException();
	_signGrade = grade;
}

unsigned int	Form::getExecuteGrade(void) const
{
	return (_executeGrade);
}

void			Form::setExecuteGrade(unsigned int grade)
{
	if (grade < 1)
		throw Form::GradeTooHighException();
	else if (grade > 150)
		throw Form::GradeTooLowException();
	_executeGrade = grade;
}

std::ostream&	operator<<(std::ostream& out, const Form& src)
{
	out << getName() << " is ";
	out << _isSigned ? " signed\n" : " not signed\n";
	out << "Sign grade: " << _signGrade;
	out << "Execute grade: " << _executeGrade << std::endl;
	return (out);
}
