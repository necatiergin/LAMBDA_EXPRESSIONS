#include <memory>
#include <utility>

template<typename... Ts>
auto foo(Ts... args)
{
    return [args...] {
        // ...
        };
}

int main()
{
    auto f = foo(
        std::make_unique<int>(10),
        std::make_unique<int>(20)
    );     //error
}
