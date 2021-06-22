#include <iostream>
/*
	L'esempio serve a capire la differenza tra global e local scope.
	Nel primo output verrà stampato il valore di i assunto nello scope del ciclo for.
	Quando il ciclo termina i è distrutta.
	Nel secondo output è stampato il valore della i con scope globale i = 100
*/
int i = 100, sum = 0;

int main() {
		
	for(int i = 0; i!=10; ++i){
		sum +=i;
		std::cout << i << " " << sum << std::endl;
		
	}
	
	std::cout << i << " " << sum << std::endl;
	
	return 0;
}