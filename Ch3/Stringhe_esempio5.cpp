/* Esempio:
*  string.empty() --> mi restituisce un booleano: 0 se la stringa è vuota, 1 altrimenti
*  string.size() --> mi restituisce il numero di caratteri presenti nella stringa
*
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
	
	while(getline( cin , s )){
		if(s.size() == 8){//stampa solo le parole di 8lettere
			cout << s << endl;
			cout << s.size() << endl;		
		}
	}
	return 0;
}
