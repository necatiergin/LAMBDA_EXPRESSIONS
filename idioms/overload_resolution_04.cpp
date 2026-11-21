#include <algorithm>
#include <vector>
#include <iostream>

template <typename T>
T square(T x)
{
    return x * x;
}

int main()
{
    std::vector<int> src{ 1, 2, 3, 4 };
    std::vector<int> dest(src.size());

    // error:
    // std::transform(src.begin(), src.end(),
    //                dest.begin(), square);

    std::transform(
        src.begin(),
        src.end(),
        dest.begin(),
        [](int x) {
            return square(x);
        });

    for (int x : dest)
        std::cout << x << ' ';
}
