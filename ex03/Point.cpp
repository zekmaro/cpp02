/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anarama <anarama@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 18:34:09 by anarama           #+#    #+#             */
/*   Updated: 2024/10/08 11:14:40 by anarama          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point ( void ) : _x(0), _y(0) {}

Point::Point ( const float x, const float y ) : _x(x), _y(y) {}

Point::Point ( const Point& other) : _x(other.getX()), _y(other.getY()) {
	std::cout << "Copy constructor called" << std::endl;
}

Point& Point::operator=( const Point& other) {
	(void)other;
	return *this;
}

const Fixed& Point::getX(void) const {
    return this->_x;
}

const Fixed& Point::getY(void) const {
    return this->_y;
}

Point::~Point ( void ) {}