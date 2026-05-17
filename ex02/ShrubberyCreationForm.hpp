/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thaperei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/17 18:24:10 by thaperei          #+#    #+#             */
/*   Updated: 2026/05/17 18:30:46 by thaperei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "AForm.hpp"

class ShrubberyCreationForm: public AForm
{
public:
	ShrubberyCreationForm();
	ShrubberyCreationForm(const std::string name);
	ShrubberyCreationForm(const std::string name, unsigned int signGrade,
		unsigned int executeGrade);
	~ShrubberyCreationForm();
	ShrubberyCreationForm(const ShrubberyCreationForm& src);
	ShrubberyCreationForm& operator=(const ShrubberyCreationForm& src);

	// Member function
	virtual			execute(Bureaucrat const &executor) const = 0;
};

std::ostream&	operator<<(std::ostream& out, const ShrubberyCreationForm& src);
