/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfukuma <nfukuma@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/22 15:31:51 by nfukuma           #+#    #+#             */
/*   Updated: 2022/12/23 14:37:28 by nfukuma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
# include <iostream>

int	main()
{
	std::cout << "\e[33mCheck the order in which constructors and destructors are called in the derived class.\e[m" << std::endl;
	{
		ScavTrap instance( "test" );
	}
	std::cout << "\n\e[33mNext, let's call a member function from a derived class.\n" << \
		"We can see that functions of the base class (ClapTrap) and functions of the derived class (ScavTrap) are used differently.\e[m" << std::endl;
	{
		ScavTrap instance( "test2" );
		instance.attack("Nobody");
		instance.takeDamage(10);
		instance.beRepaired(10);
		for (int i = 0; i < 11; ++i)
			instance.takeDamage(10);
		for (int i = 0; i < 49; ++i)
			instance.beRepaired(i + 1);
		instance.attack("Nobody");
		instance.guardGate();
	}
}
