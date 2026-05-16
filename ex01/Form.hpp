#pragma once

class Form
{
	const std::string	_name;
	const unsigned int	_signGrade;
	const unsigned int	_executeGrade;
	bool				_isSigned;

public:
	Form();
	Form(const std::string &name, unsigned int signGrade, unsigned int executeGrade);
	~Form();
	Form(const Form& other);
	Form& operator=(const Form& other);

	//Member Functions
	bool			isSigned(void) const;
	void			beSigned(const Bureaucrat &b);

	// Getters & Setters
	std::string		getName(void) const;
	unsigned int	getSignGrade(void) const;
	void			setSignGrade(unsigned int grade);
	unsigned int	getExecuteGrade(void) const;
	void			setExecuteGrade(unsigned int grade);

	// Exception
	class GradeTooHighException : public std::exception
	{
		public:
			virtual const char	*what() const throw()
			{
				return ("grade is too high for the form");
			}
	};

	class GradeTooLowException : public std::exception
	{
		public:
			virtual const char	*what() const throw()
			{
				return ("grade is too low for the form");
			}
	};
};

std::ostream&	operator<<(std::ostream& out, const Form& src);
