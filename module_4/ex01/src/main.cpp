# include "../includes/Cat.hpp"
# include "../includes/Dog.hpp"
# include "../includes/Animal.hpp"
# include "../includes/WrongCat.hpp"
# include "../includes/WrongAnimal.hpp"
# include "../includes/Brain.hpp"

int main(void)
{
    std::cout << "\nCreating a Dog and a Cat...\n" << std::endl;
    const Animal* j = new Dog();
    const Animal* i = new Cat();

    std::cout << "\nDeleting the Dog and the Cat...\n" << std::endl;
    delete j;
    delete i;

    std::cout << "\nCreating a basic Dog...\n" << std::endl;
    Dog basic;
    {
        std::cout << "\nCreating a temporary Dog by copying the basic Dog...\n" << std::endl;
        Dog tmp = basic;
        std::cout << "\nTemporary Dog goes out of scope...\n" << std::endl;
    }

    std::cout << "\nCreating an array of Animals (2 Dogs and 2 Cats)...\n" << std::endl;
    const Animal* animals[4] = { new Dog(), new Dog(), new Cat(), new Cat() };
    std::cout << "\nDeleting the array of Animals...\n" << std::endl;
    for (int i = 0; i < 4; i++) {
        delete animals[i];
    }

    std::cout << "\nEnd of main function.\n" << std::endl;
    return 0;
}