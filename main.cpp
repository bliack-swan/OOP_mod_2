#include <iostream>
#include "reader/Reader.h"
#include "reader/FileReader.h"
#include "counter/WordCounter.h"

int main() {
    Reader *reader = new FileReader();
    std::vector<std::string> chars = reader->read("C:\\Users\\владислав\\CLionProjects\\OOP_mod_2\\testFile.txt");
    WordCounter wordCounter;
    std::map<std::string, int> m = wordCounter.getWordToFrequencyMap(chars);
    auto it = m.begin();
    while(it != m.end()){
        std::cout<<it->first<<" :: "<<it->second<<std::endl;
        it++;
    }
    return 0;
}
