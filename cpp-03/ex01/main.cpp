/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnegro <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 19:00:32 by mnegro            #+#    #+#             */
/*   Updated: 2023/12/10 21:42:49 by mnegro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int	main(void)
{
	ScavTrap A("A");
	ScavTrap B(A);
	ClapTrap C("C");
	ClapTrap D(C);

	A.getStats();
	B.getStats();
	C.getStats();
	D.getStats();
	C.attack("ENEMY");
	A.attack("ENEMY");
	A.takeDamage(9);
	A.takeDamage(2);
	A.guardGate();
	A.getStats();
	B.getStats();
	C.getStats();
	D.getStats();
	return (0);
}
