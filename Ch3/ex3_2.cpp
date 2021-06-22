/* Ex3_2 pag.90
*/

#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::string;

/*
int main(){
	string s;
	
	while(getline( cin , s )){
		if(!s.empty()){
			cout << s << endl;
			cout << s.size() << endl;		
		}
	}
	return 0;
	
}
*/

int main(){
	string s;
	unsigned i = 0;
	
	while( cin >> s){//read words
		cout << s << endl;
		i++;
		cout << " Words = " << i << endl;
	}
	
	
	return 0;
}
