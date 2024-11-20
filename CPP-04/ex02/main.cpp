/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yohurteb <yohurteb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 12:31:26 by yohurteb          #+#    #+#             */
/*   Updated: 2024/11/20 17:35:29 by yohurteb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
	const Dog dog;
	const Cat cat;
	const Animal *animal = new Dog;
	//const Animal aninal; Not Possible

	dog.makeSound();
	cat.makeSound();
	animal->makeSound();

	delete animal;
	
	return 0;
}