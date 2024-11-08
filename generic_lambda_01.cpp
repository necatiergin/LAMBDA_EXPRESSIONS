#include <vector>
#include <list>
#include <iostream>

int main()
{
	auto get_size = [](const auto &c) {return c.size(); };

	std::vector<int> ivec(20);
	std::list<double> dlist(50);
	
	std::cout << "size of ivec is : " << get_size(ivec) << '\n';
	std::cout << "size of dlist is: " << get_size(dlist) << '\n';
}
