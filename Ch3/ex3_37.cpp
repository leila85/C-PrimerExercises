/* Ex 3.35 pag.124 */
#include <iostream>
#include <stddef.h>
#include <cstddef>


using std::cin; using std::cout; using std::endl;

int main(){
	const char ca[] = {'h', 'e', 'l', 'l', 'o'};//missing null terminator -> possible undefined behavior. The program will print "hello"
	const char* cp= ca;

	while(*cp){
		cout << *cp ;
		++cp;
	}

	return 0;
}