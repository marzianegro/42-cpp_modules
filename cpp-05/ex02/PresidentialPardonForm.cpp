/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnegro <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 12:03:45 by mnegro            #+#    #+#             */
/*   Updated: 2024/01/23 14:43:47 by mnegro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : AForm(), _target("randomPlace") {
	std::cout << "PresidentialPardonForm default constructor called" << "\n"; 
}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : AForm("PresidentialPardonForm", 25, 5), _target(target) {
	std::cout << "PresidentialPardonForm parametric constructor called" << "\n";
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &src) : AForm(src), _target(src._target) {
	std::cout << "PresidentialPardonForm copy constructor called" << "\n";
};

PresidentialPardonForm::~PresidentialPardonForm() {
	std::cout << "PresidentialPardonForm destructor called" << "\n";
}

PresidentialPardonForm&	PresidentialPardonForm::operator=(const PresidentialPardonForm &src) {
	if (this != &src) {
		this->_target = src._target;
	}
	return (*this);
};

void	PresidentialPardonForm::execute(Bureaucrat const &executor) const {
	checkFormForExec(executor);
	std::cout << this->_target << " has been pardoned by Zaphod Bebblebrox" << "\n";
}
