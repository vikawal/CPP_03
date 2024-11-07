/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmyshko <vmyshko@student.codam.nl>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 16:07:20 by vmyshko           #+#    #+#             */
/*   Updated: 2024/10/25 16:14:29 by vmyshko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAV_TRAP_HPP
#define SCAV_TRAP_HPP

#include <iostream>
#include <string>
#include <math.h>
// #include <fstream> 
// #include <sstream>
// #include <string>
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
	public:
		ScavTrap(std::string name); 
		ScavTrap(const ScavTrap &copy); 
		~ScavTrap(void); // destructor
//overloaded operator =
		ScavTrap &operator=(ScavTrap const &copy);
		
		//member functions - methods by SUBJECT
		void attack(const std::string& target);
		void guardGate(void);
		
		
};

#endif
