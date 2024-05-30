//Exemplo 17
//Algoritmo (Programa) que calcula a m?dia ponderada de seis n?meros exibe o resultado na tela
//NOTA 1 --> peso 5
//NOTA 2 --> peso 3
//NOTA 3 --> peso 2
//NOTA 4 --> peso 3
//NOTA 5 --> peso 2
//NOTA 6 --> peso 4


#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int n1, n2, n3, n4, n5, n6;
	float media;
	
	printf("Digite as seis notas: \n ");
	scanf("%d %d %d %d %d %d", &n1, &n2, &n3, &n4, &n5, &n6);
	
	media = ( ( (n1*5) + (n2*3) + (n3*2) + (n4*3) + (n5*2) + (n6*4) ) / 19.0 );
	
	printf("A m?dia das seis notas digitadas ? = %.2f ", media);
	
	return 0;
}
