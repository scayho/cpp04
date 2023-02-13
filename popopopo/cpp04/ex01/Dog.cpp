/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelahce <abelahce@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 15:58:00 by abelahce          #+#    #+#             */
/*   Updated: 2023/02/12 21:04:57 by abelahce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
    this->ideas = new Brain();
    std::cout << "default constructor of Dog" << std::endl;
    this->type = "Dog";
}

Dog::~Dog()
{
    delete [] this->ideas;
    std::cout << "default desconstructor of Dog" << std::endl;
}

Dog::Dog(std::string name)
{
    this->ideas = new Brain();
    std::cout << " paramitrized constructor of Dog" << std::endl;
    this->type = name;
}

Dog::Dog(Dog const & anima)
{
    this->ideas = anima.ideas;
    std::cout << " copy constructor of Dog" << std::endl;
    this->type = anima.getType();
}


void Dog::makeSound() const
{
    std::cout << "Dogs don't miaow" << std::endl;
}


Dog  &Dog::operator = (const Dog &s)
{
    std::cout << "copy assignement operator of Dog called !" << std::endl;
    this->type = s.getType();
    return (*this);
} 