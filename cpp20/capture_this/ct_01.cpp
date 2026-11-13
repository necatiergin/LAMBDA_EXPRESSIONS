class Myclass {
public:
	void foo()
	{
		int a = 10;

		auto f = [=, this] {return a * (mx + my); };  //invalid in C++17 valid in C++20
	}
private:
	int mx, my;
};
