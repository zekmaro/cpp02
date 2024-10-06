/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anarama <anarama@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/05 12:42:18 by anarama           #+#    #+#             */
/*   Updated: 2024/10/06 17:19:25 by anarama          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cmath>

#include "Fixed.hpp"

const int Fixed::_num_fraction_bits = 8;

Fixed::Fixed( void ) : _integer(0) {
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed& other) {
    std::cout << "Copy constructor called" << std::endl;
    _integer = other._integer;  // Copy the raw value
}

Fixed::Fixed( const int integer ) {
	std::cout << "Int constructor called" << std::endl;
	this->_integer = integer << _num_fraction_bits;
}

Fixed::Fixed( const float float_number ) {
	std::cout << "Float constructor called" << std::endl;
	this->_integer = roundf(float_number * (1 << _num_fraction_bits));
}

float	Fixed::toFloat( void ) const {
	return (float)this->_integer / (1 << _num_fraction_bits);
}

int		Fixed::toInt( void ) const {
	return this->_integer >> _num_fraction_bits;
}

Fixed& Fixed::operator=(const Fixed& other) {
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &other) {
		this->_integer = other._integer;
	}
	return *this;
}

bool Fixed::operator<(const Fixed& other) const {
	return this->_integer < other._integer;
}

bool Fixed::operator>(const Fixed& other) const {
	return this->_integer > other._integer;
}

bool Fixed::operator<=(const Fixed& other) const {
	return this->_integer <= other._integer;
}

bool Fixed::operator>=(const Fixed& other) const {
	return this->_integer >= other._integer;
}

bool Fixed::operator==(const Fixed& other) const {
	return this->_integer == other._integer;
}

bool Fixed::operator!=(const Fixed& other) const {
	return this->_integer != other._integer;
}

Fixed Fixed::operator+(const Fixed& other) const {
    return Fixed(this->toFloat() + other.toFloat());
}

Fixed Fixed::operator-(const Fixed& other) const {
    return Fixed(this->toFloat() - other.toFloat());
}

Fixed Fixed::operator*(const Fixed& other) const {
    return Fixed(this->toFloat() * other.toFloat());
}

Fixed Fixed::operator/(const Fixed& other) const {
    return Fixed(this->toFloat() / other.toFloat());
}


std::ostream& operator<<(std::ostream& out, const Fixed& fixed) {
    out << fixed.toFloat();
    return out;
}

Fixed::~Fixed( void ) {
	std::cout << "Destructor called" << std::endl;
}

int	Fixed::getRawBits( void ) const {
	std::cout << "getRawBits member function called" << std::endl;
	return this->_integer;	
}
void Fixed::setRawBits( int const raw ) {
	this->_integer = raw;
}