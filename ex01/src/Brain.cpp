/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hosokawa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 16:06:15 by hosokawa          #+#    #+#             */
/*   Updated: 2024/12/18 14:03:37 by hosokawa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	std::cout<<" Brain: default constructor called "<<std::endl;
}

Brain::Brain(const Brain& origin)
{
	*this=origin;
	std::cout<<" Brain: copy constructor called "<<std::endl;
}

Brain& Brain::operator=(const Brain& origin)
{
	int i;
	if(this!=&origin)
	{
		i=0;
		while(i<100)
		{
			this->ideas[i]=origin.ideas[i];
			i++;
		}
	}
	std::cout<<" Brain: assignment operator called "<<std::endl;

	return *this;
}

Brain::~Brain()
{
	std::cout<<" Brain: destructor  called "<<std::endl;
}


