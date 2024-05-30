//Exemplo 16
//Algoritmo (Programa) que calcula a m?dia de seis n?meros exibe o resultado na tela


#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int n1, n2, n3, n4, n5, n6;
	float media;
	
	printf("Digite seis n?meros: \n");
	scanf("%d %d %d %d %d %d", &n1, &n2, &n3, &n4, &n5, &n6);
	
	media = ((n1 + n2 + n3 + n4 + n5 + n6) / 6.0);
	
	printf("\nA m?dia dos valores ? = %.2f", media);
	//%.2f INDICA QUE S? QUEREMOS IMPRIMIR DOIS N?MEROS DEPOIS DA V?RGULA DA VARIAVEL
	
	return 0;
}
