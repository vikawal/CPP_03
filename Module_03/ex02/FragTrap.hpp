/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmyshko <vmyshko@student.codam.nl>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 16:56:33 by vmyshko           #+#    #+#             */
/*   Updated: 2024/10/25 17:00:57 by vmyshko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAG_TRAP_HPP
#define FRAG_TRAP_HPP

#include <iostream>
#include <string>
#include <math.h>
// #include <fstream> 
// #include <sstream>
// #include <string>
#include "ClapTrap.hpp"

class FragTrap : public ClapTrap //inheritance
{
	public:
		FragTrap(std::string name); 
		FragTrap(const FragTrap &copy); 
		~FragTrap(void); // destructor
//overloaded operator =
		FragTrap &operator=(FragTrap const &copy);
		
		//member functions - methods by SUBJECT
		void highFivesGuys(void);
		
		
};

#endif