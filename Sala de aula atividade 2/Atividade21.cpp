//----Exemplo de ESTRUTURA DE SELE??O OU DECIS?O----
//--->"SE-ENT?O-SEN?O"<---


#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int a = -1;
	
	if(a>0){
		printf("A ? maior que zero");
	}
	
	else{
		printf("A ? igual ou menor que zero");
	}
	
	printf("\n Continua??o do programa \n");
	
	return 0;
}

