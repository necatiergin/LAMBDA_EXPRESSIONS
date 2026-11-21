#include <algorithm>
#include <vector>
#include <iostream>

int calculate(int x, int factor)
{
    return x * factor;
}

double calculate(double x, double factor)
{
    return x * factor;
}

int main()
{
    std::vector<int> src{ 1, 2, 3, 4, 5 };
    std::vector<int> dest(src.size());

    int factor = 10;

    std::transform(
        src.begin(),
        src.end(),
        dest.begin(),
        [factor](int x) {
            return calculate(x, factor);
        });

    for (int x : dest)
        std::cout << x << ' ';
}
