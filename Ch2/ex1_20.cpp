/* Exercise 1.20 pag.22
 * Read a set of book transactions and writing each one to the std output
 */

#include <iostream>
#include "Sales_item.h"

Sales_item book1, book2, book3;

int main(){

	std::cin>>book1>>book2>>book3;

	std::cout<<book1<<std::endl;
	std::cout<<book2<<std::endl;
	std::cout<<book3<<std::endl;

	return 0;
}