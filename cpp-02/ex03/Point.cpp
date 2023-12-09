/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnegro <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/09 17:28:00 by mnegro            #+#    #+#             */
/*   Updated: 2023/12/09 18:29:46 by mnegro           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point() : _x(0), _y(0) {
	return ;
}

Point::Point(const float val_x, const float val_y) :_x(val_x), _y(val_y) {
	return ;
}

Point::Point(const Point &other) {
	const_cast<Fixed&>(this->_x) = other._x;
	const_cast<Fixed&>(this->_y) = other._y;
}

Point&	Point::operator=(const Point &source) {
	if (this != &source) {
		const_cast<Fixed&>(this->_x) = source._x;
		const_cast<Fixed&>(this->_y) = source._y;
	}
	return (*this);
}

Fixed	Point::getCoorX() const {
	return (this->_x);
}

Fixed	Point::getCoorY() const {
	return (this->_y);
}

Point::~Point() {
	return ;
}
