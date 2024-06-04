/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvega-g <alvega-g@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 16:46:19 by alvega-g          #+#    #+#             */
/*   Updated: 2024/06/04 11:14:15 by alvega-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Fixed.hpp>

int main( void ) {
	
	Fixed a;
	Fixed b( a );
	Fixed c;
	
	c = b;

	a.setRawBits(8);
	std::cout << a.getRawBits() << std::endl;
	b.setRawBits(4);
	std::cout << b.getRawBits() << std::endl;
	c.setRawBits(2);
	std::cout << c.getRawBits() << std::endl;
	
	return 0;
}
