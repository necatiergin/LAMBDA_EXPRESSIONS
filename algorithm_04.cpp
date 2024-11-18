#include <vector>
#include <algorithm>

class Nec {
public:
	void func(const std::vector<int>& vec)
	{
		const auto cnt = std::count_if(vec.begin(), vec.end(), [this](int x) {
			return is_ok(x);
			});
		//
	}
private:
	bool is_ok(int)const;
	//...
};
