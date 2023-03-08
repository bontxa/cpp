#include "sed.hpp"

int main() {
    std::string filename;
    std::string s1;
    std::string s2;
    std::string line;
    std::string pre;
    std::string post = "";
    std::ifstream readFromFile;
    std::ofstream writeToFile;
    size_t pos = 0;
    std::cout << "Insert filename:" << std::endl;
    getline(std::cin, filename);
    readFromFile.open(filename.c_str());
    if (readFromFile.is_open() == false) {
        std::cout << "cannot open file " << filename << std::endl;
        return (1);
    }
    std::cout << "Insert string 1:" << std::endl;
    getline(std::cin, s1);
    std::cout << "Insert string 2:" << std::endl;
    getline(std::cin, s2);
    writeToFile.open("read.replace");
    while (getline(readFromFile, line)) {
        while (pos < line.length()) {
            size_t end = pos;
            while (end < line.length() && line[end] != ' ') {
                end++;
            }
            pre = line.substr(pos, end - pos);
            if (pre == s1)
                pre = s2;
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