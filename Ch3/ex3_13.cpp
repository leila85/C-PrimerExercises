/* Ex 3.13 pag.100 */
//#include <iostream>
#include <vector>
#include <string>
using std::vector;
using std::string;

int main(){
	//(a)v1 holds objects of type int 
	vector<int> v1; //-> 0 elements
	
	//(b)v2 holds 10 objects of type int
	vector<int> v2(10); //-> 10 elements
	
	//(c)v3 holds 10 objects of type int with value 42
	vector<int> v3(10,42); //-> 10 elements
	
	//(d)v4 holds one objects of type int inizialised to 10 
	vector<int> v4{10}; //-> 1 element
	
	//(e)v5 holds 2 objects of type int 
	vector<int> v5{10,42}; //-> 2 elements
	
	//(f)v6 holds 10 objects type string default-inizialised  --> empty strings
	vector<string> v6{10}; //->10 elements
	
	//(g)v7 holds 10 objects type string inizialised with "hi" 
	vector<string> v7{10,"hi"}; //->10elements
	
	return 0;
}