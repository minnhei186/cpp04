/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hosokawa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 12:29:05 by hosokawa          #+#    #+#             */
/*   Updated: 2024/12/16 15:41:08 by hosokawa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal():type("WrongAnimal")
{
	std::cout<<" WrongAnimal:"<<type<<" no arg default constructor called "<<std::endl;
}


WrongAnimal::WrongAnimal(std::string newType):type(newType)
{
	std::cout<<" WrongAnimal:"<<type<<" default constructor called "<<std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& origin)
{
	*this=origin;
	std::cout<<" WrongAnimal:"<<type<<" copy constructor called "<<std::endl;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& origin)
{
	if(this!=&origin)
	{
		this->type=origin.type;
	}
	std::cout<<" WrongAnimal:"<<type<<" assignment operator called "<<std::endl;
	return *this;
}

WrongAnimal::~WrongAnimal()
{
	std::cout<<" WrongAnimal:"<<type<<" destructor  called "<<std::endl;
}

void WrongAnimal::makeSound(void)const 
{
	std::cout<<" WrongAnimal:"<<type<<" makeSound called "<<std::endl;
}




