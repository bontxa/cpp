#include "Harl.hpp"

int main(int argc, char **argv) {
    if (argc != 2) {
        std::cout << "Wrong number of arguments" << std::endl;
        return (1);
    }
    Harl    test;
    test.complain(argv[1]);
}