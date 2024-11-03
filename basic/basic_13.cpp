// the same deduction rules for return type as template argument deduction

int main()
{
	auto f = []() {
		//return { 2, 4, 6 }; //error (template type deduction)
		};
}
