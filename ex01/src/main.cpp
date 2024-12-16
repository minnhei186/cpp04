/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hosokawa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 12:51:46 by hosokawa          #+#    #+#             */
/*   Updated: 2024/12/16 15:44:26 by hosokawa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"


int main(void)
{
	Animal* animal=new Animal;	
	animal->makeSound();
	delete animal;

	Dog dog;
	animal=&dog;
	animal->makeSound();

	Cat cat;
	animal=&cat;
	animal->makeSound();

	WrongAnimal* wrongAnimal=new WrongAnimal;	
	wrongAnimal->makeSound();
	delete wrongAnimal;

	WrongCat wrongCat;
	wrongAnimal=&wrongCat;
	wrongAnimal->makeSound();



	return 0;
}



