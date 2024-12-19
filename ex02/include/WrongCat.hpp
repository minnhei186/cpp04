/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hosokawa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 12:39:42 by hosokawa          #+#    #+#             */
/*   Updated: 2024/12/16 15:46:54 by hosokawa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once 

#include "WrongAnimal.hpp"

class WrongCat:public WrongAnimal
{
	public:
		WrongCat();
		WrongCat(const WrongCat& origin); 
		WrongCat& operator=(const WrongCat& origin);
		~WrongCat();

		void makeSound(void)const;
};

