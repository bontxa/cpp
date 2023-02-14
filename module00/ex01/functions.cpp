#include "phonebook.hpp"

bool is_numeric(const std::string &s) {
    for (long unsigned int i = 0; i < s.length(); i++) {
        if (!isdigit(s[i])) {
            return false;
        }
    }
    return true;
}

std::string Contact::getName() {
    return name;
}

std::string Contact::getLast() {
    return lastname;
}

std::string Contact::getNick() {
    return nickname;
}

std::string Contact::getPhone() {
    return phonenumber;
}

std::string Contact::getSecret() {
    return darkestsecret;
}


void PhoneBook::ft_add_contact(Contact contact) {
     if (i < 8) {
        contacts[i] = contact;
        i++;
    }
    else
        i = 0;
}

void PhoneBook::ft_do_contact() {
    std::string name;
    std::string lastname;
    std::string nickname;
    std::string darkestsecret;
    std::string tel;
    Contact contact;

    std::cout << "\tINSERT NAME" << std::endl;
    std::cout << "\t";
    getline(std::cin, name);
    if (name == "") {
        std::cout << "\tNOT A VALID OPTION, RESTART" << std::endl;
        ft_do_contact();
        return ;
    }
    std::cout << "\tINSERT LAST NAME" << std::endl;
    std::cout << "\t";
    getline(std::cin, lastname);
    if (lastname == "") {
        std::cout << "\tNOT A VALID OPTION, RESTART" << std::endl;
        ft_do_contact();
        return ;
    }
    std::cout << "\tINSERT NICKNAME" << std::endl;
    std::cout << "\t";
    getline(std::cin, nickname);
    if (nickname == "") {
        std::cout << "\tNOT A VALID OPTION, RESTART" << std::endl;
        ft_do_contact();
        return ;
    }
    std::cout << "\tINSERT PHONE NUMBER" << std::endl;
    std::cout << "\t";
    getline(std::cin, tel);
    if (tel == "" || is_numeric(tel) == false) {
        std::cout << "\tNOT A VALID OPTION, RESTART" << std::endl;
        ft_do_contact();
        return ;
    }
    std::cout << "\tINSERT YOUR DARKEST SECRET" << std::endl;
    std::cout << "\t";
    getline(std::cin, darkestsecret);
    if (darkestsecret == "") {
        std::cout << "\tNOT A VALID OPTION, RESTART" << std::endl;
        ft_do_contact();
        return ;
    }
    contact = Contact(name, lastname, nickname, tel, darkestsecret);
    ft_add_contact(contact);
}

void ft_display_list(std::string tmp, Contact *contacts, int index, int i) {
    std::cout << "\tENTER INDEX" << std::endl;
    std::cout << "\t";
    getline(std::cin, tmp);
    if (is_numeric(tmp) == false) {
        std::cout << "\tTHIS INDEX NOT EXIST" << std::endl;
        ft_display_list(tmp, contacts, index, i);
    }
    else {
        index = std::stoi(tmp);
        if (index >= i) {
            std::cout << "\tTHIS INDEX NOT EXIST" << std::endl;
             ft_display_list(tmp, contacts, index, i);
        }
        else {
            std::cout << "\t" << contacts[index].getName() << std::endl;
            std::cout << "\t" << contacts[index].getLast() << std::endl;
            std::cout << "\t" << contacts[index].getNick() << std::endl;
            std::cout << "\t" << contacts[index].getPhone() << std::endl;
            std::cout << "\t" << contacts[index].getSecret() << std::endl;
        }
    }
}

void PhoneBook::ft_display_contacts() {
    int index;
    std::string tmp;
    for (index = 0; index < i; index++) {
        std::string tmp;
        std::string tmp2;
        std::string tmp3;
        tmp = contacts[index].getName().substr(0, 10);
        tmp2 = contacts[index].getLast().substr(0, 10);
        tmp3 = contacts[index].getNick().substr(0, 10);
        if (contacts[index].getName().length() > 10) {
            tmp[9] = '.';
        }
        if (contacts[index].getLast().length() > 10) {
            tmp2[9] = '.';
        }
        if (contacts[index].getNick().length() > 10) {
            tmp3[9] = '.';
        }

        std::cout << "\t" << std::right << std::setw(10) << index << "|" << std::right << std::setw(10) << tmp << "|" << std::right << std::setw(10) << tmp2 << "|" << std::right << std::setw(10) << tmp3 << std::endl;
    }
    ft_display_list(tmp, contacts, index, i);
}
