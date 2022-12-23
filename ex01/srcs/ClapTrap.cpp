/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfukuma <nfukuma@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/22 15:32:20 by nfukuma           #+#    #+#             */
/*   Updated: 2022/12/23 14:37:22 by nfukuma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
# include <iostream>

ClapTrap::ClapTrap(std::string name)
	: _name(name), _hitPoints(10), _energyPoints(10), _attackDamage()
{
	std::cout << "ClapTrap [" << _name << "] is born!" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &src)
	: _name(src._name), _hitPoints(src._hitPoints), _energyPoints(src._energyPoints), _attackDamage(src._attackDamage)
{
	std::cout << "ClapTrap [" << _name << "] copy constructor called" << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap [" << _name << "] destructor called" << std::endl;
}


void ClapTrap::attack(std::string const &target)
{
	if (_energyPoints == 0)
	{
		std::cout << "ClapTrap [" << _name << "] is out of energy! Failed to attack" << std::endl;
		return ;
	}
	std::cout << "ClapTrap [" << _name << "] attacks " << target << ", causing " << _attackDamage << " points of damage!" << std::endl;
	--_energyPoints;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (_hitPoints == 0)
	{
		std::cout << "ClapTrap [" << _name << "] is already dead!" << std::endl;
		return ;
	}
	if (_hitPoints <= amount)
	{
		_hitPoints = 0;
		std::cout << "ClapTrap [" << _name << "] takes " << amount << " damage! Remaining hit points " << _hitPoints << " dead!" <<std::endl;
		return ;
	}
	_hitPoints -= amount;
	std::cout << "ClapTrap [" << _name << "] takes " << amount << " damage! Remaining hit points " << _hitPoints << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (_energyPoints == 0)
	{
		std::cout << "ClapTrap [" << _name << "] is out of energy! Failed to repaired" << std::endl;
		return ;
	}
	_hitPoints += amount;
	std::cout << "ClapTrap [" << _name << "] repairs itself for " << amount << " hit points! Remaining hit points " << _hitPoints << std::endl;
	--_energyPoints;
}
