#include <iostream>
#include <memory>
#include <utility>

template<typename... Ts>
auto foo(Ts... args)
{
    return [...xs = std::move(args)] {
        ((std::cout << *xs << '\n'), ...);
    };
}

int main()
{
    auto f = foo(
        std::make_unique<int>(10),
        std::make_unique<int>(20)
    );

    f();
}
