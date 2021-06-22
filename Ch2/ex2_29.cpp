#include <iostream>

int main() {
	const int ic = 1;
    int i = ic;
	int *const p3 = &ic;//illegal ->invalid conversion from 'const int*' to 'int*' deve essere: const int *const p3 = &ic;
    const int *p1 = p3;//ok
	p1 = &ic;//ok
	
	int *const p2 = p1;////illegal ->invalid conversion from 'const int*' to 'int*' deve essere: const int *const p2 = p1;
	
	ic = *p3;//not legal --> ic è const
  
  return 0;
}
