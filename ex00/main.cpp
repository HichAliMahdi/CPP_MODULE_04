/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hali-mah <hali-mah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/06 18:39:24 by hali-mah          #+#    #+#             */
/*   Updated: 2025/06/20 19:10:15 by hali-mah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"

int main()
{
	std::cout << "==== Creating animal with the Animal class constructor ===" << std::endl;
	const Animal* meta = new Animal();
	std::cout << "\n==== Creating Dog ===" << std::endl;
	const Animal* j = new Dog();
	std::cout << "\n==== Creating Cat ===" << std::endl;
	const Animal* i = new Cat();
	std::cout << "\n==== Creating WrongAnimal ===" << std::endl;
	const WrongAnimal* w = new WrongCat();
	std::cout << "\n==== Getting the type ===" << std::endl;
	std::cout << "j is a " << j->getType() << std::endl;
	std::cout << "i is a " << i->getType() << std::endl;
	std::cout << "w is a " << w->getType() << std::endl;
	std::cout << "\n==== Cat noise ===" << std::endl;
	i->makeSound();
	std::cout << "\n==== Dog noise ===" << std::endl;
	j->makeSound();
	std::cout << "\n==== Wrong noise ===" << std::endl;
	w->makeSound();
	std::cout << "\n==== Default noise ===" << std::endl;
	meta->makeSound();
	std::cout << "\n==== Freeing memory ===" << std::endl;
	delete(meta);
	delete(j);
	delete(i);
	delete(w);
	return 0;
}
