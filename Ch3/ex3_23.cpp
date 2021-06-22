/* Ex 3.23 pag. 105.
* Write a program to create a vector with 10 int elements.
* Using an iterator, assign each elements a value that is twice its current value.
* Test yout program by printing the vector
*/

#include <iostream>
using std::cout; using std::cin; using std::endl;

#include <vector>
using std::vector;



int main(){
	
	vector<int> v(10);//define a vector of 10 int
	
	cout << "Insert 10 integer separated by space" << endl;
	for (int i = 0; i != 10; ++i){
		cin >> v[i];
		cout << " V[" << i << "] = " << v[i];
	}
	cout << endl;
	
	for(auto it = v.begin(); it != v.end(); ++it)
		*it *= 2;
	
	cout << "The current value has been doubled" << endl;
	for (int i = 0; i != 10; ++i){
		cout << " V[" << i << "] = " << v[i];
	}
	
	return 0;
}