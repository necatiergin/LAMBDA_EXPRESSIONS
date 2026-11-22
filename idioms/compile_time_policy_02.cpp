
#include <type_traits>

template <auto F>
struct Nec {
    using type = decltype(F);

    static constexpr auto value = F;
};

int main()
{
    auto lambda = [](int x) {
        return x * x;
        };

    using T = Nec<lambda>;

    static_assert(
        std::is_same_v<
        typename T::type,
        decltype(lambda)
        >
        );

    static_assert(T::value(5) == 25);
}
