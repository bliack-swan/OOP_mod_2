#include <iostream>
#include "reader/Reader.h"
#include "reader/FileReader.h"

int main() {
    Reader *reader = new FileReader();
//    std::vector<std::string> chars = reader->read("YourPath");
//    for (std::string s: chars) {
//        std::cout << s << std::endl;
//    }
    return 0;
}
