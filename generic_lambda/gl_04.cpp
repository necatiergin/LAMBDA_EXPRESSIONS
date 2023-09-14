#include <iostream>

template <typename... Args>
void print(Args &&... args)
{
    std::initializer_list<int>{((std::cout << std::forward<Args>(args) << "\n"), 0)...};
}


int main()
{
    auto f = [](auto &&... param) {
        print(std::forward<decltype(param)>(param)...);
    };

    f(12, 3.4, 4.5f, "necati ergin");
}
