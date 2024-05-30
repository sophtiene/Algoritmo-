//Simulado
//Exercicio 7


#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int n, i, j;
	
	printf("Digite um n?mero maior que zero: \n");
	scanf("%d", &n);
	
	if(n>0){
		for(i= 1; i<= n; i++){
			
			for(j=1; j<=i; j++){
				printf("%d", i);
			}
			
		printf("\n");
		
		}
	}
	else{
		printf("N?mero digitado ? menor ou igual a zero.");
	}
	
	return 0;
}


