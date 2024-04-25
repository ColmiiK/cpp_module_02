/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvega-g <alvega-g@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 11:38:27 by alvega-g          #+#    #+#             */
/*   Updated: 2024/04/25 11:44:45 by alvega-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BSP_H
# define BSP_H

#include <Point.hpp>

float area (const Point p1, const Point p2, const Point p3);
bool bsp(const Point a, const Point b, const Point c, const Point point);

#endif