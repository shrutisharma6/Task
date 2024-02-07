#ifndef LOGGER_H
#define LOGGER_H

#include <string>
#include <vector>

class Logger {
private:
    std::vector<std::string> v;

public:
    Logger(std::string str);
    void displayLog(); 
};

#endif
