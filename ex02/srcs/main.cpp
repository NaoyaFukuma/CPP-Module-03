/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfukuma <nfukuma@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/22 15:31:51 by nfukuma           #+#    #+#             */
/*   Updated: 2022/12/23 01:59:25 by nfukuma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int	main()
{
	std::cout << "\e[33mCheck the order in which constructors and destructors are called in the derived class.\e[m" << std::endl;
	{
		FragTrap instance( "test" );
	}
	std::cout << "\n\e[33mNext, let's call a member function from a derived class.\n" << \
		"We can see that functions of the base class (ClapTrap) and functions of the derived class (ScavTrap) are used differently.\e[m" << std::endl;
	{
		FragTrap instance( "test2" );
		instance.attack("Nobody");
		instance.takeDamage(30);
		instance.beRepaired(30);
		for (int i = 0; i < 5; ++i)
			instance.takeDamage(30);
		for (int i = 0; i < 99; ++i)
			instance.beRepaired(i + 1);
		instance.attack("Nobody");
		instance.highFivesGuys();
	}
}
