/* Exercise 3.42 pag.126 */

#include <iostream>
#include <vector>
#include <stddef.h>

using std::cin; using std::cout; using std::endl;
using std::vector; using std::begin; using std::end;

constexpr size_t sizeArr = 10;
int main(){

	int arr[sizeArr] = {0};
	vector<int> vint(10);
	int i = 0;
	

	cout << "Enter 10 integer numbers" << endl;
	for(auto &i : arr){
		cin >> i;
	}

	/*
	for(auto &i : arr){
		cout << i << endl;
	}
	*/

	cout << "Copy elements of the array into the vector" << endl;
	for(auto &v : vint){
		v = arr[i];
		cout << v << endl;
		++i;
	}


	return 0;
}