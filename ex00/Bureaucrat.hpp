#pragma once
#include <iostream>

class Bureaucrat
{
public:
	Bureaucrat();
	Bureaucrat(const std::string &name);
	~Bureaucrat();
	Bureaucrat(const Bureaucrat& other);
	Bureaucrat& operator=(const Bureaucrat& other);

	// Member function
	void			incrementGrade(void);
	void			decrementGrade(void);

	// Getters & Setters
	std::string		getName(void) const;
	unsigned int	getGrade(void) const;
	void			setGrade(unsigned int value);

	// Exception
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

private:
	const std::string	_name;
	unsigned int		_grade;
};

std::ostream&	operator<<(std::ostream& out, const Bureaucrat& src);
