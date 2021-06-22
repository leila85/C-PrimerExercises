#include <iostream>

int main() {
	const int i = 1;
	const int v2 = 0;
	int v1 = v2;
	int *p1 = &v1;
	int &r1 = v1;
	r1 = v2;
	const int *p2 = &v2;
	//p1 = p2; error: invalid conversion from 'const int*' to 'int*'
	p2 = p1;
	const int *const p3 = &i;
	//p1 = p3; error: invalid conversion from 'const int*' to 'int*'
	const int &r2 = v2;
  return 0;
}
