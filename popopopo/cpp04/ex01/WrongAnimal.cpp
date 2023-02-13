/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelahce <abelahce@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 01:11:00 by abelahce          #+#    #+#             */
/*   Updated: 2023/02/12 21:04:57 by abelahce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
    std::cout << "default constructor of WrongAnimal" << std::endl;
    this->type = "WrongAnimal";
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "default desconstructor of WrongAnimal" << std::endl;
}   

WrongAnimal::WrongAnimal(std::string name)
{
    std::cout << " paramitrized constructor of WrongAnimal" << std::endl;
    this->type = name;
}

WrongAnimal::WrongAnimal(WrongAnimal const & anima)
{
    std::cout << " copy constructor of WrongAnimal" << std::endl;
    this->type = anima.getType();
}


void WrongAnimal::makeSound() const
{
    std::cout << "Wronganimals talking with their species's language" << std::endl;   
}


WrongAnimal  &WrongAnimal::operator = (const WrongAnimal &s)
{
    std::cout << "copy assignement operator of WrongAnimal called !" << std::endl;
    this->type = s.getType();
    return (*this);
} 



std::string WrongAnimal::getType(void) const
{
    return (this->type);
}

void WrongAnimal::settype(std::string name)
{
    this->type = name;
}