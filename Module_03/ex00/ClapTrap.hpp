/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmyshko <vmyshko@student.codam.nl>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 13:06:02 by vmyshko           #+#    #+#             */
/*   Updated: 2024/10/25 13:20:24 by vmyshko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#pragma once
#ifndef CLAP_TRAP_HPP
#define CLAP_TRAP_HPP

#include <iostream>
#include <string>
#include <math.h>
// #include <fstream> 
// #include <sstream>
// #include <string>

class ClapTrap
{
	private:
		std::string _name;
		int _hitPoints;
		int _energyPoints;
		int _attackDamage;
		
	public:
	//constructor
		ClapTrap(); //by default
		ClapTrap(std::string name); //with name
		ClapTrap(const ClapTrap &copy); // full new object copy is created
		~ClapTrap(void); // destructor
//overloaded operator =
		ClapTrap &operator=(ClapTrap const &copy);
		
		//member functions - methods by SUBJECT
		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);

		//getters
		std::string getName(void) const;
		int getHitPoints(void) const;
		int getEnergyPoints(void) const;
		int getAttackDamage(void) const;
		
		
};

#endif
