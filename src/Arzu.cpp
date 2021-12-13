#include "Arzu.h"

#include <string>

Zain::Arzu::Arzu(const int &argc, char** argv) {
    this->argc = argc;
    this->argv = argv;
}

int Zain::Arzu::index(const char* argv) {
    std::string temporary_argv;
    for(int i = 1; i < argc; i++) {
        temporary_argv =  *(this->argv + i);
        if(temporary_argv == argv) {
            return i;
        }
    }
    return -1;
}

bool Zain::Arzu::exists(const char* argv) {
    std::string temporary_argv;
    for(int i = 1; i < argc; i++) {
        temporary_argv =  *(this->argv + i);
        if(temporary_argv == argv) {
            return 1;
        }
    }
    return 0;
}

const char* Zain::Arzu::getValue(const char* key) {
    int key_index = index(key);
    if(key_index != -1 && key_index + 1 <= argc) {
        return *(argv + 1 + key_index);
    }
    return "";
}