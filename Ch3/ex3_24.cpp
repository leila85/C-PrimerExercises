/* Re-write Ex3.17 pag.105 using iterators
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
	
	auto beg = iVec.cbegin(), end = iVec.cend();
	auto mid = iVec.cbegin() + (end - beg) / 2;//it is located one place beyond the mid part
	auto sizeVec = (end - beg) / 2;
	//cout << *mid;
	
	cout << "Print sum of adjacent pair" << endl;
	for(auto it = iVec.cbegin(); it != iVec.cend() - 1; ++it){
		cout << *it + *(it +1) << " ";
	}
	cout << endl;
	
	for(auto it = iVec.cbegin(); it < mid; ++it)
	{
		end = end  - 1;//questo iteratore mi permette di spostarmi dalla fine verso la metà di 1
		cout << *it + *end << " ";//sommo gli elementi simmetrici
	}
	
	cout << endl;

	return 0;
}