/* Ex 3.12 pag.100 */
//#include <iostream>
#include <vector>
#include <string>
using std::vector;
using std::string;

int main(){
	//(a)legal declaration declare ivec vector type with object of vector int
	vector<vector<int>> ivec;
	
	//(b)not legal because ivec is a vector int
	//conversion from 'std::vector<std::vector<int> >' to non-scalar type 'std::vector<std::__cxx11::basic_string<char> >' requested
	//vector<string> svec = ivec; --> vector<vector<int>>svec = ivec;
	vector<vector<int>>svec = ivec;
	
	//(c)svec already declared
	// error: conflicting declaration 'std::vector<std::__cxx11::basic_string<char> > svec' vector<string> svec(10,"null");
	//vector<string> svec(10,"null"); --> vector<string> svec1(10,"null");
	vector<string> svec1(10,"null");
	
	return 0;
}