#include <iostream>

template<class F, class... Args>
auto delay_invoke(F f, Args... args) 
{
    return[f, args...]() -> decltype(auto) {
        return std::invoke(f, args...);
    };
}

int foo(int x, int y, int z)
{
    std::cout << "foo cagrildi\n";
    std::cout << x << y << z << "\n";
    return x + y + z;
}

int main()
{
    auto f = delay_invoke(foo, 1, 2, 3);

    auto n = f();
    std::cout << "n = " << n << '\n';
}
