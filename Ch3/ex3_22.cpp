/* Ex 3.22 pag. 110
* 
*/
#include <iostream>
#include <vector>
#include <string>
using std::vector;
using std::string;
using std::cin; using std::cout; using std::endl;


int main(){
	
	string s;
	int i = 0;
	vector<string> strVec;
	
	/*
	while( cin >> s ){
		strVec.push_back(s);
		//cout << strVec[i] << endl;
		i++;
	}
	*/
	 while (getline(std::cin, s))
		strVec.push_back(s);
	
	for(auto is = strVec.begin(); is != strVec.end() && !(*is).empty(); ++is)
		for( auto &c : *is)
			c = toupper(c);
	
	for(auto is = strVec.begin(); is != strVec.end() && !(*is).empty(); ++is)
		cout << *is << endl;
	
	
	return 0;
}


