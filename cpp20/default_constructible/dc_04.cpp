#include <map>

struct Product {
    int id;
    double price;
};

int main()
{
    auto cmp = [](const Product& a, const Product& b) {
        return a.price < b.price;
        };

    std::map<Product, int, decltype(cmp)> inventory(cmp);

    inventory.emplace(Product{ 1, 120.0 }, 5);
    inventory.emplace(Product{ 2, 80.0 }, 10);
}
