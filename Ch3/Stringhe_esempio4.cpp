/* Using cin and cout 
*  getline(is,s) -> legge una riga dallo standard input e la salva in una stringa
*
*/

#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::string;

int main(){
	string line;
	
	while(getline( cin , line )){
		cout << line << endl;
	}
	return 0;
	
}