/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anarama <anarama@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/06 16:29:20 by anarama           #+#    #+#             */
/*   Updated: 2024/10/08 11:14:08 by anarama          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Point.hpp"

int main() {
    Point a(0.0f, 0.0f);
    Point b(5.0f, 0.0f);
    Point c(0.0f, 5.0f);

    Point inside(2.0f, 2.0f);
    if (bsp(a, b, c, inside)) {
        std::cout << "Test 1 (Inside): Point is inside the triangle." << std::endl;
    } else {
        std::cout << "Test 1 (Inside): Point is outside the triangle." << std::endl;
    }

    Point outside(6.0f, 6.0f);
    if (bsp(a, b, c, outside)) {
        std::cout << "Test 2 (Outside): Point is inside the triangle." << std::endl;
    } else {
        std::cout << "Test 2 (Outside): Point is outside the triangle." << std::endl;
    }

    Point onEdge(2.5f, 0.0f);
    if (bsp(a, b, c, onEdge)) {
        std::cout << "Test 3 (On Edge): Point is inside the triangle." << std::endl;
    } else {
        std::cout << "Test 3 (On Edge): Point is outside the triangle." << std::endl;
    }

    Point onVertex(0.0f, 0.0f);
    if (bsp(a, b, c, onVertex)) {
        std::cout << "Test 4 (On Vertex): Point is inside the triangle." << std::endl;
    } else {
        std::cout << "Test 4 (On Vertex): Point is outside the triangle." << std::endl;
    }

    Point center(1.67f, 1.67f);
    if (bsp(a, b, c, center)) {
        std::cout << "Test 5 (Center): Point is inside the triangle." << std::endl;
    } else {
        std::cout << "Test 5 (Center): Point is outside the triangle." << std::endl;
    }

    return 0;
}