/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelahce <abelahce@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 15:21:40 by abelahce          #+#    #+#             */
/*   Updated: 2023/02/13 00:10:36 by abelahce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Dog.hpp"

int main(void)
{
    Animal *array[4];
    // std::cout << &array[0] << " | " << &array[1] << " | " << &array << std::endl;
    array[0] = new Dog("jahad");
    array[1] = new Cat("mazino");
    // std::cout << array[0] << " | " << array[1] << " | " << &array << std::endl;
    // std::cout << &array[0] << " | " << &array[1] << " | " << &array << std::endl;
    std::cout << "++++++++++++++++++++++++++++++++++++++++++=++++++++++++++++++++++++++++++++++++++++++=" << std::endl;
    delete array[0];
    delete array[1];
    // delete [] array;
    // delete array[1];
    
    // array[0]->makeSound();
    // for (int i = 0; i < 10; i++)
    //     array[i] = new Dog;
    // for (int i = 0; i < 10; i++)
    //     delete array[i];
    // delete [] array;
    // AnimalArray = new Animal*[20];
    // for (int i = 0; i < 20; i++)
    // {
    //     if (i % 2 == 0)
    //     {
    //         AnimalArray[i] = new Dog();
    //     }
    //     else
    //     {
    //         AnimalArray[i] = new Cat();
    //     }
    //     // std::cout << i << " alloc \n";
    //     // delete &AnimalArray[i]; 
    // }

    
    // delete  AnimalArray;
    // delete  &AnimalArray[0];
    // for (int i = 0; i < 20; i++)
    // {
    //     std::cout <<  " =========delete \n";
    //     delete  AnimalArray[i];
    //     std::cout <<  " ------------ delete \n";
    // }
    // delete &AnimalArray;
    // std::cout << "++++++++++++++++++++++++++++++++++++++++++=++++++++++++++++++++++++++++++++++++++++++=" << std::endl;
    system("leaks animal");
}