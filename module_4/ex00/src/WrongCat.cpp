
# include "../includes/WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal("WrongCat")
{
    std::cout << "WrongCat constructor called and assigned type" << std::endl;
}

WrongCat::~WrongCat()
{
    std::cout << "WrongCat has been killed" << std::endl;
}