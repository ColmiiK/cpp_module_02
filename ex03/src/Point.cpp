/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvega-g <alvega-g@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 10:49:19 by alvega-g          #+#    #+#             */
/*   Updated: 2024/04/25 11:40:30 by alvega-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Point.hpp>

Point::Point( void ) : _x(0), _y(0) {
	// std::cout << "Default constructor called" << std::endl;
}

Point::Point( const float x, const float y ) : _x(x), _y(y) {
	// std::cout << "Default constructor with values called" << std::endl;
}

Point::Point( const Point &source ) : _x(source._x), _y(source._y) {
	// std::cout << "Copy constructor called" << std::endl;
} 

Point& Point::operator=( const Point &source ) {
	// std::cout << "Copy operator called, _x and _y are const" << std::endl;
	if (this == &source)
		return (*this);
	return (*this);
}

Point::~Point( void ) {
	// std::cout << "Destructor called" << std::endl;
}

Fixed Point::getX( void ) const {
	return(_x);
}

Fixed Point::getY( void ) const {
	return(_y);
}
