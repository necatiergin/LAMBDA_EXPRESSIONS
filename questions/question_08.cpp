// ekran çıktısı ne olur?

#include <iostream>

int main()
{
    int x = 4;
    auto y = [x = x + 1, &r = x]()
    {
        r += 2;
        return x * x;
    }(); 

    std::cout << "y = " << y << '\n';
    std::cout << "x = " << x << '\n';
}
