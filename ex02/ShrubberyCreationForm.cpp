#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : _value(0)
{
}

ShrubberyCreationForm::ShrubberyCreationForm(arguments) : _value(0)
{
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& other)
{
	*this = other;
}

ShrubberyCreationForm&	ShrubberyCreationForm::operator=(const ShrubberyCreationForm& other)
{
	if (this != &other)
	{
		_value = other._value;
	}
	return *this;
}

int		ShrubberyCreationForm::getValue(void) const
{
	return _value;
}

void	ShrubberyCreationForm::setValue(int value)
{
	_value = value;
}

std::ostream&	operator<<(std::ostream& out, const ShrubberyCreationForm& src)
{
	return (out);
}
