#include <iostream>
#pragma once

class Bureaucrat
{
public:
	Bureaucrat();
	Bureaucrat(arguments);
	~Bureaucrat();
	Bureaucrat(const Bureaucrat& other);
	Bureaucrat& operator=(const Bureaucrat& other);

	class GradeTooHighException : public std::exception
	{
		public:
			virtual const char	*what() const throw()
			{
				return ("The grade is too high");
			}
	};

	class GradeTooLowException : public std::exception
	{
		public:
			virtual const char	*what() const throw()
			{
				return ("The grade is too low");
			}
	};

	//Implement increase and decrease grade

	// Getters & Setters
	int		getGrade(void) const;
	void	setGrade(int value);

private:
	const std::string	_name;
	unsigned int		_grade;
};

std::ostream&	operator<<(std::ostream& out, const Bureaucrat& src);
