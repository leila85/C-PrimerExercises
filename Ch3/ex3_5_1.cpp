/* Ex3_5 pag.90
*/

#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::string;

/* Read a string and concatenate the new word in bigger string */
int main(){
	string s;
	string s1;
	
	while( cin >> s){
			s1 += s;
			cout << "Single word -> " << s << endl;
			cout << "Concatenation string -> " << s1 << endl;		
	}
	return 0;
	
}
