#include <stdio.h>
#include <stdlib.h>
char jogo[3][3];
int ganhou=0;

void conferevencedor(){
            if(jogo[0][0] == '0' && jogo[0][1] == '0' && jogo[0][2] == '0' ||
               jogo[1][0] == '0' && jogo[1][1] == '0' && jogo[1][2] == '0' ||
               jogo[2][0] == '0' && jogo[2][1] == '0' && jogo[2][2] == '0'){
                printf("\O JOGADOR 0 GANHOU POR LINHA\n");
                ganhou = 1;
            }

            if(jogo[0][0] == 'X' && jogo[0][1] == 'X' && jogo[0][2] == 'X' ||
               jogo[1][0] == 'X' && jogo[1][1] == 'X' && jogo[1][2] == 'X' ||
               jogo[2][0] == 'X' && jogo[2][1] == 'X' && jogo[2][2] == 'X'){
                printf("\O JOGADOR X GANHOU POR LINHA\n");
                ganhou = 1;
            }

            if(jogo[0][0] == '0' && jogo[1][0] == '0' && jogo[2][0] == '0' ||
               jogo[0][1] == '0' && jogo[1][1] == '0' && jogo[2][1] == '0' ||
               jogo[0][2] == '0' && jogo[1][2] == '0' && jogo[2][2] == '0'){
                printf("\O JOGADOR 0 GANHOU POR COLUNA\n");
                ganhou = 1;
            }

            if(jogo[0][0] == 'X' && jogo[1][0] == 'X' && jogo[2][0] == 'X' ||
               jogo[0][1] == 'X' && jogo[1][1] == 'X' && jogo[2][1] == 'X' ||
               jogo[0][2] == 'X' && jogo[1][2] == 'X' && jogo[2][2] == 'X'){
                printf("\O JOGADOR X GANHOU POR LINHA\n");
                ganhou = 1;
            }
            }
        

int main(){

    // variaveis
    int l=0;
    int c=0;
    int linha=0;
    int coluna=0;
    int jogador=0;
    int jogadas=0; 
    int opcao=0;
    

     do{
      
       jogador = 1;
        
        for(l = 0; l < 3; l++){
            for(c = 0; c < 3; c++){
                jogo[l][c] = ' ';
            }
        }

        while ( jogadas < 9){ 
            printf("\n\n\t 0   1   2\n\n");
            for(l = 0; l < 3; l++){
                for(c = 0; c < 3; c++){
                    if(c == 0)
                        printf("\t");
                    printf(" %c ", jogo[l][c]);
                    if(c < 2)
                        printf("|");
                    if(c == 2)
                        printf("  %d", l);
                }
                if(l < 2)
                    printf("\n\t-----------");
                printf("\n");
            }

            // ler coordenadas
            do{
                printf("\n\JOGADOR 1 = 0\nJOGADOR 2 = X\n");
                printf("\nJOGADOR %d: Digite a linha: ", jogador);
                scanf("%d", &linha);
                
                printf("JOGADOR %d: Digite a coluna: ", jogador);
                scanf("%d", &coluna);
            }while(linha < 0 || linha > 2 || coluna < 0 || coluna > 2 || jogo[linha][coluna] != ' ');

            if(jogador == 1){
                jogo[linha][coluna] = '0';
                jogador++;
            }
            else{
                jogo[linha][coluna] = 'X';
                jogador = 1;
            }
            jogadas++;

           conferevencedor();
           
        }
    
     }while(ganhou=0);
       
    
    
    return 0;
}
