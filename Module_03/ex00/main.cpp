/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmyshko <vmyshko@student.codam.nl>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 13:06:14 by vmyshko           #+#    #+#             */
/*   Updated: 2024/10/25 15:56:50 by vmyshko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main (void)
{
	ClapTrap bla("Bla");

	
	bla.attack("Someone else");
	std::cout << "ClapTrap energy points: " << bla.getEnergyPoints() << std::endl;
	bla.takeDamage(5);
	std::cout << "ClapTrap hit points: " << bla.getHitPoints() << std::endl;
	bla.beRepaired(3);
	std::cout << "ClapTrap energy points: " << bla.getEnergyPoints() << std::endl;
	bla.takeDamage(21);

	return (0);
}
// int main (void)
// {
// 	ClapTrap claptrap1("ClapTrap_1");
// 	ClapTrap claptrap2("ClapTrap_2");

// 	claptrap1.attack("ClapTrap_2");
// 	std::cout << "ClapTrap_1 energy points: " << claptrap1.getEnergyPoints() << std::endl;
// 	claptrap2.takeDamage(1);
// 	std::cout << "ClapTrap_2 hit points: " << claptrap2.getHitPoints() << std::endl;
// 	claptrap2.beRepaired(1);
// 	std::cout << "ClapTrap_2 energy points: " << claptrap2.getEnergyPoints() << std::endl;
	
// 	claptrap2.attack("ClapTrap_1");
// 		std::cout << "ClapTrap_2 energy points: " << claptrap2.getEnergyPoints() << std::endl;
// 	claptrap1.takeDamage(1);
// 	std::cout << "ClapTrap_1 hit points: " << claptrap1.getHitPoints() << std::endl;
// 	claptrap1.beRepaired(1);
// 	std::cout << "ClapTrap_1 energy points: " << claptrap1.getEnergyPoints() << std::endl;
	
// 	//results
// 	std::cout << "ClapTrap_1 hit points: " << claptrap1.getHitPoints() << std::endl;
// 	std::cout << "ClapTrap_2 hit points: " << claptrap2.getHitPoints() << std::endl;
// 	std::cout << "ClapTrap_1 energy points: " << claptrap1.getEnergyPoints() << std::endl;
// 	std::cout << "ClapTrap_2 energy points: " << claptrap2.getEnergyPoints() << std::endl;
// 	std::cout << "ClapTrap_1 attack damage: " << claptrap1.getAttackDamage() << std::endl;
// 	std::cout << "ClapTrap_2 attack damage: " << claptrap2.getAttackDamage() << std::endl;
	
// 	return 0;
// }
