/* Ex 3.1 pag.83
 * Re-write Exercise 1.9 by using declaration
 * While Loop: sum the numbers from 50 t0 100
 */

#include <iostream>

using std::cout; using std::endl;

int main(){

	int num = 50;
	int count = 0;

	while(num <= 100){
		count += num;
		num++;
		cout << count << endl;
	}


	return 0;
}