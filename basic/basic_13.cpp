int main()
{
	auto f = []() {
		return { 2, 4, 6 }; //error (template type deduction)
		};
}
