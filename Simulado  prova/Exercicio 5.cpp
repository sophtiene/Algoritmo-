//Simulado
//Exercicio 5

#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int num, i;
	
	printf("Digite um n?mero: \n");
	scanf("%d", &num);
	
	for(i=1; i<= num; i++){
		if(num%i == 0){
			printf("%d, ", i);
		}
	}
	
	return 0;
}
