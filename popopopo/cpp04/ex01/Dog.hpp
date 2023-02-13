/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelahce <abelahce@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 15:27:16 by abelahce          #+#    #+#             */
/*   Updated: 2023/02/12 00:18:32 by abelahce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include <iostream>
#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal {
    private :
        Brain* ideas;
    public :
        Dog();
        Dog(std::string name);
        ~Dog();
        Dog(Dog const & anima);
        void makeSound() const;
        Dog  &operator = (const Dog &s);
};

#endif