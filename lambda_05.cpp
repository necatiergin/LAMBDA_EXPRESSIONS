// implicit conversion to function pointer type 

int main()
{
	auto f1 = [](int x) {return x * x + 3; };
	int (*pf1)(int) = f1; //implicit conversion to function pointer type
	int i{ 4 };
	auto f2 = [i](int x) {return x * i; };
	
	//int (*pf2)(int) = f2; //error. no implicit conversiomn. (stateful lambda)
}
