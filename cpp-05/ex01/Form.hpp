/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnegro <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/25 15:35:21 by mnegro            #+#    #+#             */
/*   Updated: 2023/12/28 15:26:16 by mnegro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class Bureaucrat; // forward declaration

class	Form {

public:

	Form(std::string name, int toSign, int toExecute); // ocf default constructor
	Form(const Form &src); // ocf copy constructor
	~Form(); // ocf destructor

	Form&	operator=(const Form &src); // ocf copy assignment operator

	std::string	getName() const;
	bool		getWhetherSigned() const;
	int			getSigningGrade() const;
	int			getExecutingGrade() const;

	void	beSigned(const Bureaucrat &obj);

	class	GradeTooLowException : public std::exception {
	
	public:

		const char* what() const throw() {
       		return "Grade too low!";
		}
	};
	class	GradeTooHighException : public std::exception {

	public:

		const char* what() const throw() {
       		return "Grade too high!";
		}
	};
	class	FormAlreadySignedException : public std::exception {

	public:
		const char* what() const throw() {
       		return "Form already signed!";
		}
	};

private:

	const std::string	_name;
	bool				_signed;
	const int			_toSign;
	const int			_toExecute;

};

std::ostream&	operator<<(std::ostream &os, const Form &obj);
