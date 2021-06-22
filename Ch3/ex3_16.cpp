/* Ex 3.16 pag.105 
 * Write a program to print the size and content of the vectors in ex3.13
*/
#include <iostream>
#include <vector>
#include <string>
using std::vector;
using std::string;
using std::cin; using std::cout; using std::endl;

int main(){
	//(a)v1 holds objects of type int 
	vector<int> v1; //-> 0 elements
	
	//(b)v2 holds 10 objects of type int
	vector<int> v2(10); //-> 10 elements, 0
	
	//(c)v3 holds 10 objects of type int with value 42
	vector<int> v3(10,42); //-> 10 elements, value 42
	
	//(d)v4 holds one objects of type int inizialised to 10 
	vector<int> v4{10}; //-> 1 element, 10
	
	//(e)v5 holds 2 objects of type int 
	vector<int> v5{10,42}; //-> 2 elements, value 10 and 42
	
	//(f)v6 holds 10 objects type string default-inizialised  --> empty strings
	vector<string> v6{10}; //->10 elements, empty
	
	//(g)v7 holds 10 objects type string inizialised with "hi" 
	vector<string> v7{10,"hi"}; //->10elements, value "hi"
	
	cout << "vector<int> v1. Size = " << v1.size();
	
	
	cout << "vector<int> v2(10)" << endl;
	cout << "Size = " << v2.size() << endl;
	for(auto i: v2){
		cout << i << endl;
	}
	
	cout << "vector<int> v3(10,42)" << endl;
	cout << "Size = " << v3.size() << endl;
	for(auto i: v3){
		cout << i << endl;
	}
	
	cout << "vector<int> v4{10}" << endl;
	cout << "Size = " << v4.size() << endl;
	cout << v4[0] << endl;
	
	cout << "vector<int> v5{10,42}" << endl;
	cout << "Size = " << v5.size() << endl;
	cout << v5[0] << " " << v5[1] << endl;
	
	cout << "vector<string> v6{10}" << endl;
	cout << "Size = " << v6.size() << endl;
	
	cout << "vector<string> v7{10,\"hi\"}" << endl;
	cout << "Size = " << v7.size() << endl;
	for(auto c: v7){
		cout << c << endl;
	}
	
	
	return 0;
}