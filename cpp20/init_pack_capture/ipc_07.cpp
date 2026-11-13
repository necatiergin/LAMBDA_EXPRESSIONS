#include <iostream>

template<typename... Ts>
auto foo(Ts... args)
{
    return [args...] {
        ((std::cout << args << '\n'), ...);
        };
}

int main()
{
    auto f = foo(10, 2.5, "hello");
    f();
}

