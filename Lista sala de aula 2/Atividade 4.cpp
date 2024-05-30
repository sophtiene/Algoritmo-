//LISTA 01
//EXERCICIO 4
//Este exemplo pede ao usu?rio que informe tr?s notas. Logo ap?s, calcula e exibe a m?dia final destas notas. Por ?ltimo, verifica se alguma das notas parciais ? menor que a m?dia final e a exibe (caso exista).

#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	float nota1, nota2, nota3, media;
	
	printf("Digite a nota 1: \n");
	scanf("%f", &nota1);
	
	printf("Digite a nota 2: \n");
	scanf("%f", &nota2);
	
	printf("Digite a nota 3: \n");
	scanf("%f", &nota3);
	
	media = (nota1+nota2+nota3)/3.0;
	
	printf("A m?dia de notas ?: %.2f \n", media);

	if(nota1<media ||  nota2<media || nota3<media){
		printf("Uma das notas ? menor que a m?dia.\n");
		if(nota1<media){
			printf("A nota 1 ? menor que a m?dia.");
		};
		if(nota2<media){
			printf("A nota 2 ? menor que a m?dia.");
		};
		if(nota3<media){
			printf("A nota 3 ? menor que a m?dia.");
		};
	}
	else{
		printf("Nenhuma das notas ? menor que a m?dia");
	}
	
	return 0;
}
