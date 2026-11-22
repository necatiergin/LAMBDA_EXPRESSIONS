
#include <type_traits>

template <auto F>
struct Policy {
    static constexpr auto execute(int x)
    {
        return F(x);
    }
};

int main()
{
    constexpr auto square = [](int x) {
        return x * x;
        };

    using P1 = Policy<square>;
    using P2 = Policy<square>;

    static_assert(std::is_same_v<P1, P2>);
    static_assert(P1::execute(10) == 100);
}
