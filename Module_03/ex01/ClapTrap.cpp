/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmyshko <vmyshko@student.codam.nl>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 13:06:25 by vmyshko           #+#    #+#             */
/*   Updated: 2024/10/25 16:25:10 by vmyshko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap:: ClapTrap(void) : _name(""), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
	// _name = "";
	// _hitPoints = 10;
	// _energyPoints = 10;
	// _attackDamage = 0;
	std::cout << "Default constructor called" << std::endl;
}

ClapTrap:: ClapTrap(std::string name): _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
	// _name = name;
	// _hitPoints = 10;
	// _energyPoints = 10;
	// _attackDamage = 0;
	std::cout << "Constructor WITH name called" << std::endl;
}

ClapTrap::~ ClapTrap(void)
{
	std::cout << "Destructor called" << std::endl;
}

ClapTrap:: ClapTrap(const ClapTrap &copy)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = copy; //COPY value of the copied object -> the new one (using the assignment operator =).
}

ClapTrap& ClapTrap::operator = (ClapTrap const &copy)
{
	this->_name = copy.getName();
	this->_hitPoints = copy.getHitPoints();
	this->_energyPoints = copy.getEnergyPoints();
	this->_attackDamage = copy.getAttackDamage();
	std::cout << "Assigment operator called for COPY" << std::endl;
	return (*this);
	
}
//acting functions:

std::string ClapTrap::getName(void) const
{
	return (this->_name);
}

int ClapTrap::getHitPoints(void) const
{
	return (this->_hitPoints);
}

int ClapTrap::getEnergyPoints(void) const
{
	return (this->_energyPoints);
}

int ClapTrap::getAttackDamage(void) const
{
	return (this->_attackDamage);
}

void ClapTrap::attack(std::string const &target)
{
	if (this->_energyPoints <= 0)
	{
		this->_energyPoints = 0;
		std::cout << "ClapTrap " << this->_name << " No energy to attack" << std::endl;
	}
	if (this->_hitPoints <= 0)
	{
		this->_hitPoints = 0;
		std::cout << "ClapTrap " << this->_name << " No hit points to attack" << std::endl;
	}
	this->_energyPoints -= 1;
	std::cout << "ClapTrap " << this->_name << " attacks " << target << ", causing " << this->_attackDamage << " points of damage!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	this->_hitPoints -= amount;
	std::cout << "ClapTrap " << this->_name << " takes " << amount << " points of damage (hitPoints!)" << std::endl;
	if (this->_hitPoints <= 0)
	{
		this->_hitPoints = 0;
		std::cout << "ClapTrap " << this->_name << " is dead!" << std::endl;
	}
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_energyPoints <= 0)
	{
		this->_energyPoints = 0;
		std::cout << "ClapTrap " << this->_name << " No energy to repair" << std::endl;
	}
	this->_energyPoints -= 1;
	this->_hitPoints += amount;
	std::cout << "ClapTrap " << this->_name << " is repaired by " << amount << " points!" << std::endl;
}