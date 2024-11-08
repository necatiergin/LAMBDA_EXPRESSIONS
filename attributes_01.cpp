int main() 
{
    //auto f1 = [](int x) [[nodiscard]] { return x * 5; };
    //error - nodiscard attribute applied to type
    auto f2 = [](int x) [[deprecated]] { return x * 5; };   // valid but not meaningful
    //attributes are generally useless with lambda expressions
}
