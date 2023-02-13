/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelahce <abelahce@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 15:26:32 by abelahce          #+#    #+#             */
/*   Updated: 2023/02/12 21:04:15 by abelahce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include <iostream>
#include "Animal.hpp"

class Cat : public Animal {
    protected :
        // std::string sososo;
        // std::string sosos;
    public :
        Cat();
        Cat(std::string name);
        ~Cat();
        Cat(Cat const & anima);
        void makeSound() const;
        Cat  &operator = (const Cat &s);
};

#endif