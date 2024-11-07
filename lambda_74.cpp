// local classes

// local classes

void foo(int);
int g = 10;

int main()
{
	int a = 10;

	class Nec {
	public:
		void f()
		{
			//a++; //invalid
			foo(g); //valid
			//b--;  //invalid
		}
	};

	int b = 20;

	Nec nec;

	nec.f();
	//...
}
