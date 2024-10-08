/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anarama <anarama@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 18:22:27 by anarama           #+#    #+#             */
/*   Updated: 2024/10/08 11:13:35 by anarama          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP

#include "Fixed.hpp"

class Point {
	private:
		const Fixed _x;
		const Fixed _y;
		
	public:
		Point ( void );
		Point ( const float x, const float y );
		Point ( const Point& other);
		Point& operator=( const Point& other);
		~Point ( void );

		const Fixed& getX( void ) const;
		const Fixed& getY( void ) const;
};

bool bsp(const Point v1, const Point v2, const Point v3, const Point testPoint);

#endif // POINT_HPP