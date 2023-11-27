#include<stdio.h>
/* Leia uma matriz 4 x4 / retorne a localização (linha coluna) do maior valor */

int main(){
    int mat [4] [4], i, j;

    for(i=0;i<4;i++){ // matriz declarada (linha = i e coluna = j) para percorrer ela
        for(j=0; j<4; j++){
            printf("|Digite a posicao %d %d: ", i,j);
            scanf("%d", &mat[i] [j]);
        }
    }

// achar o maior valor
int ma = mat[0][0]; //inicialmente o maior valor esta na posição 0
int linha = 0 , coluna = 0;

for(i=0;i<4;i++){ // percorrer novamente a matriz procurando o maior valor
        for(j=0; j<4; j++){
            if (mat [i][j] > ma){ //ma é o maior valor ate o momento
                ma = mat[i] [j]; // sempre que encontrar o maiior valor, atualiza a linha e a coluna
                linha = i;
                coluna = j;
            }
        }
}
printf("Maior: %d\n", ma);
printf("Posicao: %d %d\n", linha, coluna);

return 0;
}