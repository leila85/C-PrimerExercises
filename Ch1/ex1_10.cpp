/* Exercise 1.10 pag.13
 * While Loop: decrements of 1 and prints from 10 to 0
 */

#include <iostream>

int main(){

	int count = 10;

	while(count >= 0){
		std::cout<<count<<std::endl;
		count--;
	}


	return 0;
}