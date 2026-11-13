#include <iostream>
#include <type_traits>

int main() 
{
    auto process = []<typename T>(T x) {
        if constexpr (std::is_integral_v<T>) {
            std::cout << "Integral: " << x << '\n';
        }
        else if constexpr (std::is_floating_point_v<T>) {
            std::cout << "Floating point: " << x << '\n';
        }
        else {
            std::cout << "Other type\n";
        }
    };

    process(10);     // Integral
    process(3.14);   // Floating point
    process("abc");  // Other type
}
