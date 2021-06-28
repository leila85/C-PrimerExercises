/* Exercise 3.44 pag.130 
* Re-write the ex3.43 using alias
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

using int_array = int[4];//alias declaration of array of 4 ints


constexpr size_t row = 3;
constexpr size_t col = 4;

int iArr[row][col] = {
    {10, 11, 12, 13},
    {14, 15, 16, 17},
    {18, 19, 20, 21}
  };



int main(){

	//1) 
	for(int_array &r: iArr){
		for(int c: r){
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
	for(int_array *rowPtr = iArr; rowPtr != iArr + 3; ++rowPtr){
		for(int *colPtr = *rowPtr; colPtr != *rowPtr + 4; ++colPtr){
			cout << *colPtr << "     ";
		}
		cout << endl;
	}
	cout << endl;


	return 0;
}