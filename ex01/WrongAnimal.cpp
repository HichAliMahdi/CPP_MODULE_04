/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hali-mah <hali-mah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/06 18:51:18 by hali-mah          #+#    #+#             */
/*   Updated: 2025/04/06 19:04:22 by hali-mah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : type("WrongAnimal")
{
    std::cout << "WrongAnimal constructor called" << std::endl;
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "WrongAnimal deconstructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& other)
{
    this->type = other.type;
    std::cout << "WrongAnimal copy constructor called" << std::endl;
}

std::string WrongAnimal::getType() const
{
    return this->type;
}

void WrongAnimal::setType(const std::string type)
{
    this->type = type;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& other)
{
    if (this != &other)
        this->type = other.type;
    std::cout << "WrongAnimal assignment operator called" << std::endl;
    return *this;
}

void WrongAnimal::makeSound() const
{
    std::cout << "WrongAnimal makes a wrong sound" << std::endl;
}
