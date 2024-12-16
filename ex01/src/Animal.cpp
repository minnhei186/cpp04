/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hosokawa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 12:29:05 by hosokawa          #+#    #+#             */
/*   Updated: 2024/12/16 14:39:07 by hosokawa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal():type("Animal")
{
	std::cout<<" Animal:"<<type<<" no arg default constructor called "<<std::endl;
}


Animal::Animal(std::string newType):type(newType)
{
	std::cout<<" Animal:"<<type<<" default constructor called "<<std::endl;
}

Animal::Animal(const Animal& origin)
{
	*this=origin;
	std::cout<<" Animal:"<<type<<" copy constructor called "<<std::endl;
}

Animal& Animal::operator=(const Animal& origin)
{
	if(this!=&origin)
	{
		this->type=origin.type;
	}
	std::cout<<" Animal:"<<type<<" assignment operator called "<<std::endl;
	return *this;
}

Animal::~Animal()
{
	std::cout<<" Animal:"<<type<<" destructor  called "<<std::endl;
}

void Animal::makeSound(void)const 
{
	std::cout<<" Animal:"<<type<<" makeSound called "<<std::endl;
}




