#include <iostream>
#include "Bureaucrat.hpp"

class Exception: public std::exception
{
	private: 
		std::string	message;

	public:
		Exception(): message("Exception Error")
		{}
		Exception(const std::string &description): message(description)
		{}
		~Exception() throw() {}
		virtual const char *what() const throw()
		{
			return (message.c_str());
		}
};

void	test(bool value)
{
	if (value == true)
	{
		throw std::exception();
	}
}

void	test2(bool value)
{
	try
	{
		if (value == true)
		{
			throw std::exception();
		}
	}
	catch(std::exception e)
	{
		std::cout << "catch test2" << std::endl;
		std::cout << e.what() << std::endl;
	}
}

void	test3(bool value)
{
	if (value == true)
	{
		throw Exception("Error A");
	}
}

int main(int argc, char *argv[])
{
	Bureaucrat	bureaucrat("Thawan");

	try
	{
		test3(true);
	}
	catch(Exception e)
	{
		std::cout << "catch main" << std::endl;
		std::cout << e.what() << std::endl;
	}
	return 0;
}
