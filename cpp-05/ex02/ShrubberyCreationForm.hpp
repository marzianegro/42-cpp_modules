/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnegro <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 12:03:36 by mnegro            #+#    #+#             */
/*   Updated: 2023/12/27 12:54:24 by mnegro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AForm.hpp"
#include <iostream>

class	ShrubberyCreationForm : public AForm {

public:

	ShrubberyCreationForm(); // ocf default constructor
	ShrubberyCreationForm(std::string target);
	ShrubberyCreationForm(const ShrubberyCreationForm &src); // ocf copy constructor
	~ShrubberyCreationForm(); // ocf destructor

	ShrubberyCreationForm&	operator=(const ShrubberyCreationForm &src); // ocf copy assignment operator

	void	execute(Bureaucrat const &executor) const;

private:

	std::string			_target;
};

