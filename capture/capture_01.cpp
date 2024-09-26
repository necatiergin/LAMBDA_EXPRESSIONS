int x{ 10 };

int main()
{
	static int y{ 20 };
	//auto f1 = [x] {return x + 5; }; //invalid, cannot capture variables with static storage.
	//auto f2 = [y] {return y - 3; }; //invalid, cannot capture variables with static storage.
	auto f3 = [=] {return x + y; }; //valid, but captures nothing.
	auto f4 = [&] {return x + y; }; //valid, but captures nothing.
}
