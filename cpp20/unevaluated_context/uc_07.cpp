#include <utility>

template<typename T,
         typename Compare = decltype(
             [](const T& a, const T& b) {
                 return a < b;
             }
         )>
class SortedStorage {
    Compare comp;

public:
    bool less(const T& x, const T& y) const
    {
        return comp(x, y);
    }
};

int main()
{
    SortedStorage<int> s;

    bool result = s.less(10, 20);
}
