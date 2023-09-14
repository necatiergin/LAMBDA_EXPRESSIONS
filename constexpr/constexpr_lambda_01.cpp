#include <array>
#include <iostream>

int main()
{
	auto fsquare = [](auto val) { return val * val; };
	std::array<int, fsquare(5)> a1;  //1

	std::cout << a1.size() << "\n";

	auto f1 = [](int x) {  //2
		static int cnt = 0;
		++cnt;
		return x * cnt;
	};
	//std::array<int, f1(10)> a2; //gecersiz
	std::cout << f1(20) << "\n";
	
	auto f2 = [](int x)constexpr { //3 f2 nesnesinin tanimi gecersiz
		static int cnt = 0;
		++cnt;
		return x * cnt;
	};

}

//1 fsquare(5) ifadesi C++17 ile birlikte artık varsayılan şekilde constexpr. 
//Dolayısıyla fonksiyona sabit ifadeleri ile yapılan çağrıdan elde edilen geri dönüş değeri sabit ifadesi gereken yerlerde kullanılabilir.

//2 f1 tanımımda static yerel değişken kullanıldığı için artık bu lambda constexpr kabul edilmiyor.

//3 f2 nesnesinin ise tanımı geçersiz.eğer constexpr anahtar sözcüğü kullanılmasaydı tanım geçerli olacaktı.
