#include <iostream>
#include <string>
#include <utility>

template<typename... Ts>
auto make_printer(Ts&&... args)
{
    return [
        ...strs = std::string(std::forward<Ts>(args))
    ] {
        ((std::cout << strs << '\n'), ...);
        };
}

int main()
{
    auto printer = make_printer(
        "hello",
        "world",
        "C++20"
    );

    printer();
}
