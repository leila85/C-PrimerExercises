/* Ex 3.39 pag.124 */
#include <iostream>
#include <string>
#include <cstring>


using std::cin; using std::cout; using std::endl;
using std::string;

int main(){

	const char s1[] = "hello";
	const char s2[] = "hello";

	const char s3[] = "hello";
	const char s4[] = "hello world";

	const char s5[] = "hello world";
	const char s6[] = "hello";

	string str1 = "hello";
	string str2 = "hello";

	string str3 = "hello";
	string str4 = "hello1";


	string str5 = "hello1";
	string str6 = "hello";


	cout << "Result of comparing two char arrays with same characters: " << s1 << " and " << s2 << " -> " << strcmp(s1,s2) << endl;
	cout << "Result of comparing two char arrays. First is smaller than the second: " << s3 << " and " << s4 << " -> " << strcmp(s3,s4) << endl;
	cout << "Result of comparing two char arrays. First is bigger than the second: " << s5 << " and " << s6 << " -> " << strcmp(s5,s6) << endl;

	cout << "Result of comparing two equal strings -> " << (str1 == str2 ) << endl;
	cout << "Result of comparing two different strings -> " << (str3 == str4 ) << endl;

	return 0;
}
