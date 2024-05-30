//Exemplo 18
// Algoritmo (Programa) que soma dois n?meros inteiros digitados pelo usu?rio e mostra o resultado na tela, conforme exemplo: soma = valor1 + valor2 = resultado


#include <stdio.h>
#include <locale.h>

int main(){
	setlocale (LC_ALL, "Portuguese");
	int A, B, SOMA;
	
	printf("Digite o valor de A: \n");
	scanf("%d", &A);
	
	printf("Digite o valor de B: \n");
	scanf("%d", &B);
	
	SOMA = A + B;
	
	printf("A soma de %d com %d ? = %d", A, B, SOMA);
	
	return 0;
}
