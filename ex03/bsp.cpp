/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anarama <anarama@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 18:32:28 by anarama           #+#    #+#             */
/*   Updated: 2024/10/08 11:17:04 by anarama          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

static float calculateArea(const Point p1, const Point p2, const Point p3) {
    float calculatedArea = (
        p1.getX().toFloat() * (p2.getY().toFloat() - p3.getY().toFloat()) +
        p2.getX().toFloat() * (p3.getY().toFloat() - p1.getY().toFloat()) +
        p3.getX().toFloat() * (p1.getY().toFloat() - p2.getY().toFloat())
    ) / 2.0f;

	if (calculatedArea >= 0) return calculatedArea;
	else return -calculatedArea;
}

bool bsp(const Point v1, const Point v2, const Point v3, const Point testPoint) {
    float originalArea = calculateArea(v1, v2, v3);
    float area1 = calculateArea(testPoint, v1, v2);
    float area2 = calculateArea(testPoint, v2, v3);
    float area3 = calculateArea(testPoint, v1, v3);

	float totalArea = area1 + area2 + area3;
    return (totalArea == originalArea);
}
