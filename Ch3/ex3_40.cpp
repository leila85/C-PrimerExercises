/* Ex 3.40 pag.124 */

#include <iostream>
#include <cstring>


using std::cin; using std::cout; using std::endl;

int main(){

	const char s1[] = "hello";
	const char s2[] = " world";
	char s3[11];//be careful to calculare correctly the size of the bigger string


	cout << "s1 = " << s1 << endl;
	cout << "s2 = " << s2 << endl;
	strcpy(s3,s1);
	cout << "strcpy(s3,s1) = " << s3 << endl;
	strcat(s3,s2);
	cout << "strcpy(s3,s2) = " << s3 << endl;

	return 0;
}
