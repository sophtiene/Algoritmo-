//Exemplo 22
//Programa que calcula a m?dia entre duas notas reais, no fim imprime a mensagem Aprovado, para o caso onde a m?dia seja maior ou igual a 6, caso contr?rio imprime reprovado.


#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	float nota1, nota2, media;
	
	printf("Digite a NOTA 1 do aluno: \n");
	scanf("%f", &nota1);
	
	printf("Digite a NOTA 2 do aluno: \n");
	scanf("%f", &nota2);
	
	media = (nota1 + nota2) / 2;
	
	printf("A m?dia do aluno ? = %.2f", media);
	
	if(media>= 6){
		printf("\nAPROVADO!");
	}
	
	else{
		printf("\nREPROVADO!");
	}
	
	return 0;
}
