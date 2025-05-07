#include <iostream>

void foo() 
{
    class Nec {
    public:
        void execute() {
            auto lambda = []() {
                std::cout << "Hello from lambda inside local class!\n";
                };
            lambda();
        }
    };

    Nec obj;
    obj.execute();
}
