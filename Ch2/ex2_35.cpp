#include <iostream>

int main() {
	const int i = 42;//i type int
	auto j = i;//j type deduced int
	const auto &k = i;//k is const int&
	auto *p = &i;//p is const int*
	const auto j2 = i, &k2 = i;//j2 const int, k2 const int&
	
	return 0;
}
