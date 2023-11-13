#include <stdio.h>
/* LEITURA E ESCRITA DE UM VETOR */
 
/* quando o usuário digita */ 
/* int main(){
    int i;
    float vet[4];
    for(i = 0; i<4; i++){
        scanf("%f", &vet[i]);
    }
for(i = 0; i<4; i++){
    printf("%1.f", vet[i]);
}
return 0;
} */

/* quando o usuario não digita */

/* int main(){
    int i;
    float vet[4];
    for(i =0; i<4; i++){
        vet[i]=i ;
    }
    for (i=0; i<4; i++){
        printf("%1.f", vet[i]);
    }
    return 0;
} */

/* preenchimento com valores aleatórios (ex: simular sorteio de dados)*/

/* int main(){
    int i;
    float vet[4];
    for(i=0; i<4; i++){
        vet[i] = rand(0) %6+1;
    }
    for (i=0; i<4; i++){
        printf("%.1f", vet[i]);
    }
    return 0;
} */

/* mostrar numeros de tras para frente */
/* int main(){
    int i;
    float vet[4];
    for(i = 3; i >=0; i--){

        vet[i]= i;
        printf("%1.f", vet[i]);
    }
    return 0;
} */

/* encontrar a soma dos elementos do vetor */
/* int main(){
    int i;
    float soma, vet[4];

    for(i=0; i<4; i++){
        vet[i]=i;
        soma = soma + vet[i];
    }
    printf("A soma eh: %1.f", soma);
    return 0;
} */
/* encontrar a media */
/* int main(){
    int i;
    float soma, vet[4];

    for(i=0; i<4; i++){
        vet[i]=i;
        soma = soma + vet[i];
    }
    printf("A media eh: %f", soma/4);
    return 0;
} */

/* encontrar o maior e o menor valor*/

/* int main(){
    int i;
    float vet[4], maior, menor;

    maior = menor = vet[0];

    for(i = 0; i<4; i++){

        vet [i]= i;

        if (maior < vet[i]){
            maior = vet[i];
        }
        if (menor > vet[i]){
            menor = vet[i];
        }
    }
    printf("Maior: %f / Menor: %f", maior, menor);
    return 0;
} */

/* contar quantas vezes um determinado valor aparece no vetor */
int main(){
    int i, cont = 0;
    float num, vet[4];
    printf("Contar repeticoes de:  ");
    scanf("%f", &num);

    for(i=0; i<4; i++){
        vet[i]=i;
        if (vet[i] == num){
            cont++;
        } }
    printf("Ocorrencia de %.1f: %d vezes", num, cont);
    return 0;
   

}

