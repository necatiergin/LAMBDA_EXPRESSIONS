#include <array>
#include <iostream>

int main() 
{
    constexpr auto sum_array = [](const std::array<int, 5>& arr) constexpr {
        int sum = 0;
        for (std::size_t i{}; i < arr.size(); ++i) {
            sum += arr[i];
        }
        return sum;
        };

    constexpr std::array ar = { 1, 2, 3, 4, 5 };
    constexpr int sum = sum_array(ar); 

    std::cout << "dum = " << sum << '\n'; 
}
