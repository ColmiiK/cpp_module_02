/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvega-g <alvega-g@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 16:46:19 by alvega-g          #+#    #+#             */
/*   Updated: 2024/04/25 11:53:14 by alvega-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <bsp.hpp>

int main(void)
{
	{
	const Point a;
	const Point b(10, 0);
	const Point c(0, 10);
	const Point point(1, 1);

	std::cout << "The point( x= " << point.getX() << "\t\ty= " << point.getY() << "\t) is inside the triangle\n" <<
	"\ta( x= " << a.getX() << "\t\ty= " << a.getY() << "\t)\n" <<
	"\tb( x= " << b.getX() << "\ty= " << b.getY() << "\t)\n" <<
	"\tc( x= " << c.getX() << "\t\ty= " << c.getY() << "\t)\n" << std::endl;
	if (bsp(a, b, c, point) == true)
		std::cout << "\033[32mTRUE\033[0m" << std::endl;
	else
		std::cout << "\033[31mFALSE\033[0m" << std::endl;
	}

	std::cout << "\n---------------------------------------------------------------------\n" << std::endl;
	
	{
	Point a(-1.5, -1.5);
	Point b(2.5, 2.5);
	Point c(-1, -2);
	Point point(8.5, -9);

	std::cout << "The point( x= " << point.getX() << "\ty= " << point.getY() << "\t) is inside the triangle\n" <<
	"\ta( x= " << a.getX() << "\ty= " << a.getY() << "\t)\n" <<
	"\tb( x= " << b.getX() << "\ty= " << b.getY() << "\t)\n" <<
	"\tc( x= " << c.getX() << "\ty= " << c.getY() << "\t)\n" << std::endl;
	if (bsp(a, b, c, point) == true)
		std::cout << "\033[32mTRUE\033[0m" << std::endl;
	else
		std::cout << "\033[31mFALSE\033[0m" << std::endl;
	}

	std::cout << "\n---------------------------------------------------------------------\n" << std::endl;
	
	{
    const Point a(0, 0);
    const Point b(10, 0);
    const Point c(0, 10);
    const Point point(5, 5); // Inside the triangle

    std::cout << "The point( x= " << point.getX() << "\t\ty= " << point.getY() << "\t) is inside the triangle\n" <<
    "\ta( x= " << a.getX() << "\t\ty= " << a.getY() << "\t)\n" <<
    "\tb( x= " << b.getX() << "\ty= " << b.getY() << "\t)\n" <<
    "\tc( x= " << c.getX() << "\t\ty= " << c.getY() << "\t)\n" << std::endl;
    if (bsp(a, b, c, point) == true)
        std::cout << "\033[32mTRUE\033[0m" << std::endl;
    else
        std::cout << "\033[31mFALSE\033[0m" << std::endl;
	}

	std::cout << "\n---------------------------------------------------------------------\n" << std::endl;

	{
		const Point a(0, 0);
		const Point b(10, 0);
		const Point c(0, 10);
		const Point point(11, 11); // Outside the triangle

		std::cout << "The point( x= " << point.getX() << "\t\ty= " << point.getY() << "\t) is inside the triangle\n" <<
		"\ta( x= " << a.getX() << "\t\ty= " << a.getY() << "\t)\n" <<
		"\tb( x= " << b.getX() << "\ty= " << b.getY() << "\t)\n" <<
		"\tc( x= " << c.getX() << "\t\ty= " << c.getY() << "\t)\n" << std::endl;
		if (bsp(a, b, c, point) == true)
			std::cout << "\033[32mTRUE\033[0m" << std::endl;
		else
			std::cout << "\033[31mFALSE\033[0m" << std::endl;
	}

	std::cout << "\n---------------------------------------------------------------------\n" << std::endl;

	{
		const Point a(0, 0);
		const Point b(10, 0);
		const Point c(0, 10);
		const Point point(0, 0); // On the triangle

		std::cout << "The point( x= " << point.getX() << "\t\ty= " << point.getY() << "\t) is inside the triangle\n" <<
		"\ta( x= " << a.getX() << "\t\ty= " << a.getY() << "\t)\n" <<
		"\tb( x= " << b.getX() << "\ty= " << b.getY() << "\t)\n" <<
		"\tc( x= " << c.getX() << "\t\ty= " << c.getY() << "\t)\n" << std::endl;
		if (bsp(a, b, c, point) == true)
			std::cout << "\033[32mTRUE\033[0m" << std::endl;
		else
			std::cout << "\033[31mFALSE\033[0m" << std::endl;
	}
	
	return (0);
}