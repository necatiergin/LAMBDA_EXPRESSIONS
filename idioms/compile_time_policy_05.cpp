template <auto Operation>
class Processor {
public:
    template <typename T>
    static constexpr auto process(T value)
    {
        return Operation(value);
    }
};

int main()
{
    using SquareProcessor = Processor <
        [](int x) { return x * x; }
    > ;

    using DoubleProcessor = Processor <
        [](int x) { return x * 2; }
    > ;

    static_assert(
        SquareProcessor::process(5) == 25
        );

    static_assert(
        DoubleProcessor::process(5) == 10
        );
}
