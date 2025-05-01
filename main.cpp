#include <iostream>

#include <thread>
#include <chrono>
#include <vector>

#include "lib.hpp"

int main()
{
#ifdef THIS_IS_LINUX
  std::cout << "Program has been started on Linux" << std::endl;
#else
  std::cout << "Program has been started on Windows" << std::endl;
#endif

  do_some_stuff();
  print_message("Hello world");
  send_message("Hi!");

  return 1;
}
