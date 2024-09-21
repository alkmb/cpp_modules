# include "../includes/AAnimal.hpp"
# include "../includes/Dog.hpp"
# include "../includes/Cat.hpp"
# include "../includes/Animal.hpp"  // For testing the non-abstract class
# include "../includes/WrongCat.hpp"
# include "../includes/WrongAnimal.hpp"

int main()
{
    std::cout << "CONSTRUCTOR TEST" << std::endl;
    std::cout << "==================================" << std::endl;

    // Testing AAnimal
    std::cout << "Testing abstract class (AAnimal)" << std::endl << std::endl;
    const AAnimal* dog = new Dog();
    const AAnimal* cat = new Cat();

    std::cout << "Testing polymorphism with AAnimal pointers:" << std::endl << std::endl;
    dog->makeSound();  // Should output "Woof!"
    cat->makeSound();  // Should output "Meow!"
    std::cout << "==================================" << std::endl;

    // Testing copy behavior
    std::cout << "Testing deep copy behavior:" << std::endl<< std::endl;
    Dog originalDog;
    Dog copyDog = originalDog;  // Deep copy test
    std::cout << "Original Dog and Copy Dog created." << std::endl;

    std::cout << "==================================" << std::endl;

    // Test for WrongAnimal and WrongCat
    std::cout << "Testing WrongAnimal and WrongCat (no polymorphism)" << std::endl << std::endl;
    const WrongAnimal* wrongAnimal = new WrongAnimal();
    const WrongAnimal* wrongCat = new WrongCat();

    std::cout << "WrongAnimal makeSound(): ";
    wrongAnimal->makeSound();  // Will output "WrongAnimal sound!"
    std::cout << "WrongCat makeSound(): ";
    wrongCat->makeSound();     // Will output "Mew Mew!" (but still not polymorphic)
    std::cout << "==================================" << std::endl;

    // Destructor test for abstract class
    std::cout << "Testing Destructors" << std::endl << std::endl;
    delete dog;
    delete cat;
    delete wrongAnimal;
    delete wrongCat;

    return 0;
}
