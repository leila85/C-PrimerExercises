/* Example Range-based for 
*
* Read characters in a string and counts the punctuaction characters
*
*/

#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::string;

/*
//Pre-defined string
int main(){
	string s = "Hello world!";
	decltype (s.size()) count_punct = 0;
	 
	for(auto c : s)
		if( ispunct(c) ) ++count_punct;
	cout << count_punct 
		 << " punctuation characters in " << s << endl;
	
	return 0;
}
*/

/*String taken from input*/
int main(){
	string s;
	decltype (s.size()) count_punct = 0;
	
	getline(cin,s);
	
	for(auto c : s)
		if( ispunct(c) ) ++count_punct;
	
	cout << count_punct 
		 << " punctuation characters in " << s << endl;
	
	return 0;
}