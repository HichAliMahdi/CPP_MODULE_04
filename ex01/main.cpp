/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hali-mah <hali-mah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/06 18:39:24 by hali-mah          #+#    #+#             */
/*   Updated: 2025/06/28 10:23:39 by hali-mah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"

int main()
{
    const int arraySize = 10;
    
    std::cout << "--- Creating animals ---" << std::endl;
    Animal* animals[arraySize];
    
    std::cout << "\nCreating Dogs..." << std::endl;
    for (int i = 0; i < arraySize / 2; i++)
    {
        animals[i] = new Dog();
        std::cout << "Dog " << i << " created." << std::endl;
    }
    
    std::cout << "\nCreating Cats..." << std::endl;
    for (int i = arraySize / 2; i < arraySize; i++)
    {
        animals[i] = new Cat();
        std::cout << "Cat " << i << " created." << std::endl;
    }
    
    std::cout << "\n--- Testing polymorphic behavior ---" << std::endl;
    for (int i = 0; i < arraySize; i++)
    {
        std::cout << "Animal " << i << " (type: " << animals[i]->getType() << ") says: ";
        animals[i]->makeSound();
    }
    
    std::cout << "\n--- Testing deep copy ---" << std::endl;
    
    std::cout << "Creating original Dog with a Brain idea..." << std::endl;
    Dog* originalDog = new Dog();
    Brain* dogBrain = originalDog->getBrain();
    dogBrain->setIdea(0, "I love bones!");
    
    std::cout << "\nCreating copied Dog from original Dog..." << std::endl;
    Dog* copiedDog = new Dog(*originalDog);
    
    std::cout << "\nModifying original Dog's idea..." << std::endl;
    dogBrain->setIdea(0, "I love playing fetch!");
    
    std::cout << "Original Dog's idea: " << originalDog->getBrain()->getIdea(0) << std::endl;
    std::cout << "Copied Dog's idea: " << copiedDog->getBrain()->getIdea(0) << std::endl;
    
    std::cout << "\n--- Deleting deep copied Dogs ---" << std::endl;
    delete originalDog;
    delete copiedDog;
    
    std::cout << "\n--- Cleaning up all animals ---" << std::endl;
    for (int i = 0; i < arraySize; i++)
    {
        std::cout << "Deleting animal " << i << " (type: " << animals[i]->getType() << ")" << std::endl;
        delete animals[i];
    }    
    
    std::cout << "--- Program finished successfully ---" << std::endl;
    return 0;
}
