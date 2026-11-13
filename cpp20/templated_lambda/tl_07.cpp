#include <utility>

auto makePair = []<typename T, typename U>(T&& t, U&& u) {
    return std::pair<T, U>{std::forward<T>(t), std::forward<U>(u)};
};

auto p = makePair(1, 3.14);  // std::pair<int, double>
