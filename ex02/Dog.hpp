/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hali-mah <hali-mah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/20 18:43:33 by hali-mah          #+#    #+#             */
/*   Updated: 2025/06/20 19:28:43 by hali-mah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

#include "AAnimal.hpp"

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

#endif