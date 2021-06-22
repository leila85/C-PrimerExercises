/* Exercise 1.10 pag.13
 * While Loop: decrements of 1 and prints from 10 to 0
 */

#include <iostream>

int main(){

	int v1 = 0, v2 = 0;

	std::cout<<"Add two numbers: first number < second number "<<std::endl;

	std::cin>>v1>>v2;

	while(v1 <= v2){
		std::cout<<v1<<std::endl;
		v1++;
	}


	return 0;
}