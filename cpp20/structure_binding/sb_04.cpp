#include <utility>

int main()
{
    auto [x, y] = std::pair{ 10, 20 };
    auto f = [=] {return x + y;};
    // ...
}
