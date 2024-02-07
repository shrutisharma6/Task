#include "Logger.h"
#include <iostream>

Logger::Logger(std::string str) {
    v.push_back(str);
}

void Logger::displayLog() {
    for (const auto& val : v) {
        std::cout << val << std::endl;
    }
}
