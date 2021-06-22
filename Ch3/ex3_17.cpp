/* Ex3.17 pag.105
*
* Read a sequence of words from cin and store the values in a vector, than change the words in upper case and print the first 8
*
*/

#include <iostream>
#include <vector>
#include <string>
using std::vector;
using std::string;
using std::cin; using std::cout; using std::endl;

int main(){
	vector<string> strVec;
	string c;
	
	while( cin >> c ){
		strVec.push_back(c);	
	}
	/*
	for(decltype(strVec.size()) i = 0; i < 8; i++){
		cout << strVec[i] << endl;
	}
	*/
	cout << "You have inserted " << strVec.size() << " words" << endl;
	
	for(auto &c : strVec){//&c is reference to string 
		for(auto &ch : c){//ch is reference to an element in vector string
			ch = toupper(ch);
		}
	}
	
	for(decltype(strVec.size()) i = 0; i < 8; i++){
		cout << strVec[i] << endl;
	}
	
	return 0;
}