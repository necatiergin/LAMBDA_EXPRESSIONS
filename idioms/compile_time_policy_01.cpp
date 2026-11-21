template <auto Predicate>
bool check(int x)
{
    return Predicate(x);
}

int main()
{
    bool result = check<[](int x) {
        return x > 0;
    }>(42);
}
