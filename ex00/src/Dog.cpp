/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hosokawa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 12:42:18 by hosokawa          #+#    #+#             */
/*   Updated: 2024/12/16 14:35:03 by hosokawa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog():Animal("Dog")
{
	std::cout<<" Dog:"<<type<<" default constructor called "<<std::endl;
}

Dog::Dog(const Dog& origin):Animal(origin)
{
	std::cout<<" Dog:"<<type<<" copy constructor called "<<std::endl;
}

Dog& Dog::operator=(const Dog& origin)
{
	if(this!=&origin)
	{
		Animal::operator=(origin);
	}
	std::cout<<" Dog:"<<type<<" assignment operator called "<<std::endl;
	return *this;
}

Dog::~Dog()
{	
	std::cout<<" Dog:"<<type<<" destructor  called "<<std::endl;
}

void Dog::makeSound(void)const
{
	std::cout<<" Dog:"<<type<<" !WowWow_BowBow! "<<std::endl;
}

