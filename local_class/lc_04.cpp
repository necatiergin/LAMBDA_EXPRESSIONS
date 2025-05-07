#include <iostream>

auto create_local_object() 
{
    class Nec {
    public:
        void greet() const { std::cout << "Greetings!\n"; }
    };
    return Nec{};
}

int main() 
{
    auto obj = create_local_object();
    obj.greet(); 
}

