#include <iostream>

#include <thread>

void thread_func() {
  int counter = 0;
  while(counter < 10) {
    counter++;

    std::this_thread::sleep_for(1000);
  }
}

int main()
{
  std::cout << "Program has been started" << std::endl;

  std::thread thread(thread_func);
  thread.join();

  return 0;
}
