#include <stdio.h>

/* 1. Escreva um algoritmo em C que recebe do usuário 20 números inteiros e os armazena
em um vetor. A seguir, o algoritmo deve determinar e escrever: 
a. A quantidade de números ímpares armazenados no vetor; 
b. A quantidade de múltiplos de 7 armazenados no vetor;
c. A quantidade de valores negativos armazenados no vetor.  */

/* int main(){
int v[20], i=0, impar=0, mult=0, neg=0;
for(i; i<20; i++){
printf("Informe 20 numeros: ");
scanf("%d", &v[i]);
}
for(i=0; i<20; i++){
    if (v[i]%2!=0){
    impar++;
    }
}
for(i=0; i<20; i++){
    if (v[i]%7==0){
    mult++;
    }
}
for(i=0; i<20; i++){
    if (v[i] <0){
    neg++;
    }
}
printf("A QT DE NUMEROS IMPARES EH: %d\n", impar);
printf("A QT DE MULTIPLOS DE 7 EH: %d\n", mult);
printf("A QT DE VALORES NEGATIVOS EH: %d\n", neg);

return 0;
} */

/* 2. Escreva um algoritmo em C que recebe 10 números inteiros informados pelo usuário
e os armazena em um vetor. Logo após o seu algoritmo deve receber um número
inteiro do usuário e verificar se o número se encontra no vetor. Caso esteja, informe 
a posição do vetor em que o número se encontra, caso contrário, imprima a 
mensagem: “Número não encontrado!” */
int main(){
int v[10], num, pos=-1, i=0;

for(i; i<4; i++){
    printf("POSICAO %d: ", i);
    scanf("%d", &v[i]);
}
printf("INFORME UM NUMERO PARA VERIFICAR A EXISTENCIA NO VETOR: ");
scanf("%d", &num);

for(i=0; i<10; i++){
    if (num == v[i]){
        pos = i;
        break;
    }
}
if ( pos == -1){

    printf("NUMERO NAO ENCONTRADO!\n");
}
else{
     printf("NUMERO ENCONTRADO NA POSICAO %d\n", pos);
}
    return 0;
}

/* 3. Escreva um algoritmo em C que recebe do usuário e armazena 15 números reais em 
um vetor. Em seguida, o seu algoritmo deve fazer uma pesquisa no vetor e, ao final, 
deve escrever o maior e o menor valor armazenados no vetor  */
/* int main(){
float v[15], maior=0, menor=0;
int i=0;
for(i; i<15; i++){
    printf("INFORME 15 NUMEROS REAIS: ");
    scanf("%f", &v[i]);
    if (i==0){
        maior=v[0];
        menor=v[0];
    }
        if (v[i] > maior){
            maior = v[i];
        }
        else if (v[i] < menor){
            menor = v[i];
        }
}
printf("O MAIOR NUMERO EH: %.2f", maior);
printf("O MENOR NUMERO EH: %.2f", menor);

    return 0;
} */

/* 4. Escreva um algoritmo em C que recebe do usuário os salários de 18 funcionários de 
uma empresa em um vetor. Em seguida, o algoritmo deve calcular e aplicar um 
reajuste de 8% para os salários abaixo de R$1500,00, e de 5% para os demais. Por 
fim, o seu algoritmo deve escrever todos os salários reajustados. */
/* int main(){
float sal[18];
int i=0;

for (i; i<4; i++){
    printf("SALARIO: R$");
    scanf("%f", &sal[i]);

if (sal[i]<= 1500.00){
   sal[i]= sal[i] * 1.08;
    printf("SALARIO REAJUSTADO = R$%.2f\n", sal[i]);
}
else{
    sal[i]=sal[i]*1.05;
    printf("SALARIO REAJUSTADO = R$%.2f\n", sal[i]);
}
}
    return 0;
} */

/* 5. Implemente um algoritmo em C que recebe do usuário e armazena em um vetor os 
preços unitários de 15 produtos de uma loja. Em um outro vetor, você deve armazenar
as quantidades de cada um dos produtos em estoque, que também devem ser 
informadas pelo usuário. Por fim, o seu algoritmo deve calcular e escrever o valor 
total, em reais, do estoque de produtos.  */

/* int main(){
float preco[15], total=0;
int i=0, qtd[15];

for(i; i<3; i++){
    printf("PRECO:R$");
    scanf("%f", &preco[i]);
    printf("QUANTIDADE: ");
    scanf("%d", &qtd[i]);
    total = (preco[i] * qtd[i]) + total;
}
printf("TOTAL EM REAIS:%.2f", total);

    return 0;
} */


/* 6. Escreva um algoritmo em C que crie uma matriz de inteiros com 5 linhas e 5 colunas 
(ou seja, uma matriz de dimensão 5 x 5). Após isso, o seu algoritmo deve preencher
com 1 a diagonal principal da matriz e com 0 seus demais elementos. Ao final, o seu 
algoritmo deve imprimir a matriz obtida. */
/* int main(){
int matriz[5][5],l,c;
// andar nas linhas
for(l=0; l<5; l++){
    for(c=0; c<5; c++){
        if (l==c){
            matriz [l][c] =1;
        }
        else {
            matriz [l][c] = 0;
        }
        
    }
}
 for (l =0; l <5; l++){
    for( c=0; c<5; c++){
        printf("%d\t", matriz [l][c]);
    }
    printf("\n");
 }
    return 0;
} */


/* 7. Escreva um algoritmo que receba do usuário os elementos que irão compor uma 
matriz de números reais de dimensão 3 x 3. Logo após, o seu algoritmo deve percorrer 
a matriz e indica a posição (linha e coluna) do maior elemento */
/* int main(){
float matriz [3][3]; 
int l,c, maior ,  maiorl , maiorc;
for(l=0; l<3; l++){
        for(c=0; c<3; c++){
            printf( "INFORME  O ELEMENTO DA POSICAO [%d][%d]: ", l,c);
            scanf("%f", &matriz[l][c]);}
        }
maior = matriz[0][0];
maiorl = 0;
maiorc = 0;
    for (l=0; l<3; l++){
        for(c=0; c<3; c++){
            maior = matriz [l] [c];
            maiorl = c;
            maiorc = l;
        }
    }
printf("O MAIOR ELEMENTO ESTA NA POSICAO [%d] [%d]\n", maiorl, maiorc);
    return 0;
} */


/* Escreva um algoritmo em C que  cria um vetor de 10 posicoes e organiza em posiao crescente. */
/* int main(){
int v[10], i=0, maior=0;

for(i=0; i<5; i++){
    printf("INFORME 10 NUMEROS: ");
    scanf("%d", &v[i]);
       
}
    return 0;
} */

/* ESCREVA UM PROGRAMA QUE RECEBE 10 NUMEROS DIFERENTES A SEREM ARMZENADOS EM UM VETOR. OS DADOS DEVERAO SER ARMAZENADOS NO VETOR NA ORDEM QUE 
FOREM LIDOS, SENDO QUE CASO O USUÁRIO DIGITE UM NUMERO QUE JA FOI DIGITADO ANTERIORMENTE, O PROGRAMA DEVERÁ PEDIR PARA ELE DIGITAR OUTRO NUMERO.
NOTE QUE A CADA VALOR DIGITADO PELO USUÁRIO DEVE SER PESQUISADO NO VETOR, VERIFICANDO SE ELE EXISTE ENTRE OS NUMEROS QUE JÁ 
FORAM FORNECIDOS. EXIBIR NA TELA O VETOR FINAL QUE FOI DIGITADO. */
/* int main(){
int vet[5], i, j, k;

printf("DIGITE 10 NUMEROS: ");
scanf("%d", &vet[0]);

for (i=1; i<5; i++){
   scanf("%d", &vet[i]);

    for(j=i-1; j >= 0; j--){
     if (vet[i]==vet[j]){
        printf("NUMERO REPETIDO\n");
        i--;
        break;
     } 
    }
}

for (k=0; k< 5; k++){
    printf("%d ", vet[k]);
}
return 0;

} */