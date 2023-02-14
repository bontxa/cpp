#ifndef PHONEBOOK_H
#define PHONEBOOK_H
#include <iostream>
#include <iomanip>
#include <cctype>

class Contact {

    std::string name;
    std::string lastname;
    std::string nickname;
    std::string phonenumber;
    std::string darkestsecret;

    public:
    Contact() {
    };
    Contact(std::string nname, std::string llastname, std::string nnickname, std::string pphonenumber, std::string ddarkestsecret) {
        name = nname;
        lastname = llastname;
        nickname = nnickname;
        phonenumber = pphonenumber;
        darkestsecret = ddarkestsecret;
    }
    std::string getName();
    std::string getLast();
    std::string getNick();
    std::string getPhone();
    std::string getSecret();
    ~Contact() {};
};

class PhoneBook {
    Contact contacts[8];
    int i;

    public:
    PhoneBook() {
        i = 0;
    }
    void ft_do_contact();
    void ft_add_contact(Contact contact);
    void ft_display_contacts();
    ~PhoneBook() {};
};

#endif
