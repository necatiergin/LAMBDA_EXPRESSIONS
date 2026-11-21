#include <thread>
#include <iostream>

void task(int x)
{
    std::cout << "int: " << x << '\n';
}

void task(double x)
{
    std::cout << "double: " << x << '\n';
}

int main()
{
    // std::thread t1(task, 42); // error

    std::thread t2([] {
        task(42);
        });

    t2.join();
}
