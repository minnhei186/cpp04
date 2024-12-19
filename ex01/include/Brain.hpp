/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hosokawa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 15:59:40 by hosokawa          #+#    #+#             */
/*   Updated: 2024/12/16 16:05:44 by hosokawa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
#include <iostream>


class Brain
{
	private:
		std::string ideas[100];
	public:
		Brain();
		Brain(const Brain& origin);
		Brain& operator=(const Brain& origin);
		~Brain();
};





