//2.5. Fa?a um programa que receba um n?mero inteiro e verifique se este n?mero ? par ou ?mpar.

#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int num, x;
	
	printf("Digite um n?mero: \n");
	scanf("%d", &num);
	
	x = num % 2 ;
	
	if(x != 0){
		printf("O n?mero %d ? ?MPAR.", num);
	}
	
	else{
		printf("O n?mero %d ? PAR.", num);
	}
	
	return 0;
}
