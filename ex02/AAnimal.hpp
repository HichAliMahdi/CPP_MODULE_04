/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hali-mah <hali-mah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/06 17:17:41 by hali-mah          #+#    #+#             */
/*   Updated: 2025/04/07 14:49:30 by hali-mah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_HPP
# define AANIMAL_HPP

#include <iostream>
#include <string>
#include "Brain.hpp"

class AAnimal
{
    protected:
        std::string type;

    public:
        AAnimal();
        AAnimal(const AAnimal& other);
        AAnimal& operator=(const AAnimal& other);
        virtual ~AAnimal();

        void            setType(const std::string type);
        std::string     getType() const;
        virtual void    makeSound() const = 0; // this is the pure virtual function
};

class Dog : public AAnimal
{
    private:
        Brain*  brain;

    public:
        Dog();
        Dog(const Dog& other);
        Dog &operator=(const Dog &other);
        ~Dog();
        void makeSound() const;
        Brain* getBrain() const;
};

class Cat : public AAnimal
{
    private:
        Brain*  brain;
    public:
        Cat();
        Cat(const Cat& other);
        Cat &operator=(const Cat &other);
        ~Cat();
        void makeSound() const;
        Brain* getBrain() const;
};

#endif