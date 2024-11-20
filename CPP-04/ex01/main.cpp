/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohurteb <yohurteb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 12:31:26 by yohurteb          #+#    #+#             */
/*   Updated: 2024/11/20 16:01:24 by yohurteb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
	const Dog* j = new Dog();
	const Dog i = *j;

	delete j;

//-------------- My test --------------------

	const Animal *tab[10];

	for (size_t i = 0; i < 5; i++)
		tab[i] = new Dog();
	for (size_t i = 5; i < 10; i++)
		tab[i] = new Cat();

	std::cout << "-----------------" << std::endl;

	for (size_t i = 0; i < 10; i++)
	{
		tab[i]->show_begin_brain();
		tab[i]->makeSound();
	}

	std::cout << "-----------------" << std::endl;

	for (size_t i = 0; i < 10; i++)
		delete tab[i];

	std::cout << "-----------------" << std::endl;

	const Animal *test_animal = new Animal();

	test_animal->show_begin_brain();

	delete test_animal;

	return 0;
}