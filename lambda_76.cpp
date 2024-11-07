//cppinsights.io
// 
//int main()
//{
//    int val = [](int x) {return x * x; } (4);
//}


int main()
{

    class __lambda_7_13
    {
    public:
        // function call operator function

        inline /*constexpr */ int operator()(int x) const  //const member function
        {
            return x * x;
        }

        // type alias declaration for related function pointer type
        using retType_7_13 = int (*)(int);
        
        
        // type cast operator function to funtion pointer type
        inline constexpr operator retType_7_13 () const noexcept
        {
            return __invoke;
        };

    private:
        //static member function
        static inline /*constexpr */ int __invoke(int x)
        {
            //calls 
            return __lambda_7_13{}.operator()(x);
        }


    public:
        // /*constexpr */ __lambda_7_13() = default;

    } __lambda_7_13{};

    int val = __lambda_7_13.operator()(4);
    return 0;
}
