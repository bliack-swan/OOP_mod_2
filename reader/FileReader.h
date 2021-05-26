#ifndef TESTS_FILEREADER_H
#define TESTS_FILEREADER_H

#include "Reader.h"

class FileReader : public Reader{

public:

    std::vector<std::string> read(const std::string &path) override;

};


#endif //TESTS_FILEREADER_H
