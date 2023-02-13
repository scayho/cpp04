/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abelahce <abelahce@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/08 15:21:40 by abelahce          #+#    #+#             */
/*   Updated: 2023/02/12 21:04:57 by abelahce         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Dog.hpp"

// pointer of animal gets only his size from the dog class thats why it do not knews the functions of the derived class

int main(void)
{
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    std::cout << sizeof(Animal) << std::endl;
    std::cout << sizeof(Cat) << std::endl;
    std::cout << sizeof(Dog) << std::endl;
    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    i->makeSound(); //will output the cat sound!
    // i->jo(); //will output the cat sound!
    j->makeSound();
    meta->makeSound();
    // std::cout << "-------------------------------" << std::endl;
    
    // const WrongAnimal* beta = new WrongAnimal();
    // const WrongAnimal* d = new WrongCat();
    // std::cout << d->getType() << " " << std::endl;
    // d->makeSound();
    // beta->makeSound();
    
    // // std::cout << sizeof(meta) << " | " << sizeof(i) << " | " << sizeof(ss) << " | " << std::endl;
    // // std::cout << sizeof(meta) << " | " << std::endl;
    // const Cat ss;
    // const Animal dd;
    // std::cout << sizeof(ss) << " | " << std::endl;
    // std::cout << sizeof(dd) << " | " << std::endl;
    // std::cout << sizeof(i) << " | " << std::endl;
    // std::cout << sizeof(Cat) << " | " << std::endl;
    // std::cout << sizeof(Animal) << " | " << std::endl;
    // // std::string wo;
    // std::cout << sizeof(wo) << " | " << std::endl;
    // std::cout << sizeof(std::string) << " | " << std::endl;
    // Animal go;
    // Animal so;

    // std::cout << go.getType() << std::endl;
    // go.settype("daisy");
    // go.makeSound();
    // std::cout << go.getType() << std::endl;
    // so = go;

    
    // Cat ll;
    // Cat pp;
    
    // std::cout << ll.getType() << std::endl;
    // ll.makeSound();
    // ll.settype("yasrasha");
    // std::cout << ll.getType() << std::endl;
    // pp = ll;
    
    // std::cout << "-------------------------------" << std::endl;
    
    // Dog er;
    // Dog sw;
    
    // std::cout << er.getType() << std::endl;
    // er.makeSound();
    // er.settype("yama");
    // std::cout << er.getType() << std::endl;
    // sw = er;
    
}