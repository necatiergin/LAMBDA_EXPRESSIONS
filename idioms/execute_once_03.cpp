#include <iostream>
#include <stdexcept>

void foo()
{
    static auto _ = [] {
        static int count = 0;

        ++count;

        std::cout << "Attempt: " << count << '\n';

        if (count < 3)
            throw std::runtime_error{ "Failed" };

        return 0;
        }();
}

int main()
{
    for (int i = 0; i < 5; ++i) {
        try {
            foo();
        }
        catch (const std::exception&) {
            std::cout << "Exception caught\n";
        }
    }
}
