/* Exercise 1.17 pag.18
 * Conta occorrenze di un numero incluso in uno stream di numeri
 */

#include <iostream>

int main(){

	int num = 0;
	int temp_num = 0;
	

	if( std::cin>>temp_num){//prende in ingresso il primo numero e si assicura che vi sia stream di dati da processare
		int count = 1;
		while( std::cin >> num ){
			if( num == temp_num ){//il numero è uguale al precedente
				++count;//aggiorna il contatore
			}
			else{//Se arriva un numero diverso, stampa il numero e la sua frequenza.
				std::cout<<"Numero "<<temp_num <<"Frequenza "<<count<<std::endl;
				temp_num = num;//aggiorna il valore temporaneo
				count = 1;//aggiorna la frequenza
			}
		}

		std::cout<<"Numero "<< temp_num << "Frequenza " <<count<<std::endl;//stampa i dati dell'ultimo valore inserito
	}

	


	return 0;
}