/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hali-mah <hali-mah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/06 17:39:35 by hali-mah          #+#    #+#             */
/*   Updated: 2025/04/06 18:23:22 by hali-mah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() : type("Set by name")
{
    std::cout << "Animal constructor called" << std::endl;
}

Animal::~Animal()
{
    std::cout << "Animal deconstructor called" << std::endl;
}

Animal::Animal(const Animal& other)
{
    this->type = other.type;
    std::cout << "Copy constructor called" << std::endl;
}
std::string Animal::getType() const
{
    std::cout << "Getter called" << std::endl;
    return this->type;
}

void    Animal::setType(const std::string type)
{
    this->type = type;
    std::cout << "Setter called" << std::endl;
}

Animal& Animal::operator=(const Animal& other)
{
    if (this != &other) 
        this->type = other.type;
    std::cout << "Animal assignment operator called" << std::endl;
    return *this;
}

void Animal::makeSound() const
{
    std::cout << "Animal makes a generic sound" << std::endl;
}
