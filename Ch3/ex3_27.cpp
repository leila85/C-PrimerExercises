/* Exercise 3.27 pag. 115 */


int txt_size();

int main(){
	unsigned buf_size = 1024;
	
	int ia1[buf_size];//a)not legal because buf_size is not constexpr
	int ia2[4 * 7 - 14];//b)legal, because the array size is a constexpr
	int ia3[txt_size()];//c)not legal, txt_size return an int. To be legal should return constexpr int
	char st[11] = "fundamental";//d)not legal. The string has 11char e there is not the space for null caracter
	
	
	return 0;
}

int txt_size(){
	return 1024;
};