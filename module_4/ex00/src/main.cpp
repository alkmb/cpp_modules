
# include "../includes/Cat.hpp"
# include "../includes/Dog.hpp"
# include "../includes/Animal.hpp"
# include "../includes/WrongCat.hpp"
# include "../includes/WrongAnimal.hpp"

int main()
{
    std::cout << std::endl;
    std::cout << "Constructors test" << std::endl;
    std::cout << std::endl;

    const Animal* original = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();

    std::cout << "J Type: " << j->getType() << " " << std::endl;
    std::cout << "I Type: " << i->getType() << " " << std::endl;
    
    std::cout << std::endl;
    std::cout << "Sound test" << std::endl;
    std::cout << std::endl;

    i->makeSound();
    j->makeSound();
    original->makeSound();

    std::cout << std::endl;
    std::cout << "Destructor test" << std::endl;
    std::cout << std::endl;

    delete  original;
    delete  j;
    delete  i;

    std::cout << std::endl;
    std::cout << "Wrong test" << std::endl;
    std::cout << std::endl;

    const WrongAnimal *wrong = new WrongAnimal();
    const WrongAnimal *wrongCat = new WrongCat();

    std::cout << "Wrong Type: " << wrong->getType() << " " << std::endl;
    std::cout << "WrongCat Type: " << wrongCat->getType() << " " << std::endl;
    
    std::cout << std::endl;
    std::cout << "Sound test" << std::endl;
    std::cout << std::endl;
    
    wrong->makeSound();
    wrongCat->makeSound();

    std::cout << std::endl;
    std::cout << "Destructor test" << std::endl;
    std::cout << std::endl;
    
    delete  wrong;
    delete  wrongCat;
}