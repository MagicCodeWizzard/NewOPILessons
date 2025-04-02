#include <iostream>

#include <thread>
#include <chrono>

using std::chrono_literals;

void thread_func() {
  int counter = 0;
  while(counter < 10) {
    counter++;

    std::cout << "Message from thread" <<
              std::this_thread::get_id() <<
              "Current counter is: " << counter << std::endl;

    std::this_thread::sleep_for(10s);
  }
}

int main()
{
  std::cout << "Program has been started" << std::endl;

  std::thread thread(thread_func);
  thread.join();

  return 0;
}
