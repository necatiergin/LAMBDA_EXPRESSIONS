#include <iostream>
#include <concepts>

int main() 
{
    auto double_if_integral = []<std::integral T>(T val) {
        return val * 2;
    };

    std::cout << double_if_integral(10) << '\n'; // 20
    // std::cout << double_if_integral(3.14);   //error
}
