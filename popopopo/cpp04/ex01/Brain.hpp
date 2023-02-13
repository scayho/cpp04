/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelahce <abelahce@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 01:30:56 by abelahce          #+#    #+#             */
/*   Updated: 2023/02/10 21:47:42 by abelahce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>


class Brain {
    private :
        std::string ideas[100];
    public :
        Brain();
        ~Brain();
        Brain(std::string idea);
        Brain(Brain &brain);
};

#endif