/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvega-g <alvega-g@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 17:08:51 by alvega-g          #+#    #+#             */
/*   Updated: 2024/04/11 11:22:15 by alvega-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Fixed.hpp>

Fixed::Fixed( void ) {
	std::cout << "Default constructor called" << std::endl;
	value = 0;
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