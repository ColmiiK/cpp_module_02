/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvega-g <alvega-g@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 16:45:38 by alvega-g          #+#    #+#             */
/*   Updated: 2024/06/04 11:21:02 by alvega-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

class Fixed {
	private:
		int value;
		static const int bits = 8;
	public:
		// Constructors
		Fixed( void );
		Fixed( const int num );
		Fixed( const float num );
		Fixed( const Fixed& source );
		// Destructor
		~Fixed( void );
		// Copy assignment operator
		Fixed& operator=( const Fixed& source );
		
		int getRawBits( void ) const;
		void setRawBits( int const raw );
		float toFloat( void ) const;
		int toInt( void ) const;
		// Overload operators
		bool operator>( const Fixed &right ) const;
		bool operator<( const Fixed &right ) const;
		bool operator>=( const Fixed &right ) const;
		bool operator<=( const Fixed &right ) const;
		bool operator==( const Fixed &right ) const;
		bool operator!=( const Fixed &right ) const;
		Fixed operator+( const Fixed &right ) const;
		Fixed operator-( const Fixed &right ) const;
		Fixed operator*( const Fixed &right ) const;
		Fixed operator/( const Fixed &right ) const;
		Fixed& operator++( void );
		Fixed operator++( int );
		Fixed& operator--( void );
		Fixed operator--( int );

		static Fixed &min( Fixed &a, Fixed &b);
		static const Fixed &min( Fixed const &a, Fixed const &b);
		static Fixed &max( Fixed &a, Fixed &b);
		static const Fixed &max( Fixed const &a, Fixed const &b);
		
};

std::ostream& operator<<(std::ostream& os, const Fixed& fixed);
#endif