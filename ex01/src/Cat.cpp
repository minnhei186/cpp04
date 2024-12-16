/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hosokawa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 12:42:18 by hosokawa          #+#    #+#             */
/*   Updated: 2024/12/16 14:34:19 by hosokawa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat():Animal("Cat")
{
	std::cout<<" Cat:"<<type<<" default constructor called "<<std::endl;
}

Cat::Cat(const Cat& origin):Animal(origin)
{
	std::cout<<" Cat:"<<type<<" copy constructor called "<<std::endl;
}

Cat& Cat::operator=(const Cat& origin)
{
	if(this!=&origin)
	{
		Animal::operator=(origin);
	}
	std::cout<<" Cat:"<<type<<" assignment operator called "<<std::endl;
	return *this;
}

Cat::~Cat()
{	
	std::cout<<" Cat:"<<type<<" destructor  called "<<std::endl;
}

void Cat::makeSound(void)const
{
	std::cout<<" Cat:"<<type<<" ... "<<std::endl;
}

