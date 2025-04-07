/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hali-mah <hali-mah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/06 18:39:24 by hali-mah          #+#    #+#             */
/*   Updated: 2025/04/07 14:33:24 by hali-mah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "Brain.hpp"

int main()
{
    const int arraySize = 10;
    
    Animal* animals[arraySize];
    
    for (int i = 0; i < arraySize / 2; i++)
	{
        animals[i] = new Dog();
    }
    
    for (int i = arraySize / 2; i < arraySize; i++)
	{
        animals[i] = new Cat();
    }
    
    std::cout << "\n--- Testing polymorphic behavior ---" << std::endl;
    for (int i = 0; i < arraySize; i++)
	{
        std::cout << "Animal " << i << " (type: " << animals[i]->getType() << ") says: ";
        animals[i]->makeSound();
    }
    
    std::cout << "\n--- Testing deep copy ---" << std::endl;
    
    Dog* originalDog = new Dog();
    Brain* dogBrain = originalDog->getBrain();
    dogBrain->setIdea(0, "I love bones!");
	
    Dog* copiedDog = new Dog(*originalDog);
	
    
    dogBrain->setIdea(0, "I love playing fetch!");
    
    std::cout << "Original Dog's idea: " << originalDog->getBrain()->getIdea(0) << std::endl;
    std::cout << "Copied Dog's idea: " << copiedDog->getBrain()->getIdea(0) << std::endl;

    
    delete originalDog;
    delete copiedDog;
    
    std::cout << "\n--- Cleaning up all animals ---" << std::endl;
    for (int i = 0; i < arraySize; i++)
	{
        std::cout << "Deleting animal " << i << " (type: " << animals[i]->getType() << ")" << std::endl;
        delete animals[i];
    }    
    return 0;
}
