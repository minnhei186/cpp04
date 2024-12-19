/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hosokawa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 12:39:42 by hosokawa          #+#    #+#             */
/*   Updated: 2024/12/16 16:40:06 by hosokawa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once 

#include "Animal.hpp"
#include "Brain.hpp"

class Cat:public Animal
{
	private:
		Brain* brain;
	public:
		Cat();
		Cat(const Cat& origin); 
		Cat& operator=(const Cat& origin);
		~Cat();

		void makeSound(void)const;
};

