/* Exercise 1.22 pag.22
 * Write a program which takes several transaction with same ISBN and prints their sum
 */

#include <iostream>
#include "Sales_item.h"

Sales_item total, book;

int main(){

	if( std::cin >> total ){
		while(std::cin>>book){

			total += book;
		}
	}
	std::cout<< total << std::endl;

	return 0;
}