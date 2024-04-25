/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvega-g <alvega-g@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 10:56:26 by alvega-g          #+#    #+#             */
/*   Updated: 2024/04/25 11:47:49 by alvega-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Point.hpp>

static float area(const Point p1, const Point p2, const Point p3) {
    float x1 = p1.getX().toFloat();
    float y1 = p1.getY().toFloat();
    float x2 = p2.getX().toFloat();
    float y2 = p2.getY().toFloat();
    float x3 = p3.getX().toFloat();
    float y3 = p3.getY().toFloat();

    return 0.5 * abs(x1*(y2-y3) + x2*(y3-y1) + x3*(y1-y2));
}

bool bsp(const Point a, const Point b, const Point c, const Point point) {
    float A = area(a, b, c);
    if (A == 0) {
        return false;
    }
    float A1 = area(point, b, c);
    float A2 = area(a, point, c);
    float A3 = area(a, b, point);
    return (A == A1 + A2 + A3);
}