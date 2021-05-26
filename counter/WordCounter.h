#ifndef TESTS_WORDCOUNTER_H
#define TESTS_WORDCOUNTER_H

#include <iostream>
#include <map>
#include <vector>
#include <string>
#include <regex>

class WordCounter {

public:
    std::map<std::string, int> getWordToFrequencyMap(std::vector<std::string> words) {
        std::map<std::string, int> out;
        std::string pattern = "[A-Z\\-]";
        const std::regex e(pattern);

        for (std::string s: words) {
            if (regex_match(s, e)) {
                out[s] += 1;
            }
        }
        return out;
    }

};


#endif //TESTS_WORDCOUNTER_H
