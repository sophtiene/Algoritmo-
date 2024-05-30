//fa?a um programa onde voc? deve criar e atribuir os valores nos vetores conforme exemplo abaixo, depois imprima os vetores, conforme:
//vet1[ ] = {2.5, 3.5, 4.5, 5.5, 6.5};
//vet2[ ] = {1, 2, 3, 4, 5, 6};

#include <stdio.h>

int main(){
	float vet1[5];
	int vet2[6], i, x=2;
	
	printf("vet1[ ]:\n");
	for(i=0; i<5; i++){
		vet1[i] = x+0.5;
		x++;
		printf("%.1f \n", vet1[i]);
	}
	
	printf("\nvet2[ ]:\n");
	for(i=0; i<6; i++){
		vet2[i] = i+1;
		printf("%d \n", vet2[i]);
	}
	
	return 0;
}
