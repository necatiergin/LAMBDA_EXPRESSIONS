//lambda expression in unevaluated context

class Myclass {
//...
	
	decltype([](int x) {return 2 * x + 3; }) f; //class member
};
