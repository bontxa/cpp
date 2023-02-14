#include "phonebook.hpp"

int main() {
     PhoneBook phonebook;
    while (1)
    {
        std::string value;
        std::cout << "\tINSERT VALUE: (ADD) (SEARCH) (EXIT)" << std::endl;
        std::cout << "\t";
        getline(std::cin, value);
        if (value == "ADD") {
            phonebook.ft_do_contact();
        }
        else if (value == "SEARCH") {
            phonebook.ft_display_contacts();
        }
        else if (value == "EXIT") {
           std::exit(0);
        }
    }
}
