//Exemplo 12
//Exemplo com texto FUN??O GETS ( GET COM STRING )


#include <stdio.h>
#include <locale.h>

int main(){
	char palavra[20] = {"Hello World!"}; //atribui valor inicial para a string
	
	printf(palavra); //printa a string com seu valor inicial hello world
	
	printf("\n"); //quebra de linha
	
	gets(palavra); //solicita ao usuario que digite um novo valor para a string
	
	printf("\n %s", palavra); //printa a string com seu novo valor
	
	return 0;
}
