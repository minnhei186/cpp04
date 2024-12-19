/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hosokawa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 12:42:18 by hosokawa          #+#    #+#             */
/*   Updated: 2024/12/16 15:45:58 by hosokawa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat():WrongAnimal("WrongCat")
{
	std::cout<<" WrongCat:"<<type<<" default constructor called "<<std::endl;
}

WrongCat::WrongCat(const WrongCat& origin):WrongAnimal(origin)
{
	std::cout<<" WrongCat:"<<type<<" copy constructor called "<<std::endl;
}

WrongCat& WrongCat::operator=(const WrongCat& origin)
{
	if(this!=&origin)
	{
		WrongAnimal::operator=(origin);
	}
	std::cout<<" WrongCat:"<<type<<" assignment operator called "<<std::endl;
	return *this;
}

WrongCat::~WrongCat()
{	
	std::cout<<" WrongCat:"<<type<<" destructor  called "<<std::endl;
}

void WrongCat::makeSound(void)const
{
	std::cout<<" WrongCat:"<<type<<" ... "<<std::endl;
}

