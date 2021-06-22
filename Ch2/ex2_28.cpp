#include <iostream>

int main() {
  { //(a)
    int i;
	int *const p;//error a const pointer must be inizialised
  }
  { //(b)
    int *p1;
	int *const p2;//error a const pointer must be inizialised
  }
  { //(c)
    const int ic;//error const object  must be inizialised
	const int &r = ic; //ok
  }
  { //(d)
    const int *const p3;//error const pointer must be inizialised
  }
  { //(e)
    const int *p;
  }
  return 0;
}
