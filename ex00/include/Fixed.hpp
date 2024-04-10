/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvega-g <alvega-g@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 16:45:38 by alvega-g          #+#    #+#             */
/*   Updated: 2024/04/10 17:08:16 by alvega-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	Default constructor ( Fixed obj1; )
		Creates the class and initializes it to a valid state to be used
	Copy constructor ( Fixed obj2 = obj1; )
		Creates the class and copies the data from another object of the same
		class to it
	Copy assignment operator ( obj2 = obj1; )
		Copies the data from another object of the same class to one object, usually
		when both already exists and have been created previously
	Destructor
		Releases all resources from the class once it goes out of scope or it's deleted
*/

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class Fixed {
	private:
		int value;
		static const int bits;
	public:
		Fixed( void ); // Default constructor
		Fixed ( const Fixed& other ); // Copy constructor
		Fixed& operator=( const Fixed& other ); // Copy assignment operator
		~Fixed( void ); // Destructor
		int getRawBits ( void ) const;
		void setRawBits ( int const raw );
}

#endif