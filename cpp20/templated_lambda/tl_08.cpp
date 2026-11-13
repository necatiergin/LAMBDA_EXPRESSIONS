#include <iostream>

int main() {
    auto multiply = []<int Factor>(int x) {
        return x * Factor;
    };

    std::cout << multiply<2>(10) << '\n';  // 20
    std::cout << multiply<5>(4) << '\n';   // 20
}
