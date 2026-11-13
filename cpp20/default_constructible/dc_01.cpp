#include <type_traits>

int main()
{
    auto lambda = [](int x) { return x * x; };

    using F = decltype(lambda);

    static_assert(std::is_default_constructible_v<F>);
    static_assert(std::is_copy_constructible_v<F>);
    static_assert(std::is_move_constructible_v<F>);
    static_assert(std::is_copy_assignable_v<F>);
    static_assert(std::is_move_assignable_v<F>);

    F f1;
    F f2{};

    f1 = f2;
    f1 = std::move(f2);
}
