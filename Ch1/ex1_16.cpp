/* Exercise 1.13 pag.14
 * Read stream of integers from standard input and print their sum
 */

#include <iostream>

int main(){

	int num = 0;
	int sum = 0;

	while( std::cin >> num ){
		sum += num;
	}

	std::cout << "The sum is = "<<sum<<std::endl;

	return 0;
}