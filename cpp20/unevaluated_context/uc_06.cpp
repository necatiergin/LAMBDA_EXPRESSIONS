#include <type_traits>

using F1 = decltype([](int x) {
    return x * 2;
});

using F2 = decltype([](int x) {
    return x * 2;
});

static_assert(!std::is_same_v<F1, F2>);
