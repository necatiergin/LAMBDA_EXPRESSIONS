#include <cassert>
#include <memory>

struct Data {
    int id;
    std::unique_ptr<int> ptr;
};

int main()
{
    Data data{ 42, std::make_unique<int>(100) };

    auto& [id, ptr] = data;

    auto f = [id] {
        return id;
        };

    assert(f() == 42);
}
