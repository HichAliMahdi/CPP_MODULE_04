/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hali-mah <hali-mah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/06 17:17:41 by hali-mah          #+#    #+#             */
/*   Updated: 2025/04/06 19:01:15 by hali-mah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>
#include <string>

class Animal
{
    protected:
        std::string type;

    public:
        Animal();
        Animal(const Animal& other);
        Animal& operator=(const Animal& other);
        virtual ~Animal();

        void            setType(const std::string type);
        std::string     getType() const;
        virtual void    makeSound() const;
};

class Dog : public Animal
{
    public:
        Dog();
        Dog(const Dog& other);
        Dog &operator=(const Dog &other);
        ~Dog();
        void makeSound() const;
};

class Cat : public Animal
{
    public:
        Cat();
        Cat(const Cat& other);
        Cat &operator=(const Cat &other);
        ~Cat();
        void makeSound() const;
};

#endif