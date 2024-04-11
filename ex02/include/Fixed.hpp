/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvega-g <alvega-g@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 16:45:38 by alvega-g          #+#    #+#             */
/*   Updated: 2024/04/11 12:22:24 by alvega-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class Fixed {
	private:
		int value;
		static const int bits = 8;
	public:
		Fixed( void );
		Fixed( const int num );
		Fixed( const float num );
		Fixed( const Fixed& source );
		Fixed& operator=( const Fixed& source );
		~Fixed( void );
		int getRawBits( void ) const;
		void setRawBits( int const raw );
		float toFloat( void ) const;
		int toInt( void ) const;
		friend std::ostream& operator<<(std::ostream& os, const Fixed& fixed);
};

#endif