/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohurteb <yohurteb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 12:31:26 by yohurteb          #+#    #+#             */
/*   Updated: 2024/11/20 11:49:27 by yohurteb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;

	std::cout << "----------------" << std::endl;

	meta->makeSound();
	i->makeSound();
	j->makeSound();

	std::cout << "----------------" << std::endl;

	delete j;
	j = meta;
	meta->makeSound();
	i->makeSound();
	j->makeSound();

	delete meta;
	delete i;

//-----------------------------------------------------------------
	std::cout << "\n-------- WRONG --------\n" << std::endl;

	const WrongAnimal* meta_w = new WrongAnimal();
	const WrongAnimal* j_w = new WrongCat();

	std::cout << meta_w->getType() << " " << std::endl;
	std::cout << j_w->getType() << " " << std::endl;

	std::cout << "----------------" << std::endl;

	meta_w->makeSound();
	j_w->makeSound();

	delete meta_w;
	delete j_w;

	return 0;
}