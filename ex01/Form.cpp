#include "Form.hpp"

Form::Form() : _value(0)
{
}

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

void			Form::beSigned(const Bureaucrat &b)
{
	if (b.getGrade() < getSignGrade())
		_isSigned = true;
}

void			Form::signForm(const Bureaucrat &b)
{
	try
	{
		beSigned(b)
	}
	catch (std::exception &e)
	{

	}
	beSigned(b);
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
	out << getName()
	return (out);
}
