/* Ex 3.8 pag.96 
*	Range-base for
* 	For loop
*	While loop
*/

#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::string;

/* range-base for
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
*/

/*While loop
int main(){
	string s;

	getline(cin,s);
	decltype( s.size()) i = 0;
	
	while( i < s.size())
	{
		if(s[i] != ' ')
			s[i] = 'x';
		++i;
	}
		
	cout << s << endl;
	
	return 0;
}
*/

/* Foor loop */
int main(){
	string s;

	getline(cin,s);
	for( decltype( s.size()) i = 0; i < s.size(); ++i)
	{
		if(s[i] != ' ')
			s[i] = 'x';
	}
		
	cout << s << endl;
	
	return 0;
}
