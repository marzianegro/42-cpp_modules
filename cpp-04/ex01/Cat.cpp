/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnegro <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 10:10:49 by mnegro            #+#    #+#             */
/*   Updated: 2023/12/14 21:59:16 by mnegro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal() {
	std::cout << "Cat default constructor called" << std::endl;
	this->_type = "Cat";
	this->_brain = new Brain();
}

Cat::Cat(const Cat &src) : Animal(src) {
	std::cout << "Cat copy constructor called" << std::endl;
}

Cat::~Cat() {
	delete this->_brain;
	std::cout << "Cat destructor called" << std::endl;
}

Cat&	Cat::operator=(const Cat &src) {
	if (this != &src) {
		this->_type = src._type;
	}
	return (*this);
}

void	Cat::makeSound() const {
	std::cout << this->_type << " goes meow!" << std::endl;
}
