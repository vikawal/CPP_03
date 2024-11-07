/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmyshko <vmyshko@student.codam.nl>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 16:08:03 by vmyshko           #+#    #+#             */
/*   Updated: 2024/10/25 16:32:51 by vmyshko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	std::cout << "ScavTrap constructor called" << std::endl;
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
}

ScavTrap::ScavTrap(const ScavTrap &copy) : ClapTrap(copy)
{
	std::cout << "SCAV Copy constructor called" << std::endl;
	*this = copy;
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "ScavTrap destructor called" << std::endl;
}

ScavTrap& ScavTrap::operator = (ScavTrap const &copy)
{
	this->_name = copy.getName();
	this->_hitPoints = copy.getHitPoints();
	this->_energyPoints = copy.getEnergyPoints();
	this->_attackDamage = copy.getAttackDamage();
	std::cout << "SCAV Assigment operator called for COPY" << std::endl;
	return (*this);
}

void ScavTrap::guardGate(void)
{
	std::cout << "ScavTrap " << this->_name << " is now in Gate keeper mode" << std::endl;
}
void ScavTrap::attack(const std::string &target)
{
	std::cout << "ScavTrap " << this->_name << " attacks " << target;
	std::cout << " causing " << this->_attackDamage << " points of damage" << std::endl;
}