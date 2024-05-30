//Exemplo 11
//Exemplo com texto FUN??O GETS ( GET STRING )


#include <stdio.h>
#include <locale.h>

int main(){
	char nome[50];
	
	printf("Digite seu nome: \n");
	gets(nome); //GETS <--------------------------
	//GETS Esta fun??o armazena tudo que foi digitado, inclusive os espa?os, at? que a tecla ENTER seja pressionada.
	
	printf("Nome = %s", nome);
	
	return 0;
}
