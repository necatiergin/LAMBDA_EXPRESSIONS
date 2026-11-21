void foo()
{
    static const bool initialized = [] {
        step_one();
        step_two();
        step_three();
        return true;
    }();
}
