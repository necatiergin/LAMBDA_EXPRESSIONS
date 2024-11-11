#include <random>
#include <algorithm>
#include <vector>
#include <iostream>

void iprint(const std::vector<int>& vec)
{
	for (auto i : vec) {
		std::cout << i << ' ';
	}

	std::cout.put('\n');
}

int main()
{
	constexpr std::size_t vecsize = 40;
	std::mt19937 eng{ std::random_device{}() };
	std::uniform_int_distribution dist{ 0, 1000 };
	std::vector<int> ivec(vecsize);
	iprint(ivec);
	std::generate_n(ivec.begin(), ivec.size(), [&eng, &dist] {return dist(eng); });
	iprint(ivec);
	std::stable_partition(ivec.begin(), ivec.end(), [](int x) {return x % 5 == 0; });
	iprint(ivec);
	auto n = std::erase_if(ivec, [](int x) {return x % 10 > 6; });
	std::cout << n << " elements erased\n";
	iprint(ivec);
	n = std::erase_if(ivec, [](int x) {return x % 3 == 0; });
	std::cout << n << " elements erased\n";
	iprint(ivec);
}
