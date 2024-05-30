//1.5. Leia quatro notas, calcule a m?dia aritm?tica e imprima o resultado.
#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	float nota1, nota2, nota3, nota4, media;
	
	printf("Digite as quatro notas \n");
	scanf("%f %f %f %f", &nota1, &nota2, &nota3, &nota4);
	
	media = ((nota1 + nota2 + nota3 + nota4) / 4);
	
	printf("A m?dia das notas ? igual ? %.2f", media);
	
	return 0;
}
