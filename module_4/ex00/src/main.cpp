# include "../includes/Cat.hpp"
# include "../includes/Dog.hpp"
# include "../includes/Animal.hpp"
# include "../includes/WrongCat.hpp"
# include "../includes/WrongAnimal.hpp"

int main()
{
    std::cout << "CONSTRUCTOR TEST" << std::endl;
    std::cout << std::endl;
    std::cout << "==================================" << std::endl;

// SET OBJECTS

    const Animal* original = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    std::cout << "==================================" << std::endl;

// GET THE TYPES

    std::cout << "J Type: " << j->getType() << " " << std::endl;
    std::cout << "I Type: " << i->getType() << " " << std::endl;
    std::cout << "==================================" << std::endl;

// MAKE SOUNDS

    std::cout << "SOUNDS TEST" << std::endl;
    std::cout << std::endl;
    std::cout << "==================================" << std::endl;

    i->makeSound();
    j->makeSound();
    original->makeSound();
    std::cout << "==================================" << std::endl;

// DESTRUCTOR TEST

    std::cout << "DESTRUCTOR TEST" << std::endl;
    std::cout << std::endl;
    std::cout << "==================================" << std::endl;

    delete  original;
    delete  j;
    delete  i;
    std::cout << "==================================" << std::endl;

// WRONG ANIMAL TESTING

    std::cout << "WRONG ANIMAL TEST" << std::endl;
    std::cout << std::endl;
    std::cout << "==================================" << std::endl;

// SET OBJECTS

    const WrongAnimal *wrong = new WrongAnimal();
    const WrongAnimal *wrongCat = new WrongCat();
    std::cout << "==================================" << std::endl;

// GET TYPES

    std::cout << "WrongAnimal Type: " << wrong->getType() << " " << std::endl;
    std::cout << "WrongCat Type: " << wrongCat->getType() << " " << std::endl;
    std::cout << "==================================" << std::endl;

// MAKE SOUNDS

    std::cout << "WRONG ANIMAL SOUNDS" << std::endl;
    std::cout << std::endl;
    std::cout << "==================================" << std::endl;
    
    wrong->makeSound();
    wrongCat->makeSound();
    std::cout << "==================================" << std::endl;

// DESTRUCTOR TEST

    std::cout << "WRONG ANIMAL DESTRUCTOR TEST" << std::endl;
    std::cout << std::endl;
    std::cout << "==================================" << std::endl;

    delete  wrong;
    delete  wrongCat;
    std::cout << "==================================" << std::endl;

}