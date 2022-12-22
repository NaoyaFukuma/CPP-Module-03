/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfukuma <nfukuma@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/22 15:31:51 by nfukuma           #+#    #+#             */
/*   Updated: 2022/12/23 01:59:53 by nfukuma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main()
{
	std::cout << "\e[33m[Attention] This game is incomplete. Please look forward to the next one.\e[m" << std::endl;
	ClapTrap default_constractor_clap("nfukuma");
	ClapTrap copy_constractor_clap(default_constractor_clap);

	for (int i = 0; i < 11; ++i)
	{
		std::cout << "Attack! cout " << i << std::endl;
		default_constractor_clap.attack("Nobody");
		copy_constractor_clap.attack("Nobody(from copy)");
	}
		default_constractor_clap.beRepaired(10);
		copy_constractor_clap.beRepaired(10);
}
