
#include <iostream>
#include <string>
#include <type_traits>

template <typename T>
void process(const T& value)
{
    const auto result = [&] {
        if constexpr (std::is_integral_v<T>) {
            return value * 2;
        }
        else if constexpr (std::is_floating_point_v<T>) {
            return value / 2;
        }
        else {
            return std::string{ "unsupported type" };
        }
        }();

    std::cout << result << '\n';
}

int main()
{
    process(10);
    process(3.5);
    process("hello");
}
