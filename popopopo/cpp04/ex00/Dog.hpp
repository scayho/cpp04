/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelahce <abelahce@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 15:27:16 by abelahce          #+#    #+#             */
/*   Updated: 2023/02/09 00:05:13 by abelahce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include <iostream>
#include "Animal.hpp"

class Dog : public Animal {
    public :
        Dog();
        Dog(std::string name);
        ~Dog();
        Dog(Dog const & anima);
        void makeSound() const;
        Dog  &operator = (const Dog &s);
};

#endif