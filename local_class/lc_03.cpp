#include <iostream>

template <typename T>
void foo(T x) 
{
    x.hello();
}

void func() 
{
    class Nec {
    public:
        void hello() const 
        {
            std::cout << "Hello from Nec class\n";
        }
    };

    Nec mynec;
    foo(mynec); // valid since C++11
}
