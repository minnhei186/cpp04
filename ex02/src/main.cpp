/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hosokawa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 12:51:46 by hosokawa          #+#    #+#             */
/*   Updated: 2024/12/19 15:32:41 by hosokawa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Brain.hpp"


int main(void)
{

//	std::cout<<"-------test animal------"<<std::endl;
//	Animal* animal=new Animal;	
//	animal->makeSound();
//	delete animal;
//
//
//	std::cout<<"-------test dog------"<<std::endl;
//	Dog dog;
//	animal=&dog;
//	animal->makeSound();
//
//	std::cout<<"-------test cat------"<<std::endl;
//	Cat cat;
//	animal=&cat;
//	animal->makeSound();
//
//	std::cout<<"-------test wrongAnimal------"<<std::endl;
//	WrongAnimal* wrongAnimal=new WrongAnimal;	
//	wrongAnimal->makeSound();
//	delete wrongAnimal;
//
//	std::cout<<"-------test wrongCat------"<<std::endl;
//	WrongCat wrongCat;
//	wrongAnimal=&wrongCat;
//	wrongAnimal->makeSound();


	std::cout<<"-------test array animal------"<<std::endl;

	Animal *array_animal[4];
	int i;

	array_animal[0]=new Cat();
	array_animal[1]=new Cat();
	array_animal[2]=new Dog();
	array_animal[3]=new Dog();

	i=0;
	while(i<4)
	{
		array_animal[i]->makeSound();
		i++;
	}
	std::cout<<"-------test array animal destructor ------"<<std::endl;

	i=0;
	while(i<4)
	{
		delete array_animal[i];
		i++;
	}


	std::cout<<"-------test wrong array animal------"<<std::endl;
	Animal wrongArray_animal[4];
	Cat wrongcat0;
	Cat wrongcat1;
	Dog wrongdog0;
	Dog wrongdog1;

	wrongArray_animal[0]=wrongcat0;
	wrongArray_animal[1]=wrongcat1;
	wrongArray_animal[2]=wrongdog0;
	wrongArray_animal[3]=wrongdog1;

	i=0;
	while(i<4)
	{
		wrongArray_animal[i].makeSound();
		i++;
	}


	std::cout<<"-------test finished------"<<std::endl;


	return 0;
}









