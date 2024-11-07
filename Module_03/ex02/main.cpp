/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmyshko <vmyshko@student.codam.nl>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 13:06:14 by vmyshko           #+#    #+#             */
/*   Updated: 2024/10/25 17:31:30 by vmyshko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main (void)
{
	FragTrap last("Last");
	last.attack("Someone 4rd");
	last.takeDamage(55);
	last.beRepaired(15);
	last.highFivesGuys();
	last.takeDamage(100);
	
	std::cout << "----------------------------------------" << std::endl;
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

	std::cout << "----------------------------------------" << std::endl;

	
	return (0);
}
/*In C++, local objects in a function (main() in this case) are destroyed in 
the reverse order of their creation once they go out of scope
1 ->> 2 -> 3 created
3 ->> 2 -> 1 destroyed
first is child, after parent*/