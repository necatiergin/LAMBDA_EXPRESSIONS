
#include <type_traits>

template <auto F>
struct Policy {};

using P1 = Policy<[](int x) { return x * x; }>;
using P2 = Policy<[](int x) { return x * x; }>;

static_assert(!std::is_same_v<P1, P2>);
