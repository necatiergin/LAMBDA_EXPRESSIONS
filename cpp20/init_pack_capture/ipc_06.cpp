#include <iostream>
#include <memory>
#include <string>

template<typename... Ts>
auto foo(Ts&... args)
{
    return [...xs = std::move(args)] {
        ((std::cout << *xs << '\n'), ...);
        };
}

int main()
{
    auto up1 = std::make_unique<std::string>("ali");
    auto up2 = std::make_unique<std::string>("ayse");

    auto f = foo(up1, up2);

    if (!up1 && !up2)
        std::cout << "bopth are empty\n";

    f();
}
