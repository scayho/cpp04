/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelahce <abelahce@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 01:10:09 by abelahce          #+#    #+#             */
/*   Updated: 2023/02/12 21:04:57 by abelahce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONG_ANIMAL_HPP
#define WRONG_ANIMAL_HPP

#include <iostream>

class WrongAnimal {
    protected :
        std::string type;
    public :
        WrongAnimal();
        WrongAnimal(std::string name);
        ~WrongAnimal();
        WrongAnimal(WrongAnimal const & anima);
        void makeSound() const;
        WrongAnimal  &operator = (const WrongAnimal &s);
        std::string getType(void) const ;
        void settype(std::string name);
};

#endif