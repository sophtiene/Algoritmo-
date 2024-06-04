#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    char tabuleiro[3][3];
    int jogadorAtual = 1;
    int linha, coluna;
    int i, j;
    int vencedor = 0, totalPreenchido = 0;
    char escolha[3];
    char marca;
    char nomeJogador1[15], nomeJogador2[15];

    for (linha = 0; linha < 3; linha++) {
        for (coluna = 0; coluna < 3; coluna++) {
            tabuleiro[linha][coluna] = ' ';
        }
    }

    printf("----BEM-VINDOS AO JOGO DA VELHA!----\n");
    printf("Digite o nome do Jogador #1: ");
    gets(nomeJogador1);
    printf("Digite o nome do Jogador #2: ");
    gets(nomeJogador2);

    printf("\nO Jogador %s será O e o Jogador %s será X.\n\n", nomeJogador1, nomeJogador2);
    printf("----COMO JOGAR----\n");
    printf("-> Utilize coordenadas no formato A1, B2, etc., para fazer suas jogadas.\n");
    printf("\n\n\t A | B | C\n\t-----------\n\t 1 | 2 | 3\n\n");

    do {
        for (linha = 0; linha < 3; linha++) {
            for (coluna = 0; coluna < 3; coluna++) {
                if (coluna == 0) printf("\t");
                printf(" %c ", tabuleiro[linha][coluna]);
                if (coluna < 2) printf("|");
            }
            if (linha < 2) printf("\n\t-----------\n");
        }
        printf("\n");

        if (jogadorAtual == 1) {
            marca = 'O';
        } else {
            marca = 'X';
        }

        do {
            if (jogadorAtual == 1) {
                printf("%s, escolha uma posição (A1, B2, etc.) para jogar: ", nomeJogador1);
            } else {
                printf("%s, escolha uma posição (A1, B2, etc.) para jogar: ", nomeJogador2);
            }
            scanf("%s", escolha);

            switch (escolha[0]) {
                case 'A': coluna = 0; break;
                case 'B': coluna = 1; break;
                case 'C': coluna = 2; break;
                default: coluna = -1; break;
            }

            switch (escolha[1]) {
                case '1': linha = 0; break;
                case '2': linha = 1; break;
                case '3': linha = 2; break;
                default: linha = -1; break;
            }
        } while (linha == -1 || coluna == -1 || tabuleiro[linha][coluna] != ' ');

        if (tabuleiro[linha][coluna] == ' ') {
            tabuleiro[linha][coluna] = marca;
            jogadorAtual = (jogadorAtual == 1) ? 2 : 1;
        } else {
            printf("Posição ocupada! Tente novamente.\n");
        }

        for (i = 0; i < 3; i++) {
            if ((tabuleiro[i][0] == marca && tabuleiro[i][1] == marca && tabuleiro[i][2] == marca) ||
                (tabuleiro[0][i] == marca && tabuleiro[1][i] == marca && tabuleiro[2][i] == marca)) {
                vencedor = 1;
            }
        }
        if ((tabuleiro[0][0] == marca && tabuleiro[1][1] == marca && tabuleiro[2][2] == marca) ||
            (tabuleiro[0][2] == marca && tabuleiro[1][1] == marca && tabuleiro[2][0] == marca)) {
            vencedor = 1;
        }

        if (vencedor == 1) {
            if (jogadorAtual == 1) {
                printf("\nParabéns! Vitória do jogador %s!\n", nomeJogador2);
            } else {
                printf("\nParabéns! Vitória do jogador %s!\n", nomeJogador1);
            }
        }

        totalPreenchido = 0;
        for (i = 0; i < 3; i++) {
            for (j = 0; j < 3; j++) {
                if (tabuleiro[i][j] != ' ') {
                    totalPreenchido++;
                }
            }
        }
        if (totalPreenchido == 9 && !vencedor) {
            printf("\nO jogo terminou empatado!\nReinicie o programa para jogar novamente.\n");
            break;
        }
    } while (vencedor == 0);

    return 0;
}
