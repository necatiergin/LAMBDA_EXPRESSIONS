template <class... Args>
auto delay_invoke_foo(Args... args) {
    return[args...]() -> decltype(auto) {

        return foo(args...);
    };
}
