/* Exercise 1.23 pag.22
 * Write a program which takes several transaction and prints the occurrence of each isbn
 */

#include <iostream>
#include "Sales_item.h"

Sales_item temp_trans, book;

int main(){
	int count = 0;
	if( std::cin >> temp_trans ){
		count = 1;
		while(std::cin>>book){
			if(book.isbn() == temp_trans.isbn())
				++count;
			else
			{
				std::cout<< "Transaction "<<temp_trans.isbn()<<" has frequency "<<count<<std::endl;
				temp_trans = book;
				count=1;
			}
		}

	std::cout<< "Transaction "<<temp_trans.isbn() <<" has frequency "<<count<<std::endl;
	}
	

	return 0;
}