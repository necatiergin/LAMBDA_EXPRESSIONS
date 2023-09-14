#include <tuple>

//before C++20

template <class... Args>
auto delay_invoke_foo(Args... args) {
    return[tup = std::make_tuple(std::move(args)...)]() -> decltype(auto) {
        return std::apply([](auto const&... args) -> decltype(auto) {
            return foo(args...);
            }, tup);
    };
}

//since C++20
#include <functional>
#include <utility>

template <class... Args>
auto delay_invoke_foo(Args... args) {
    return[...args = std::move(args)]() -> decltype(auto) {
        return foo(args...);
    };
}

