/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hosokawa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 12:16:00 by hosokawa          #+#    #+#             */
/*   Updated: 2024/12/16 15:39:17 by hosokawa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
#include <iostream>

class WrongAnimal
{
	protected:
		std::string type;

	public:
		WrongAnimal();
		WrongAnimal(std::string newType);
		WrongAnimal(const WrongAnimal& origin);
		WrongAnimal& operator=(const WrongAnimal& origin);
		virtual ~WrongAnimal();

		void makeSound(void) const;
};
