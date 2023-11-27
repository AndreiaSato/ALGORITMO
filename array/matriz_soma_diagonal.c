#include<stdio.h>
/* Leia uma matriz de 3 x 3 elementos / calcule a soma dos elementos que estao acima da diagonal principal */
int main(){
    int mat [3][3], i, j, soma=0;
    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            printf("Digite o valor da posicao %d %d: ",i,j);
            scanf("%d", &mat[i][j]);
        }
    }
    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
          if (j>i){
            soma = soma+mat[i][j];
          }
        }
       
    }
    printf("Soma = %d\n", soma);

    return 0 ;
}