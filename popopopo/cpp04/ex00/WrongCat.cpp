/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelahce <abelahce@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 01:12:07 by abelahce          #+#    #+#             */
/*   Updated: 2023/02/12 21:04:57 by abelahce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat()
{
    std::cout << "default constructor of WrongCat" << std::endl;
    this->type = "WrongCat";
}

WrongCat::~WrongCat()
{
    std::cout << "default desconstructor of WrongCat" << std::endl;
}

WrongCat::WrongCat(std::string name)
{
    std::cout << " paramitrized constructor of WrongCat" << std::endl;
    this->type = name;
}

WrongCat::WrongCat(WrongCat const & anima)
{
    std::cout << " copy constructor of WrongCat" << std::endl;
    this->type = anima.getType();
}


void WrongCat::makeSound() const
{
    std::cout << "Wrongcats don't bark" << std::endl;   
}


WrongCat  &WrongCat::operator = (const WrongCat &s)
{
    std::cout << "copy assignement operator of WrongCat called !" << std::endl;
    this->type = s.getType();
    return (*this);
} 