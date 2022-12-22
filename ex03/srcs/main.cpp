/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfukuma <nfukuma@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/22 15:31:51 by nfukuma           #+#    #+#             */
/*   Updated: 2022/12/23 01:56:40 by nfukuma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

// int main( void )
// {
//     DiamondTrap ash( "Ash" );
//     DiamondTrap ash2( ash );
//     DiamondTrap ash3(".");
//
//     ash.whoAmI();
//     ash2.whoAmI();
//     ash3.whoAmI();
//
//     ash.attack( "the air" );
//     ash.takeDamage( 10 );
//     ash.beRepaired( 10 );
//
//     return EXIT_SUCCESS;
// }

#include "DiamondTrap.hpp"

int	main()
{
	std::cout << "\e[33mCheck the order in which constructors and destructors are called in the Virtual inheritance derived class.\e[m" << std::endl;
	{
		DiamondTrap instance( "test" );
	}
	std::cout << "\n\e[33mNext, let's call a member function from a derived class.\n" << \
		"We can see that functions of the base class (ClapTrap) and functions of the derived class (ScavTrap) are used differently.\e[m" << std::endl;
	{
		DiamondTrap instance( "test2" );
		instance.attack("Kamehameha wave");
		instance.takeDamage(30);
		instance.beRepaired(30);
		for (int i = 0; i < 5; ++i)
			instance.takeDamage(30);
		for (int i = 0; i < 49; ++i)
			instance.beRepaired(i + 1);
		instance.attack("Kamehameha wave");
		instance.whoAmI();
		instance.guardGate();
		instance.highFivesGuys();
	}
}
