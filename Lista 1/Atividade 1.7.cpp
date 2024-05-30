//1.7. Leia um n?mero inteiro e imprima o seu antecessor e o seu sucessor.

#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int num, antes, depois;
	
	printf("Digite um n?mero inteiro: \n");
	scanf("%d", &num);
	
	antes = num - 1;
	depois = num + 1;
	
	printf("O antecessor de %d ? = %d", num, antes);
	printf("\nO sucessor de %d ? = %d", num, depois);
	
	return 0;
}
