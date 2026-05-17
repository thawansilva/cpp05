#pragma once

class PresidentialPardonForm
{
public:
	PresidentialPardonForm();
	PresidentialPardonForm(arguments);
	~PresidentialPardonForm();
	PresidentialPardonForm(const PresidentialPardonForm& other);
	PresidentialPardonForm& operator=(const PresidentialPardonForm& other);

	//Member Functions

	// Getters & Setters
	int		getValue(void) const;
	void	setValue(int value);

private:
	int _value;
};

std::ostream&	operator<<(std::ostream& out, const PresidentialPardonForm& src);
