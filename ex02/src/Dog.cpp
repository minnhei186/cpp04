/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hosokawa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 12:42:18 by hosokawa          #+#    #+#             */
/*   Updated: 2024/12/19 15:29:51 by hosokawa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Brain.hpp"

Dog::Dog():Animal("Dog")
{
	brain=new Brain;
	std::cout<<" Dog:"<<type<<" default constructor called "<<std::endl;
}

Dog::Dog(const Dog& origin):Animal(origin)
{
	brain=new Brain(*origin.brain);
	std::cout<<" Dog:"<<type<<" copy constructor called "<<std::endl;
}

Dog& Dog::operator=(const Dog& origin)
{
	if(this!=&origin)
	{
		Animal::operator=(origin);
		delete brain;
		brain=new Brain(*origin.brain);
	}
	std::cout<<" Dog:"<<type<<" assignment operator called "<<std::endl;
	return *this;
}


Dog::~Dog()
{	
	delete brain;
	std::cout<<" Dog:"<<type<<" destructor  called "<<std::endl;
}

void Dog::makeSound(void)const
{
	std::cout<<" Dog:"<<type<<" !WowWow_BowBow! "<<std::endl;
}

