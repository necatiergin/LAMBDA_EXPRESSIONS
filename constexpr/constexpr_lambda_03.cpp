
constexpr auto sum = [](int a, int b) {
	auto lf = [=] { return a; };
	auto rf = [=] { return b; };
	return [=] { return lf() + rf(); };
};

static_assert(sum(1, 2)() == 3);
