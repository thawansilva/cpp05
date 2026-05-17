#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : _value(0)
{
}

PresidentialPardonForm::PresidentialPardonForm(arguments) : _value(0)
{
}

PresidentialPardonForm::~PresidentialPardonForm()
{
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& other)
{
	*this = other;
}

PresidentialPardonForm&	PresidentialPardonForm::operator=(const PresidentialPardonForm& other)
{
	if (this != &other)
	{
		_value = other._value;
	}
	return *this;
}

int		PresidentialPardonForm::getValue(void) const
{
	return _value;
}

void	PresidentialPardonForm::setValue(int value)
{
	_value = value;
}

std::ostream&	operator<<(std::ostream& out, const PresidentialPardonForm& src)
{
	return (out);
}
