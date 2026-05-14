#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : _name("Unknown Bureaucrat")
{}

Bureaucrat::Bureaucrat(std::string &name) : _name(name)
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
		_value = other._value;
	}
	return *this;
}

const std::string	Bureaucrat::getName(void) const
{
	return _name;
}

int		Bureaucrat::getGrade(void) const
{
	return _grade;
}

void	Bureaucrat::setGrade(unsigned int &grade)
{
	if (grade < 1 || grade > 150)
	{
		throw Exception("Grade should be between 1 and 150.");
	}
	_grade = grade;
}

std::ostream&	operator<<(std::ostream& out, const Bureaucrat& src)
{
	out << src.getName() << ", bureaucrat grade " <<
		src.getGrade() << "." << std::endl;
	return (out);
}
