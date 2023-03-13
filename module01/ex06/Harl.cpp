#include "Harl.hpp"

Harl::Harl()
{
}

Harl::~Harl()
{
}

void Harl::debug(void)
{
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger.\nI really do!\n" << std::endl;
}

void Harl::info(void)
{
    std::cout << "I cannot believe adding extra bacon costs more money.\nYou didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!\n" << std::endl;
}

void Harl::warning(void)
{
    std::cout << "I think I deserve to have some extra bacon for free.\nI’ve been coming for years whereas you started working here since last month.\n" << std::endl;
}

void Harl::error(void)
{
    std::cout << "This is unacceptable! I want to speak to the manager now.\n" << std::endl;
}

void Harl::complain(std::string level)
{
    std::string complains[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    func functs[4] = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
    int i = 0;
    while (i < 4) {
        if (complains[i] == level)
            break;
        i++;
    }
    switch (i)
    {
    case 0:
        while (i < 4) {
            std::cout << "[ " << complains[i] << " ]"<< std::endl;
            (this->*functs[i++])();
        }
        break;
    case 1:
        while (i < 4) {
            std::cout << "[ " << complains[i] << " ]"<< std::endl;
            (this->*functs[i++])();
        }
        break;
    case 2:
        while (i < 4) {
            std::cout << "[ " << complains[i] << " ]"<< std::endl;
            (this->*functs[i++])();
        }
        break;
    case 3:
        while (i < 4) {
            std::cout << "[ " << complains[i] << " ]"<< std::endl;
            (this->*functs[i++])();
        }
        break; 
    default:
        std::cout << "[ " << "Probably complaining about insignificant problems" << " ]"<< std::endl;
        break;
    }
}