/* Exercise 1.21 pag.22
 * Write a program which takes two books with same ISBN and prints their sum
 */

#include <iostream>
#include "Sales_item.h"

Sales_item book1, book2;

int main(){

	std::cin>>book1>>book2;

	std::cout<< book1 + book2 << std::endl;

	return 0;
}