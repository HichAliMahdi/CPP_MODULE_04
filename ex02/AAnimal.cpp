/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hali-mah <hali-mah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/06 17:39:35 by hali-mah          #+#    #+#             */
/*   Updated: 2025/06/27 06:27:02 by hali-mah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::AAnimal() : type("Set by name")
{
    std::cout << "Animal constructor called" << std::endl;
}

AAnimal::~AAnimal()
{
    std::cout << "Animal deconstructor called" << std::endl;
}

AAnimal::AAnimal(const AAnimal& other)
{
    this->type = other.type;
    std::cout << "Copy constructor called" << std::endl;
}
std::string AAnimal::getType() const
{
    std::cout << "Getter called" << std::endl;
    return this->type;
}

void    AAnimal::setType(const std::string type)
{
    this->type = type;
    std::cout << "Setter called" << std::endl;
}

AAnimal& AAnimal::operator=(const AAnimal& other)
{
    if (this != &other) 
        this->type = other.type;
    std::cout << "Animal assignment operator called" << std::endl;
    return *this;
}

