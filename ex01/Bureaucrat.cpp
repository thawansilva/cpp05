#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : _name("Unknown Bureaucrat")
{}

Bureaucrat::Bureaucrat(const std::string &name) : _name(name)
{}

Bureaucrat::~Bureaucrat()
{}

Bureaucrat::Bureaucrat(const Bureaucrat& other)
{
	*this = other;
}

Bureaucrat&	Bureaucrat::operator=(const Bureaucrat& other)
{
	if (this != &other)
	{
		_grade = other._grade;
	}
	return (*this);
}

std::string	Bureaucrat::getName(void) const
{
	return (_name);
}

unsigned int	Bureaucrat::getGrade(void) const
{
	return (_grade);
}

void	Bureaucrat::setGrade(unsigned int grade)
{
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
	_grade = grade;
}

void	Bureaucrat::incrementGrade(void)
{
	if (_grade == 1)
		throw Bureaucrat::GradeTooHighException();
	_grade--;
}

void	Bureaucrat::decrementGrade(void)
{
	if (_grade == 150)
		throw Bureaucrat::GradeTooLowException();
	_grade++;
}

std::ostream&	operator<<(std::ostream& out, const Bureaucrat& src)
{
	out << src.getName() << ", bureaucrat grade " <<
		src.getGrade() << ".";
	return (out);
}
