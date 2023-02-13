/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelahce <abelahce@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 15:52:59 by abelahce          #+#    #+#             */
/*   Updated: 2023/02/13 00:11:46 by abelahce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
    this->ideas = new Brain();
    std::cout << "default constructor of Cat" << std::endl;
    this->type = "Cat";
}

Cat::~Cat()
{
    delete [] this->ideas;
    std::cout << "default desconstructor of Cat" << std::endl;
}

Cat::Cat(std::string name)
{
    this->ideas = new Brain();
    std::cout << " paramitrized constructor of Cat" << std::endl;
    this->type = name;
}

Cat::Cat(Cat const & anima)
{
    this->ideas = anima.ideas;
    std::cout << " copy constructor of Cat" << std::endl;
    this->type = anima.getType();
}


void Cat::makeSound() const
{
    std::cout << "cats don't bark" << std::endl;   
}


Cat  &Cat::operator = (const Cat &s)
{
    std::cout << "copy assignement operator of Cat called !" << std::endl;
    this->type = s.getType();
    return (*this);
} 