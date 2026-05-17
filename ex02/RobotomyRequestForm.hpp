#pragma once

class RobotomyRequestForm
{
public:
	RobotomyRequestForm();
	RobotomyRequestForm(arguments);
	~RobotomyRequestForm();
	RobotomyRequestForm(const RobotomyRequestForm& other);
	RobotomyRequestForm& operator=(const RobotomyRequestForm& other);

	//Member Functions

	// Getters & Setters
	int		getValue(void) const;
	void	setValue(int value);

private:
	int _value;
};

std::ostream&	operator<<(std::ostream& out, const RobotomyRequestForm& src);
