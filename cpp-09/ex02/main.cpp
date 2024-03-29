/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnegro <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 16:41:06 by mnegro            #+#    #+#             */
/*   Updated: 2024/02/29 18:58:51 by mnegro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

void	checkArgs(int ac) {
	if (ac < 2) {
		std::cout << "\033[1;31mERROR\033[0m Invalid number of arguments\n";
		exit(EXIT_FAILURE);
	}
}

int	main(int ac, char **av) {
	PmergeMe			seq;
	std::deque<int>		deq;
	std::vector<int>	vec;

	checkArgs(ac);

	std::clock_t	deqStart = std::clock();
	try {
		std::cout << "\033[1;36mDEQUE CONTAINER\033[0m\n";
		seq.fillDeq(av);
		deq = seq.getDeq();
		std::cout << "Before: ";
		print(deq);
		seq.fordJohnsonDeq(deq);
		std::cout << "After: ";
		print(deq);
		std::cout << '\n';
	} catch (const std::exception &e) {
		std::cout << "\033[1;31mERROR\033[0m " << e.what();
		return (1);
	}
	double	deqTime = ((std::clock() - deqStart) / (double) CLOCKS_PER_SEC) * 1000;

	std::clock_t	vecStart = std::clock();
	try {
		std::cout << "\033[1;35mVECTOR CONTAINER\033[0m \n";
		seq.fillVec(av);
		vec = seq.getVec();
		std::cout << "Before: ";
		print(vec);
		seq.fordJohnsonVec(vec);
		std::cout << "After: ";
		print(vec);
		std::cout << '\n';
	} catch (const std::exception &e) {
		std::cout << "\033[1;31mERROR\033[0m " << e.what();
		return (1);
	}
	double	vecTime = ((std::clock() - vecStart) / (double) CLOCKS_PER_SEC) * 1000;

	std::cout << "Time to process a range of " << ac - 1 << " elements with \033[1;36mstd::deque\033[0m: " << deqTime << " milliseconds\n";
	std::cout << "Time to process a range of " << ac - 1 << " elements with \033[1;35mstd::vector\033[0m: " << vecTime << " milliseconds\n";
	return (0);
}

/*
Tests from subject:
	3 5 9 7 4
	`shuf -i 1-100000 -n 3000 | tr "\n" " "`
	"-1" "-2" > Error
	`shuf -i 1-1000 -n 3000 | tr "\n" " "`
*/
