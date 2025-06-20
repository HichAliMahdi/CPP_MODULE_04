/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hali-mah <hali-mah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/20 18:43:59 by hali-mah          #+#    #+#             */
/*   Updated: 2025/06/20 19:28:59 by hali-mah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

#include "AAnimal.hpp"

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