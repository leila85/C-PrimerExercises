/* Ex 3.35 pag.121 */
#include <iostream>
#include <stddef.h>
#include <cstddef>


using std::cin; using std::cout; using std::endl;

constexpr size_t arrSize = 15;//declaration for the size of the array

int main(){
	int arr[arrSize];
	int* ptrArr = &arr[0];//points to the first element of arr

	for(uint i = 0; i < arrSize; ++i){
		*(ptrArr + i) = 0;
		cout << "Arr[" << i << "] = " << *(ptrArr + i) << endl;
	}

	return 0;
}