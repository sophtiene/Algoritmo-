//Exemplo 9
//Exemplo com texto


#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	char nome[61];
	
	printf("Digite seu nome: \n");
	scanf("%s", nome);
	
	printf("O nome armazenado foi: %s ", nome);
	
	return 0;
}
