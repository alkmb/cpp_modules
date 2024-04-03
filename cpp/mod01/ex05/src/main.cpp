/* ************************************************************************** */
/*		    */
/*		:::      ::::::::   */
/*   main.cpp		   :+:      :+:    :+:   */
/*		    +:+ +:+		 +:+     */
/*   By: kmb <kmb@student.42.fr>		    +#+  +:+       +#+		*/
/*		+#+#+#+#+#+   +#+		   */
/*   Created: 2024/03/25 03:36:45 by kmb		       #+#    #+#		     */
/*   Updated: 2024/04/04 00:21:28 by kmb		      ###   ########.fr       */
/*		    */
/* ************************************************************************** */

#include "../includes/Harl.hpp"

int main( void )
{

	std::string	str;
	Harl		harl;

	do
	{
		std::cout << "Enter a level: ";
		std::cin >> str;
		harl.complain(str);
	} while (str.compare("exit"));
	return 0;
}
