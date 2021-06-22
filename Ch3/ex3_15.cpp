/* Ex 3.15 pag.102 
*  Write a program to read a sequence of strings from cin and store those values in a vector
*/

#include <iostream>
#include <vector>
#include <string>
using std::vector;
using std::string;
using std::cin; using std::cout; using std::endl;

int main(){
	
	string stringa;
	int i = 0;
	vector<string> strVec;
	
	while( cin >> stringa ){
		strVec.push_back(stringa);
		cout << strVec[i] << endl;
		i++;
	}
	
	return 0;
}