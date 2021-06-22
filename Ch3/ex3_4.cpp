/* Ex3_3 pag.90
*/

#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::string;

int main(){
	string s1, s2;;

	cout << "Insert two strings which can be one world or a group of worlds" << endl;
	//cin >> s1 >> s2 ;
	getline(cin, s1);
	getline(cin, s2);
	
	if(s1.size() == s2.size()) 		 cout << "Strings have the same length" << endl;
	else if( s1.size() > s2.size() ) cout << "S1 longer than S2" << endl;
	else 							 cout << "S2 longer than S1" << endl;
	
	cout << "S1 has " << s1.size() << " letters" << endl;
	cout << "S2 has " << s2.size() << " letters" << endl;

	if(s1 == s2) 		cout << "Strings have the same letters" << endl;
	else if ( s1 > s2 ) cout << "S1 is larger than S2" << endl;
	else 				cout << "S2 is larger than S1";
	
	
	return 0;
}
