/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anarama <anarama@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/05 12:42:22 by anarama           #+#    #+#             */
/*   Updated: 2024/10/06 16:37:22 by anarama          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

# define DEFAULT_INTEGER 0

class Fixed {
	private:
		static const int _num_fraction_bits;
		int _integer;
	
	public:
		Fixed( void );
		Fixed( const Fixed& other );
		Fixed( const int integer );
		Fixed( const float float_number );
		Fixed& operator=(const Fixed& other);
		~Fixed( void );

		int		getRawBits( void ) const;
		void	setRawBits( int const raw );
		float	toFloat( void ) const;
		int		toInt( void ) const;
};

std::ostream& operator<<(std::ostream& out, const Fixed& other);

#endif // FIXED_HPP