/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anarama <anarama@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/05 12:42:22 by anarama           #+#    #+#             */
/*   Updated: 2024/10/05 12:52:51 by anarama          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# define DEFAULT_INTEGER 0

class Fixed {
	private:
		static const int _num_fraction_bits;
		int _integer;
	
	public:
		Fixed( void );
		Fixed( const int& integer );
		Fixed& operator=(const Fixed& other);
		~Fixed( void );

		int		getRawBits( void ) const;
		void	setRawBits( int const raw );
};

#endif // FIXED_HPP