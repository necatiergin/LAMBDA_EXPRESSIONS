#include <iostream>

void foo()
{
    const double unit_price = 120.0;
    const int quantity = 15;
    const bool premium_customer = true;

    double total = unit_price * quantity;

    if (quantity >= 10)
        total *= 0.90;

    if (premium_customer)
        total *= 0.95;

    std::cout << total << '\n';
}


void bar()
{
    const double unit_price = 120.0;
    const int quantity = 15;
    const bool premium_customer = true;

    const double total = [&] {
        double result = unit_price * quantity;

        if (quantity >= 10)
            result *= 0.90;

        if (premium_customer)
            result *= 0.95;

        return result;
        }();

    std::cout << total << '\n';
}

