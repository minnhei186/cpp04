/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hosokawa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 12:51:46 by hosokawa          #+#    #+#             */
/*   Updated: 2024/12/19 16:03:04 by hosokawa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"


int main(void)
{

	std::cout<<"-------test pdf--------"<<std::endl;

	const Animal* meta = new Animal(); 
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	std::cout << j->getType() << " " << std::endl; 
	std::cout << i->getType() << " " << std::endl; 
	i->makeSound(); 
	meta->makeSound();	

	delete meta;
	delete j;
	delete i;


	std::cout<<"--------test origin---------"<<std::endl;
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



