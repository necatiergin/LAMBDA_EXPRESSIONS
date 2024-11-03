#include <set>
#include <string>
#include <iostream>

template <typename C>
void print(const C& con)
{
    for (const auto& elem : con)
        std::cout << elem << "  ";

    std::cout << '\n';
}

int main()
{
    using namespace std;

    set<string> names = { "Ayse", "Zehra", "Murat", "Bilal", "Sumeyye", "Nur", "Cemil" };
    print(names);

    using gset = set <string, decltype([](const auto& l, const auto& r) { return l > r; }) > ;
    gset gnames = { "Ayse", "Zehra", "Murat", "Bilal", "Sumeyye", "Nur", "Cemil" };
    print(gnames);

    using lenset = set < string, decltype([](const auto& l, const auto& r) { return l.size() < r.size(); }) > ;
    lenset namelens = { "Ayse", "Zehra", "Murat", "Bilal", "Sumeyye", "Nur", "Cemil" };
    print(namelens);

    set<int> iset = { 9, -3, 12, -5, 40, -8, 77, -75 };
    print(iset);

    using abs_set = set<int, decltype([](const auto& l, const auto& r) { return  abs(l) < abs(r); }) > ;
    abs_set abs_vals = { 9, -3, 12, -5, 40, -8, 77, -75 };
    print(abs_vals);
}
