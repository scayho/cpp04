/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelahce <abelahce@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 15:22:05 by abelahce          #+#    #+#             */
/*   Updated: 2023/02/12 21:04:57 by abelahce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

class Animal {
    protected :
        std::string type;
        // std::string ty;
    public :
        Animal();
        Animal(std::string name);
        ~Animal();
        Animal(Animal const & anima);
        virtual void makeSound() const;
        Animal  &operator = (const Animal &s);
        std::string getType(void) const ;
        void settype(std::string name);
};

#endif