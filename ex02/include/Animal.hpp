/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hosokawa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 12:16:00 by hosokawa          #+#    #+#             */
/*   Updated: 2024/12/19 16:47:28 by hosokawa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
#include <iostream>

class Animal
{
	protected:
		std::string type;

	public:
		Animal();
		Animal(std::string newType);
		Animal(const Animal& origin);
		Animal& operator=(const Animal& origin);
		virtual ~Animal();

		virtual void makeSound(void) const=0;
		std::string     getType( void ) const;
};
