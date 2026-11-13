
#include <iostream>
#include <memory>
#include <tuple>
#include <utility>

template<typename... Ts>
auto foo(Ts... args)
{
    return [values = std::make_tuple(std::move(args)...)] {
        std::apply([](const auto&... xs) {
            ((std::cout << *xs << '\n'), ...);
        }, values);
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
