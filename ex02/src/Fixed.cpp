/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvega-g <alvega-g@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 17:08:51 by alvega-g          #+#    #+#             */
/*   Updated: 2024/04/11 12:23:56 by alvega-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Fixed.hpp>

Fixed::Fixed( void ) {
	std::cout << "Default constructor called" << std::endl;
	value = 0;
}

Fixed::Fixed( const int num ) {
	std::cout << "Int constructor called" << std::endl;
	value = num << bits;
}

Fixed::Fixed( const float num ) {
	std::cout << "Float constructor called" << std::endl;
	value = roundf(num * (1 << bits));
}

Fixed::Fixed( const Fixed& source ) {
	std::cout << "Copy constructor called" << std::endl;
	value = source.getRawBits();
}

Fixed& Fixed::operator=( const Fixed& source ) {
	std::cout << "Copy assignment operator called" << std::endl;
	value = source.getRawBits();
	return (*this);
}

Fixed::~Fixed( void ) {
	std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits ( void ) const {
	std::cout << "getRawBits member function called" << std::endl;
	return (value);
}

void Fixed::setRawBits ( int const raw ) {
	value = raw;
}

float Fixed::toFloat( void ) const {
	return (static_cast<float>(value) / (1 << bits));
}

int Fixed::toInt( void ) const {
	return (value >> bits);
}

std::ostream& operator<<(std::ostream& os, const Fixed& fixed) {
	os << fixed.toFloat();
	return (os);
}