/* Ex3.17 pag.105
*
* Read a set of integers into a vector. Print the sum of each pair of adjacent elements.
* Print the sum of the first and the last elements, followed the sum of the second and second-last, and so on.
*
*/

#include <iostream>
#include <vector>
#include <string>
using std::vector;
using std::string;
using std::cin; using std::cout; using std::endl;

int main(){
	vector<int> iVec;
	int num;
	
	while( cin >> num ){
		iVec.push_back(num);	
	}
	
	cout << "Print sum of adjacent pair" << endl;	
	for(decltype(iVec.size()) i = 0; i < iVec.size() - 1; i++){
		cout << iVec[i] + iVec[i+1]<< endl;
	}
	
	cout << "Print sum of first and last number, ...." << endl;
	for(decltype(iVec.size()) i = 0; i < (iVec.size() / 2); i++){
		if((iVec.size() % 2)){ //ODD
			if(i != iVec.size() / 2)
				cout << iVec[i] + iVec[iVec.size() - 1 - i]<< endl;
		}
		else //EVEN
			cout << iVec[i] + iVec[iVec.size() - 1 - i]<< endl;
	}
	
	return 0;
}