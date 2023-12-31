/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnegro <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 12:03:45 by mnegro            #+#    #+#             */
/*   Updated: 2023/12/28 15:10:12 by mnegro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : AForm(), _target("randomPlace") {
	std::cout << "ShrubberyCreationForm default constructor called" << std::endl; 
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : AForm("ShrubberyCreationForm", 145, 137), _target(target) {
	std::cout << "ShrubberyCreationForm parametric constructor called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &src) : AForm(src), _target(src._target) {
	std::cout << "ShrubberyCreationForm copy constructor called" << std::endl;
};

ShrubberyCreationForm::~ShrubberyCreationForm() {
	std::cout << "ShrubberyCreationForm destructor called" << std::endl;
}

ShrubberyCreationForm&	ShrubberyCreationForm::operator=(const ShrubberyCreationForm &src) {
	if (this != &src) {
		this->_target = src._target;
	}
	return (*this);
};

void	ShrubberyCreationForm::execute(Bureaucrat const &executor) const {
	(void)executor;
	std::string		filename = this->_target + "_shrubbery";
	std::ofstream	file(filename);
	if (!file.is_open()) {
        std::cout << "Error: can't create file" << std::endl;
        return ;
	} else {
		file << "	       .     .  .      +     .      .          ." << std::endl;
		file << "     .       .      .     #       .           ." << std::endl;
		file << "        .      .         ###            .      .      ." << std::endl;
		file << "      .      .    #:. .:#####:. .:#   .      ." << std::endl;
		file << "          .      .  #############   ." << std::endl;
		file << "       .      #:.    .:#######:.    .:#   .        .       ." << std::endl;
		file << "  .              ###################         .        ." << std::endl;
		file << "        .     #:.   #############   .:#    .       ." << std::endl;
		file << "     .     .   #######################                   ." << std::endl;
		file << "                . #################            .      ." << std::endl;
		file << "    .    #:. ...  .:#############:.  ... .:#      ." << std::endl;
		file << "      .      ###########################       .     ." << std::endl;
		file << "    .    .      #####################     .      ." << std::endl;
		file << "            .            000           .     ." << std::endl;
		file << "       .         .   .   000     .        .       ." << std::endl;
		file << ".. .. ..................O000O........................ ...... ..." << std::endl;
	}
}
