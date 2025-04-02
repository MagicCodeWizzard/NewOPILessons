#include <iostream>

#include <thread>
#include <chrono>
#include <vector>

void thread_func() {
  int counter = 0;
  
  _sleep(1000);
}

int main()
{
  std::cout << "Program has been started" << std::endl;

  std::thread thread(thread_func);
  thread.join();

  return 0;
}
