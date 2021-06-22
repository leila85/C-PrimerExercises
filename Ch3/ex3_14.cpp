/* Ex 3.14 pag.102 
*  Write a program to read a sequence of ints from cin and store those values in a vector
*/

#include <iostream>
#include <vector>
#include <string>
using std::vector;
using std::string;
using std::cin; using std::cout; using std::endl;

int main(){
	
	int num, i = 0;
	vector<int> ivec;
	
	while( cin >> num ){
		ivec.push_back(num);
		cout << ivec[i] << endl;
		i++;
	}
	
	return 0;
}