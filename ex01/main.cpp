#include "Bureaucrat.hpp"

int main()
{
	Bureaucrat	a("a");
	Bureaucrat	b("b");
	Bureaucrat	c("c");
	a.setGrade(1);
	b.setGrade(150);
	c.setGrade(10);

	std::cout << "BEFORE:" << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << c << std::endl;

	try
	{
		a.incrementGrade();
		b.decrementGrade();
		c.incrementGrade();
		c.decrementGrade();
		Bureaucrat d("d");
		d.setGrade(151);
	}
	catch(std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout << "AFTER:" << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << c << std::endl;
	return (0);
}
