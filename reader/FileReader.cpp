#include "FileReader.h"

std::vector<std::string> FileReader::read(const std::string &path) {
    std::vector<std::string> list;
    std::ifstream my_file;
    my_file.open(path, std::ios::in);
    if (!my_file.is_open()) {
        std::cout << "No such file";
    } else {
        for (std::string line; getline(my_file, line);) {
            std::vector<std::string> splitted = splitBySpace(line);
            for (const std::string &character: splitted) {
                list.push_back(character);
            }
        }
    }
    my_file.close();
    return list;

}
