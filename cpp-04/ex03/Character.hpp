/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnegro <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 22:43:23 by mnegro            #+#    #+#             */
/*   Updated: 2023/12/27 15:38:26 by mnegro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

#include "ICharacter.hpp"

class	Character : public ICharacter {

public:
	Character(); // ocf default constructor
	Character(const Character &src); // ocf copy constructor
	Character(const std::string &name);
	~Character(); // ocf destructor

	Character&	operator=(const Character &src); // ocf copy assignment operator

	std::string const&	getName() const;
	AMateria*			getMateria(int idx);
	
	void	equip(AMateria *m);
	void	unequip(int idx);
	void	use(int idx, ICharacter &target);

private:
	AMateria*	_inventory[4];
	std::string	_name;
};

#endif
