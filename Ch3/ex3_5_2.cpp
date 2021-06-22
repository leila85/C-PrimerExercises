/* Ex3_5 pag.90
*/

#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::string;

/* Read a string and concatenate space when a word arrives */
int main(){
	string s;
	string s1;
	while( cin >> s){
			s += " ";
			cout << s ;		
	}
	return 0;
	
}
