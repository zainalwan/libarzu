#include "Arzu.h"

#include <string>

Zain::Arzu::Arzu(const int &argc, char** argv) {
    this->argc = argc;
    this->argv = argv;
}

int Zain::Arzu::index(const char* key) {
    std::string temporary_argv;
    for(int i = 1; i < argc; i++) {
        temporary_argv =  *(argv + i);
        if(temporary_argv == key) {
            return i;
        }
    }
    return -1;
}

bool Zain::Arzu::exists(const char* key) {
    std::string temporary_argv;
    for(int i = 1; i < argc; i++) {
        temporary_argv =  *(argv + i);
        if(temporary_argv == key) {
            return 1;
        }
    }
    return 0;
}

const char* Zain::Arzu::getValue(const char* key) {
    int key_index = index(key);
    if(key_index != -1) {
        return *(argv + 1 + key_index);
    }
    return "";
}