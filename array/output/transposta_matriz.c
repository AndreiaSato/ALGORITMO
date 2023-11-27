#include<stdio.h>
/* Leia uma matriz de 3 x 3 elementos e calcule sua transposta (trocar linha por coluna) */
int main(){

int mat[3][3], i, j;
int tra[3][3];

    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
           printf("Digite o valor da posicao %d %d: ", i,j);
           scanf("%d", &mat[i][j]);
        }
    }
   for(j=0; j<3; j++){
        for(i=0; i<3; i++){
           // printf("%d", mat[i][j]);
           tra[j][i]=mat[i][j];
           printf("%d", tra[j][i]);
        }
           printf("\n");
   }


    return 0;
}