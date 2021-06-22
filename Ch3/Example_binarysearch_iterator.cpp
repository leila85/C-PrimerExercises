/**** Binary search using arithmetic iterator ****/

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> ivec = {15,17,19,25,45,78,98};//ordered vector int
    auto beg = ivec.begin() , end = ivec.end();
    auto mid = beg + ( end - beg )/2;//si posiziona un elemento più avanti del centro
	
	for(auto &c : ivec)
		cout << c << " ";
	cout << endl;
	
	/*
	cout << "Iterators: *(ivec.begin()) = " << *beg << endl;
	cout << "*(ivec.end() - 1) = " << *(end - 1) << endl;
	cout << "*(beg + ( end - beg )/2) = " << *mid << endl;
	
	cout << *(ivec.begin()) << endl;
	cout << *(ivec.end() - 1) << endl;
	cout << *(beg + ( end - beg )/2) << endl;
	*/
	
    int sought;
    cin>>sought;
	
    while(mid != end && *mid !=sought) //why not "mid != beg"?
    {
        if(*mid>sought)
            end = mid;
        if(*mid<sought)
            beg = mid + 1;
        mid = beg + (end-beg)/2;
    }
    if(*mid == sought)
        cout<<"Found";
    else
        cout<<"Not Found";
	
	
	return 0;
}