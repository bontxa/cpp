#include "sed.hpp"

int main(int argc, char **argv) {
    if (argc != 4) {
        std::cout << "Wrong number of arguments" << std::endl;
        return (1);
    }
    std::string line;
    std::string pre;
    std::string post = "";
    std::ifstream readFromFile;
    std::ofstream writeToFile;
    size_t pos = 0;
    readFromFile.open(argv[1]);
    if (readFromFile.is_open() == false) {
        std::cout << "cannot open file " << argv[1] << std::endl;
        return (1);
    }
    writeToFile.open("read.replace");
    while (getline(readFromFile, line)) {
        while (pos < line.length()) {
            size_t end = pos;
            while (end < line.length() && line[end] != ' ') {
                end++;
            }
            pre = line.substr(pos, end - pos);
            if (pre == argv[2])
                pre = argv[3];
            post += pre;
            post += ' ';
            pos = end + 1;
        }
        post += '\n';
        writeToFile << post;
        post = "";
        pos = 0;
    }
    readFromFile.close();
    writeToFile.close();
    return (0);
}