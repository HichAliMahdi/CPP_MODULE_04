/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hali-mah <hali-mah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/06 18:22:28 by hali-mah          #+#    #+#             */
/*   Updated: 2025/04/06 18:29:58 by hali-mah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"


Cat::Cat() : Animal()
{
    this->type = "Cat";
    std::cout << "Cat constructor called" << std::endl;
}

Cat::Cat(const Cat& other)
{
    std::cout << "Cat copy constructor called" << std::endl;
}

Cat& Cat::operator=(const Cat &other)
{
    if (this != &other)
        Animal::operator=(other);
    std::cout << "Cat assignment operator called" << std::endl;
    return *this;
}

Cat::~Cat()
{
    std::cout << "Cat deconstructor called" << std::endl;
}

void    Cat::makeSound() const
{
    std::cout << "Meow!" << std::endl;
}
