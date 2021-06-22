/* Exercise 1.13 pag.14
 * While Loop: sum the numbers from 50 t0 100
 */

#include <iostream>

int main(){

	int num = 0;

	for(int count = 50; count <= 100; count++){
		num +=count;
		std::cout<<num<<std::endl;	
	}
	return 0;
}