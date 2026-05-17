#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : _value(0)
{
}

RobotomyRequestForm::RobotomyRequestForm(arguments) : _value(0)
{
}

RobotomyRequestForm::~RobotomyRequestForm()
{
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& other)
{
	*this = other;
}

RobotomyRequestForm&	RobotomyRequestForm::operator=(const RobotomyRequestForm& other)
{
	if (this != &other)
	{
		_value = other._value;
	}
	return *this;
}

int		RobotomyRequestForm::getValue(void) const
{
	return _value;
}

void	RobotomyRequestForm::setValue(int value)
{
	_value = value;
}

std::ostream&	operator<<(std::ostream& out, const RobotomyRequestForm& src)
{
	return (out);
}
