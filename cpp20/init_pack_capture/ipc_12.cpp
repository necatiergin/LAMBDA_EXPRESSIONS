#include <functional>
#include <memory>
#include <utility>
#include <iostream>

template<typename F, typename... Args>
auto defer(F&& func, Args&&... args)
{
    return [
        f = std::forward<F>(func),
        ...xs = std::forward<Args>(args)
    ]() mutable -> decltype(auto) {
        return std::invoke(
            f,
            std::move(xs)...
        );
        };
}

void print_value(std::unique_ptr<int> ptr)
{
    std::cout << *ptr << '\n';
}

int main()
{
    auto task = defer(
        print_value,
        std::make_unique<int>(42)
    );

    // Daha sonra:
    task();
}
