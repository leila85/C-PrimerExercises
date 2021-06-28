/* Exercise 3.45 pag.130 
* Re-write the ex3.43 using auto type
* Print elements of array by using 3 methods:
* 1) Range for
* 2) Ordinary for loop (using subscripts)
* 3) Using pointers
* 
*/



#include <iostream>
#include <vector>
#include <stddef.h>

using std::cin; using std::cout; using std::endl;
using std::vector; using std::begin; 

constexpr size_t row = 3;
constexpr size_t col = 4;
int iArr[row][col] = {
    {0, 1, 2, 3},
    {4, 5, 6, 7},
    {8, 9, 10, 11}
  };

int main(){

	//1) 
	for(auto const &r: iArr){
		for(auto c: r){
			cout << c << "     ";
		}
		cout << endl;
	}

	cout << endl;

	//2)
	for(size_t i=0; i != row; ++i){
		for(size_t j=0; j != col; ++j){
			cout << iArr[i][j] << "     ";
		}
		cout << endl;
	}

	cout << endl;

	//3)
	for(const auto *rowPtr = iArr; rowPtr != iArr + 3; ++rowPtr){
		for(const auto *colPtr = *rowPtr; colPtr != *rowPtr + 4; ++colPtr){
			cout << *colPtr << "     ";
		}
		cout << endl;
	}
	cout << endl;


	return 0;
}