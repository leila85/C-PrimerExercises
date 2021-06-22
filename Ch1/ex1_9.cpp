/* Exercise 1.9 pag.13
 * While Loop: sum the numbers from 50 t0 100
 */

#include <iostream>

int main(){

	int num = 50;
	int count = 0;

	while(num <= 100){
		count += num;
		num++;
		std::cout<<count<<std::endl;
	}


	return 0;
}