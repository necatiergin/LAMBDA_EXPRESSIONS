int main(void)
{
	const int x = 10;

	//auto f1 = [x]()mutable {++x; }; //error
	auto f2 = [x = x]()mutable {++x; } //valid
}
