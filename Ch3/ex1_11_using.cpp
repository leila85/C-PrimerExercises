/* Exercise 1.10 pag.13
 * While Loop: decrements of 1 and prints from 10 to 0
 */

#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main(){

	int v1 = 0, v2 = 0;

	cout << "Add two numbers: first number < second number " <<  endl;

	cin >> v1 >> v2;

	while(v1 <= v2){
		cout << v1 << endl;
		v1++;
	}


	return 0;
}