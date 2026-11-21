#include <iostream>
#include <thread>
#include <vector>

void foo()
{
    static auto _ = [] {
        std::cout << "Initialization\n";
        return 0;
        }();
}

int main()
{
    std::vector<std::thread> threads;

    for (int i = 0; i < 10; ++i) {
        threads.emplace_back(foo);
    }

    for (auto& t : threads) {
        t.join();
    }
}
