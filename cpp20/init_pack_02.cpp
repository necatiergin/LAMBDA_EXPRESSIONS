//bu kod gecersiz

template<class F, class... Args>
auto delay_invoke(F f, Args... args) {
    return[f = std::move(f), args = std::move(args)...]() -> decltype(auto) {
        return std::invoke(f, args...);
    };
}
