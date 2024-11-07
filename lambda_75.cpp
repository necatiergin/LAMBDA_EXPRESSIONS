int main()
{
	//auto& r1 = [] {}; //invalid - L value ref doesn't bind to R value
	const auto& r2 = [] {}; //valid - const L value ref binds to R value
	auto&& r3 = [] {}; //valid - universal reference r3 becomes R value ref
}
