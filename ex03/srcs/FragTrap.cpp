/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfukuma <nfukuma@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/23 00:47:38 by nfukuma           #+#    #+#             */
/*   Updated: 2022/12/23 00:57:21 by nfukuma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name)
	: ClapTrap(name)
{
	_hitPoints = 100;
	_energyPoints = 100;
	_attackDamage = 30;
	std::cout << "FragTrap [" << _name << "] is born!." << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap [" << _name << "] destructed called." << std::endl;
}

void FragTrap:: highFivesGuys()
{
	std::cout << "FragTrap [" << _name << "] high fives guys! Let's not fight, let's have fun!" << std::endl;
}
