/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfukuma <nfukuma@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/22 23:34:01 by nfukuma           #+#    #+#             */
/*   Updated: 2022/12/23 14:37:15 by nfukuma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"
# include <iostream>

class ScavTrap : public ClapTrap
{
  public:
	ScavTrap(std::string name);
	~ScavTrap();

	void attack(std::string const &target);
	void guardGate();
};

#endif
