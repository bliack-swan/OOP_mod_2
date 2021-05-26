#ifndef TESTS_WORDCOUNTER_H
#define TESTS_WORDCOUNTER_H

#include <iostream>
#include <map>
#include <vector>
#include <string>

class WordCounter {

public:
    std::map<std::string, int> getWordToFrequencyMap(std::vector<std::string> words) {
        std::map<std::string, int> out;
        for (std::string s: words) {
            out[s] += 1;
        }
        return out;
    }

};


#endif //TESTS_WORDCOUNTER_H
