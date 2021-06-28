/* Ex 3.32 pag.117 */
#include <iostream>
#include <stddef.h>
#include <vector>


using std::cin; using std::cout; using std::endl;
using std::vector;



int main(){
	int arr[10];
	
	/* using vector */
	vector<int> arrA(10);
	vector<int> arrB(10);

	
	for(size_t i = 0; i < 10; i++){
		arr[i] = i;
	}
	
	
	for(auto i : arr){
		cout << arr[i] << endl;
	}
	

	for(size_t i = 0; i < 10; i++){
		arrA[i] = i;
		arrB[i] = arrA[i];
	}

	//Print arrA
	cout << "Array A" << endl;
	for(auto i : arrA){
		cout << arrA[i] << endl;
	}

	//Print arrB
	cout << "Array B" << endl;
	for(auto i : arrB){
		cout << arrB[i] << endl;
	}

	return 0;
}