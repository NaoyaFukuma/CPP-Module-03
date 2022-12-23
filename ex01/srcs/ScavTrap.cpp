/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfukuma <nfukuma@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/22 23:34:37 by nfukuma           #+#    #+#             */
/*   Updated: 2022/12/23 14:37:34 by nfukuma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
# include <iostream>

ScavTrap::ScavTrap(std::string name)
	: ClapTrap(name)
{
	_hitPoints = 100;
	_energyPoints = 50;
	_attackDamage = 20;
	std::cout << "ScavTrap [" << _name << "] is born!." << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap [" << _name << "] destructed called." << std::endl;
}

void ScavTrap::attack(std::string const &target)
{
	if (_energyPoints == 0)
	{
		std::cout << "ScavTrap [" << _name << "] is out of energy! Failed to attack" << std::endl;
		return ;
	}
	std::cout << "ScavTrap [" << _name << "] attacks " << target << ", causing " << _attackDamage << " points of damage!" << std::endl;
	--_energyPoints;
}

void ScavTrap::guardGate()
{
	std::cout << "ScavTrap [" << _name << "] is now in Gate keeper mode." << std::endl;
}
