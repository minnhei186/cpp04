/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hosokawa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 12:39:42 by hosokawa          #+#    #+#             */
/*   Updated: 2024/12/16 14:33:23 by hosokawa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once 

#include "Animal.hpp"

class Cat:public Animal
{
	public:
		Cat();
		Cat(const Cat& origin); 
		Cat& operator=(const Cat& origin);
		~Cat();

		void makeSound(void)const;
};

