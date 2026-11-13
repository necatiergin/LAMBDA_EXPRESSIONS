#include <iostream>

template<typename T, typename Operation>
class Processor {
    Operation m_op;

public:
    T process(T value) const
    {
        return m_op(value);
    }
};

int main()
{
    auto square = [](int x) {
        return x * x;
        };

    Processor<int, decltype(square)> p;

    std::cout << p.process(30) << '\n';
}
