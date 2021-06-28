/* Exercise 3.41 pag.126 */

#include <iostream>
#include <vector>
#include <stddef.h>

using std::cin; using std::cout; using std::endl;
using std::vector; using std::begin; using std::end;

constexpr size_t sizeArr = 10;
int main(){

	int arr[sizeArr] = {0};
	


	for(auto &i : arr){
		cin >> i;
	}

	for(auto &i : arr){
		cout << i << endl;
	}

	//Initialisation of a vector from array int
	vector<int> vint(begin(arr), end(arr));
	
	cout << "Print vector initialised from array ints" << endl;
	for(auto &i : vint){
		cout << i << endl;
	}


	return 0;
}