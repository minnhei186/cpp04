/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hosokawa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 12:39:42 by hosokawa          #+#    #+#             */
/*   Updated: 2024/12/16 14:33:36 by hosokawa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once 

#include "Animal.hpp"

class Dog:public Animal
{
	public:
		Dog();
		Dog(const Dog& origin); 
		Dog& operator=(const Dog& origin);
		~Dog();

		void makeSound(void)const;
};

