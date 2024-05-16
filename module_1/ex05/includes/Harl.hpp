/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmb <kmb@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 03:36:47 by kmb               #+#    #+#             */
/*   Updated: 2024/04/04 01:26:13 by kmb              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

# include <iostream>
# include <string>


class Harl
{
	private:

		void debug(void);
		void info(void);
		void warning(void);
		void error(void);


	public:

		Harl();
		~Harl();
		void complain(std::string level);

};

typedef void (Harl::*t_func) ( void );

#endif
