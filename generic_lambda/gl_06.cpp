int main()
{
	auto fn = [](auto x) {return x + x; };

	//auto val = fn<double>(10); //invalid
	auto val = fn.operator() < double > (10); //valid
}
