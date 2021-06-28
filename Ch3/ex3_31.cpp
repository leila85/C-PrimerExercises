/* Ex 3.31 pag.117 */
#include <iostream>
#include <stddef.h>

using std::cin; using std::cout; using std::endl;

int main(){

	int arr[10];

	for(size_t i = 0; i < 10; i++){
		arr[i] = i;
	}

	for(auto i : arr){
		cout << arr[i] << endl;
	}

	return 0;
}