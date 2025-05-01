#include "lib.hpp"

#include <iostream>
#include <vector>

static std::vector<int> v { 1, 2, 3, 4, 5, 6, 67, 8, 8, 9, 0 };

void do_some_stuff()
{
    int a = { 4 };    
}

void print_message(std::string s)
{
#ifdef THIS_IS_LINUX
    std::cout << "Version: " << LIBRARY_VERSION_MAJOR << std::endl;
#else 
    std::cout << "Message: " << s << std::endl;
#endif
}

void send_message(std::string s)
{

}
