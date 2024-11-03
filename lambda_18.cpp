int main()
{
	int x = 5, y = 9, z = 11;
	auto f1 = [x, y, z](int a) {return a * (x + y + z); };
	auto f2 = [=](int a) {return a * (x + y + z); };
	//...
}
