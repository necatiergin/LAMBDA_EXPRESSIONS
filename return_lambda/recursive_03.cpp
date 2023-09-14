int main() 
{
	const auto factorial = [](int n) {
			const auto fact_impl = [](int n, const auto& impl) -> int
			{
				return n > 1 ? n * impl(n - 1, impl) : 1;
			};
			return fact_impl(n, fact_impl);
	};

	std::cout << factorial(7) << "\n";
}
