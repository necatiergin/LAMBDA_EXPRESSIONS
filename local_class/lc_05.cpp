#include <iostream>

void emulate_closure() 
{
    int val = 10;

    class ClosureLike {
    public:
        ClosureLike(int val) : captured(val) {}
        int operator()(int x) const { return x + captured; }
    private:
        int captured;
    };

    ClosureLike adder(val);
    std::cout << adder(5) << '\n';
}
