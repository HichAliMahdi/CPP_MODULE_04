/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hali-mah <hali-mah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/06 18:39:24 by hali-mah          #+#    #+#             */
/*   Updated: 2025/06/20 19:33:12 by hali-mah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "Brain.hpp"

int main()
{
    // std::cout << "\n--- Testing abstract class ---" << std::endl;
    // std::cout << "Attempting to instantiate an abstract Animal class (commented out):" << std::endl;
    // This would cause compile error: cannot instantiate abstract class
    // Animal* abstractAnimal = new Animal();
    
    std::cout << "\n--- Testing array of animals ---" << std::endl;
    const int arraySize = 10;
    AAnimal* animals[arraySize];
    
    std::cout << "\n--- Creating Dogs ---" << std::endl;
    for (int i = 0; i < arraySize / 2; i++)
    {
        animals[i] = new Dog();
    }
    
    std::cout << "\n--- Creating Cats ---" << std::endl;
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
    
    std::cout << "\n--- Testing copy constructor ---" << std::endl;
    Dog* copiedDog = new Dog(*originalDog);
    
    std::cout << "\nBefore modifying original dog's idea:" << std::endl;
    std::cout << "Original Dog's idea: " << originalDog->getBrain()->getIdea(0) << std::endl;
    std::cout << "Copied Dog's idea: " << copiedDog->getBrain()->getIdea(0) << std::endl;
    
    dogBrain->setIdea(0, "I love playing fetch!");
    
    std::cout << "\nAfter modifying original dog's idea:" << std::endl;
    std::cout << "Original Dog's idea: " << originalDog->getBrain()->getIdea(0) << std::endl;
    std::cout << "Copied Dog's idea: " << copiedDog->getBrain()->getIdea(0) << std::endl;
    
    std::cout << "\n--- Testing Cat deep copy ---" << std::endl;
    Cat* originalCat = new Cat();
    originalCat->getBrain()->setIdea(0, "I love fish!");
    
    Cat* copiedCat = new Cat(*originalCat);
    
    std::cout << "\nBefore modifying original cat's idea:" << std::endl;
    std::cout << "Original Cat's idea: " << originalCat->getBrain()->getIdea(0) << std::endl;
    std::cout << "Copied Cat's idea: " << copiedCat->getBrain()->getIdea(0) << std::endl;
    
    originalCat->getBrain()->setIdea(0, "I love sleeping!");
    
    std::cout << "\nAfter modifying original cat's idea:" << std::endl;
    std::cout << "Original Cat's idea: " << originalCat->getBrain()->getIdea(0) << std::endl;
    std::cout << "Copied Cat's idea: " << copiedCat->getBrain()->getIdea(0) << std::endl;
    
    std::cout << "\n--- Testing assignment operator ---" << std::endl;
    Dog assignedDog;
    assignedDog = *originalDog;
    
    std::cout << "\nBefore modifying original dog's idea:" << std::endl;
    std::cout << "Original Dog's idea: " << originalDog->getBrain()->getIdea(0) << std::endl;
    std::cout << "Assigned Dog's idea: " << assignedDog.getBrain()->getIdea(0) << std::endl;
    
    originalDog->getBrain()->setIdea(0, "I love chasing cars!");
    
    std::cout << "\nAfter modifying original dog's idea:" << std::endl;
    std::cout << "Original Dog's idea: " << originalDog->getBrain()->getIdea(0) << std::endl;
    std::cout << "Assigned Dog's idea: " << assignedDog.getBrain()->getIdea(0) << std::endl;
    
    std::cout << "\n--- Cleaning up ---" << std::endl;
    delete originalDog;
    delete copiedDog;
    delete originalCat;
    delete copiedCat;
    
    std::cout << "\n--- Cleaning up all animals ---" << std::endl;
    for (int i = 0; i < arraySize; i++)
    {
        std::cout << "Deleting animal " << i << " (type: " << animals[i]->getType() << ")" << std::endl;
        delete animals[i];
    }
    
    return 0;
}
