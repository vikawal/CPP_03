/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmyshko <vmyshko@student.codam.nl>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 13:06:14 by vmyshko           #+#    #+#             */
/*   Updated: 2024/10/25 16:52:09 by vmyshko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main (void)
{
	ScavTrap bla_2 ("Bla_2");
	bla_2.attack("Maybe Bla_3");
	
	bla_2.takeDamage(5);
	
	bla_2.beRepaired(3);

	bla_2.guardGate();
	
	bla_2.takeDamage(120);
	
	
	
	std::cout << "----------------------------------------" << std::endl;
	
	ClapTrap bla("Bla");

	bla.attack("Someone else");
	
	bla.takeDamage(7);
	
	bla.beRepaired(2);

	bla.takeDamage(23);

	
	return (0);
}
