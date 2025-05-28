#include "utils.hpp"

#include <iostream>

int main(int argc, char* argv[])
{
    std::cout << loadConfiration("hello.txt") << std::endl;
}
