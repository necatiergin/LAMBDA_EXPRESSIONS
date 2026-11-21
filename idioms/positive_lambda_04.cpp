#include <iostream>

template <typename R, typename... Args>
void register_callback(R(*fp)(Args...))
{
    std::cout << "callback registered\n";
}

int main()
{
    register_callback(+[](int x) {
        return x * x;
        });

    register_callback(
        static_cast<int (*)(int)>(
            [](int x) { return x * x; }
            )
    );
}
