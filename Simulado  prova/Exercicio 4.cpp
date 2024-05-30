//Simulado
//Exercicio 4


#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int a = 25;
	int b = 10;
	int c=0;
	
	c = ++ a + -- a * b - 4 % 3 * a;
	
	printf("O resultado ?: %d", c);
	
	return 0;
}
