#ifndef ARGUMENT_H
#define ARGUMENT_H

namespace Zain {
    class Arzu {
    private:
        int argc;
        char** argv;

    public:
        Arzu(const int &argc, char** argv);
        int index(const char* key);
        bool exists(const char* key);
        const char* getValue(const char* key);
    };
}

#endif