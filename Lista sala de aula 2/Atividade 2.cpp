//LISTA 01
//EXERCICIO 2
//Escreva um programa para calcular se um aluno pode ou n?o ser aprovado. Para um aluno do curso de Ingl?s ser aprovado o aluno deve ter m?dia aritm?tica de duas provas maior ou igual a 6 e n?o pode ter mais do que 12 faltas. Exiba somente o texto ?Aprovado? ou ?Reprovado?.

#include <stdio.h>
#include <locale.h>

int main(){
	float nota1, nota2, media;
	int faltas;
	
	printf("Digite a nota 1 do aluno: \n");
	scanf("%f", &nota1);
	
	printf("Digite a nota 2 do aluno: \n");
	scanf("%f", &nota2);
	
	printf("Agora, digite AS FALTAS do aluno: \n");
	scanf("%d", &faltas);
	
	media = (nota1+nota2)/2.0;

	if((faltas > 12) || (media<6)) {
		printf("Reprovado");
	}
	else{
		printf("Aprovado");
	}
	
	return 0;
}
