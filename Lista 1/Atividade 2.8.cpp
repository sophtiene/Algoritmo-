//2.8. Fa?a um programa que leia 2 notas de um aluno, verifique se as notas s?o v?lidas e exiba na tela a m?dia destas notas. Uma nota v?lida deve ser, obrigatoriamente, um valor entre 0.0 e 10.0, onde caso a nota n?o possua um valor v?lido, este fato deve ser informado ao usu?rio e o programa termina.


#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	float nota1, nota2, media;
	
	printf("Digite a NOTA 1 do aluno: \n");
	scanf("%f", &nota1);
	
	printf("Digite a NOTA 2 do aluno: \n");
	scanf("%f", &nota2);
	
	if(((nota1<0)||(nota1>10))||((nota2<0)||(nota2>10))){
		printf("NOTA INV?LIDA! VALORES PRECISAM ESTAR ENTRE 0 E 10.");
	}
	
	else{
		media = (nota1 + nota2) / 2.0;
		printf("A m?dia das notas ? = %.2f", media);
	}
	
	return 0;
}
