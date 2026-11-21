#include <array>

int main()
{
    constexpr auto squares = [] {
        std::array<int, 10> arr{};

        for (int i = 0; i < 10; ++i)
            arr[i] = i * i;

        return arr;
        }();

    static_assert(squares[5] == 25);
    static_assert(squares[9] == 81);
}
