/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelahce <abelahce@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 01:30:53 by abelahce          #+#    #+#             */
/*   Updated: 2023/02/10 21:50:17 by abelahce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
    std::cout << "default constructor BRAIN called " << std::endl;
}

Brain::Brain(std::string idea)
{
    (void)idea;
    std::cout << "paramittized constructor BRAIN called " << std::endl;

}
Brain::Brain(Brain &brain)
{
    (void)brain;
    std::cout << "copy constructor BRAIN called " << std::endl;

}
Brain::~Brain()
{
    std::cout << " desconstructor BRAIN called " << std::endl;

}