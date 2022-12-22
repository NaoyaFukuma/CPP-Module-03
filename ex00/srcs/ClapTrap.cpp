/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfukuma <nfukuma@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/22 15:32:20 by nfukuma           #+#    #+#             */
/*   Updated: 2022/12/22 16:15:49 by nfukuma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name)
	: _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
	std::cout << "ClapTrap " << _name << " is born!" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &rhs)
	: _name(rhs._name), _hitPoints(rhs._hitPoints), _energyPoints(rhs._energyPoints), _attackDamage(rhs._attackDamage)
{
	std::cout << "ClapTrap copy constructor called" << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap destructor called" << std::endl;
}


void ClapTrap::attack(std::string const &target)
{
	if (_energyPoints <= 0)
	{
		std::cout << "ClapTrap " << _name << " is out of energy!" << std::endl;
		return ;
	}
	std::cout << "ClapTrap " << _name << " attacks " << target << ", causing " << _attackDamage << " points of damage!" << std::endl;
	--_energyPoints;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (_hitPoints <= amount)
	{
		std::cout << "ClapTrap " << _name << " is dead!" << std::endl;
		return ;
	}
	std::cout << "ClapTrap " << _name << " takes " << amount << " damage!" << std::endl;
	_hitPoints -= amount;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (_energyPoints <= amount)
	{
		std::cout << "ClapTrap " << _name << " is out of energy!" << std::endl;
		return ;
	}
	std::cout << "ClapTrap " << _name << " repairs itself for " << amount << " hit points!" << std::endl;
	--_energyPoints;
	_hitPoints += amount;
}
