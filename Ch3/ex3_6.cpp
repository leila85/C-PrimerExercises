/* Example Range-based for 
*
* 
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

	getline(cin,s);
	
	for(auto &c : s)//declaring c as reference of s I can modify the characters of the string s
	{
		if(c != ' ')
			c = 'x';
	}
		
	cout << s << endl;
	
	return 0;
}