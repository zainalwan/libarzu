#include <iostream>
#include "Arzu.h"

int main(int argc, char* argv[]) {
    Zain::Arzu arzu(argc, &argv[0]);
    std::cout << "Argument '--two' is " << arzu.getValue("--two") << '\n';
    std::cout << "Index of argument '--one' is " << arzu.index("--one") << '\n';
    std::cout << "Index of argument '--six' is " << arzu.index("--six") << '\n';
    std::cout << "Argument '-t' exists: " << arzu.exists("-t") << '\n';
    std::cout << "Argument '-f' exists: " << arzu.exists("-f") << '\n';
    std::cout << "Argument '--five' is " << arzu.getValue("--five") << '\n';

    return 0;
}