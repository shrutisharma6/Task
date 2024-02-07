#include "Logger.h"
#include <iostream>
#include <fstream>

Logger::Logger(string str) {
    ofstream fout;
    fout.open("logger.txt", ios::app);
    time_t rawtime;
    time (&rawtime);
    fout<< str;
    fout<<ctime (&rawtime);
    fout.close();
}
