//generic lambda C++ 14

#include <vector>
#include <memory>
#include <string>
#include <algorithm>
#include <iostream>

using namespace std;

void f1(vector<shared_ptr<string>>& svec)
{
	sort(begin(svec), end(svec), [](const shared_ptr<string>& a,
		const shared_ptr<string>& b) { return *a < *b; });

	for_each(begin(svec), end(svec), [](const shared_ptr<string>& sp)
		{ cout << *sp << "\n"; });

	std::cout << "\n\n";
}

void f2(vector<shared_ptr<string>>& svec)
{
	sort(begin(svec), end(svec), [](const auto& a, const auto& b)
		{ return *a < *b; });

	for_each(begin(svec), end(svec), [](const auto& sp)
		{ cout << *sp << "\n"; });
}

int main()
{
	vector<shared_ptr<string>> svec;

	svec.emplace_back(new string{ "yesim" });
	svec.push_back(make_shared<string>("berk"));
	svec.emplace_back(new string{ "alican" });

	f1(svec);
	f2(svec);
}
