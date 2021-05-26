#ifndef TESTS_READER_H
#define TESTS_READER_H

#include <bits/ios_base.h>
#include <vector>
#include <fstream>
#include <iostream>

class Reader {

public:

    virtual std::vector<std::string> read(const std::string &path) = 0;

    std::vector<std::string> splitBySpace(std::string str) {
        std::string word;
        std::vector<std::string> out;
        for (auto x : str) {
            if (x == ' ') {
                out.push_back(word);
                word = "";
            } else {
                word += x;
            }
        }
        out.push_back(word);
        return out;
    }
};


#endif //TESTS_READER_H
