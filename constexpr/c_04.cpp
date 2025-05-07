constexpr int addOne(int n) {
	return [n] { return n + 1; }();
}

static_assert(addOne(1) == 2);
