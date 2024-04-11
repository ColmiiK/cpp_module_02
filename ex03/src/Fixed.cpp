/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvega-g <alvega-g@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 17:08:51 by alvega-g          #+#    #+#             */
/*   Updated: 2024/04/11 13:24:02 by alvega-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Fixed.hpp>

Fixed::Fixed( void ) {
	// std::cout << "Default constructor called" << std::endl;
	value = 0;
}

Fixed::Fixed( const int num ) {
	// std::cout << "Int constructor called" << std::endl;
	value = num << bits;
}

Fixed::Fixed( const float num ) {
	// std::cout << "Float constructor called" << std::endl;
	value = roundf(num * (1 << bits));
}

Fixed::Fixed( const Fixed& source ) {
	// std::cout << "Copy constructor called" << std::endl;
	value = source.getRawBits();
}

Fixed& Fixed::operator=( const Fixed& source ) {
	// std::cout << "Copy assignment operator called" << std::endl;
	value = source.getRawBits();
	return (*this);
}

Fixed::~Fixed( void ) {
	// std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits ( void ) const {
	// std::cout << "getRawBits member function called" << std::endl;
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

bool Fixed::operator>( const Fixed &right ) const {
	return (value > right.getRawBits());
}

bool Fixed::operator<( const Fixed &right ) const {
	return (value < right.getRawBits());
}

bool Fixed::operator>=( const Fixed &right ) const {
	return (value >= right.getRawBits());
}

bool Fixed::operator<=( const Fixed &right ) const {
	return (value <= right.getRawBits());
}

bool Fixed::operator==( const Fixed &right ) const {
	return (value == right.getRawBits());
}

bool Fixed::operator!=( const Fixed &right ) const {
	return (value != right.getRawBits());
}

Fixed Fixed::operator+( const Fixed &right ) const {
	return (this->toFloat() + right.toFloat());
}

Fixed Fixed::operator-( const Fixed &right ) const {
	return (this->toFloat() - right.toFloat());
}

Fixed Fixed::operator*( const Fixed &right ) const {
	return (this->toFloat() * right.toFloat());
}

Fixed Fixed::operator/( const Fixed &right ) const {
	return (this->toFloat() / right.toFloat());
}

Fixed& Fixed::operator++( void ) {
	this->value += 1;
	return (*this);
}

Fixed Fixed::operator++( int ) {
	Fixed temp(*this);
	this->value += 1;
	return (temp);
}

Fixed& Fixed::operator--( void ) {
	this->value -= 1;
	return (*this);
}

Fixed Fixed::operator--( int ) {
	Fixed temp(*this);
	this->value -= 1;
	return (temp);
}

Fixed &Fixed::min( Fixed &a, Fixed &b) {
	if (a < b)
		return (a);
	return (b);
}

const Fixed &Fixed::min( Fixed const &a, Fixed const &b) {
	if (a < b)
		return (a);
	return (b);
}

Fixed &Fixed::max( Fixed &a, Fixed &b) {
	if (a > b)
		return (a);
	return (b);
}

const Fixed &Fixed::max( Fixed const &a, Fixed const &b) {
	if (a > b)
		return (a);
	return (b);
}
