/* 
*
* Change the first world characters in upper case ina string
*
*/

#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::string;

/*String taken from input*/
int main(){
	string s;
	
	getline(cin, s);
	
	for ( decltype (s.size()) i = 0; i < s.size() && !(isspace(s[i])); i++ ){
		s[i] = toupper(s[i]);
	}
	
	cout << s << endl;
		
	
	return 0;
}