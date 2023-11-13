#include <stdio.h>
/* Escreva uma função recebe um vetor de números inteiros de 10
posições como parâmetro e que imprime os seus valores. E Na função principal, você deve criar um vetor de inteiros de 10
posições, solicitar ao usuário que o preencha e imprima o mesmo
antes e depois de ordená-lo. 
DEPOIS:
Altere o exercício anterior para que a ação de alterar um vetor seja
realizada pela seguinte função:
void ordenacao(int vetor[10]);*/


void imprimeValores(int vet[10]);
void ordenacao(int vetor[10]);

int main(){

   int  vet[10], i;
    for (i=0; i<10; i++){
        printf("INFORME O VALOR DA POSICAO %d: ",i);
        scanf("%d", &vet[i]);
    }
    printf("ANTES DA ORDENACAO: \n");
    imprimeValores(vet);

    ordenacao(vet);

    printf("DEPOIS DA ORDENACAO: \n");
    imprimeValores(vet);

    return 0;
}


void imprimeValores (int vet[10]){
    int i;
    for (i=0; i<10; i++){
        printf("%d\t", vet[i]);
    }
printf("\n");
}
    void ordenacao(int vetor[10]){
        int i, j, aux;
        for (i=0; i<10; i++){
        for(j=i+1; j<10; j++){

            if(vetor[i] > vetor[j]){
                aux=vetor[i];
                vetor[i]=vetor[j];
                vetor[j]= aux;
            }
        }
    } 

    }
