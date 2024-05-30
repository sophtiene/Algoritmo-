//Exemplo 3 - Somar dois n?meros em linguagem C
 

#include <stdio.h>
#include <locale.h> //inserindo bliblioteca para configura??o do print de textos com acentuacao

int main(){
	setlocale (LC_ALL, "Portuguese");
	//declaracao de vari?veis do tipo real (float)
	float valorPao, valorCafe, valorPagar;
	
	printf("Digite o valor do p?o: ");
	scanf("%f", &valorPao);
	
	printf("Digite o valor do caf?: ");
	scanf("%f", &valorCafe);
	
	valorPagar = valorPao + valorCafe;
	
	printf("\nO valor da compra ? igual = %.2f", valorPagar); //%.2f exibe apenas dois numeros depois da virgula
	return 0;
	
	
}
