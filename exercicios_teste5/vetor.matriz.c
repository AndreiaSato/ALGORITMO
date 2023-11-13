#include <stdio.h>
/* 1. Faça um programa que receba como entrada 10 valores reais, coloque-os em um
vetor e depois e apresente os números na ordem inversa da entrada.  */
/* int main(){
int vet[10];
int i;
for(i=0; i<10; i++){
printf("INSIRA 10 VALORES - %d: ", i);
scanf("%d", &vet[i]);
}
for(i=9; i>=0; i--){
printf("ORDEM INVERSA: %d\n", vet[i]);
}
    return 0;
} */

/* 2. Faça um programa que receba 10 números inteiros do usuário e os armazene em 
um vetor. Após isso, o seu programa deve solicitar ao usuário um número inteiro. 
Com esse número inteiro, o seu programa deve: 
a. Imprimir os números do vetor que são maiores que o valor informado.
b. Imprimir quantos números armazenados no vetor são menores que o valor 
informado.
c. Imprimir quantas vezes o valor informado aparece no vetor */
/* int main(){
int vet[10];
int valor, i, qtd=0, qtd2=0;
printf("INFORME UM VALOR: ");
scanf("%d",&valor);
for (i=0; i<10; i++){
    printf("vetor posicao: %d: ", i);
    scanf("%d", &vet[i]);
}
for (i=0; i<10; i++){
    if (vet[i] > valor){
        printf("MAIORES QUE VALOR INFORMADO: %d\n", vet[i]);
    }
    else if(vet[i] < valor) {
        qtd++;
    }
    else{
        qtd2++;
    }      
}
printf("QUANTIDADE MENORES QUE VALOR INFORMADO: %d\n", qtd);
printf("QUANTIDADE IGUAIS AO VALOR INFORMADO: %d\n", qtd2);
return 0;
} */

/* 3. Deseja-se publicar o número de acertos de cada aluno em uma prova objetiva. A prova consta de 10 questões, cada uma com cinco alternativas identificadas
por A, B, C, D e E. Para isso, você deve escrever um algoritmo que armazena em um vetor o gabarito da prova, composto de 10 questões. Logo após, o seu algoritmo 
deve perguntar a quantidade de provas a serem corridas. Por fim, para cada prova, o seu algoritmo deve receber as respostas e verificar a quantidade de acertos. Por 
exemplo, digamos que o gabarito seja:
A B A D E C C A E B
E que duas provas sejam corrigidas:
Prova 1:
A B A C A C B A B B
Total: 6 acertos
Prova 2:
A B C D A B C A E B
Total: 7 acertos */
int main(){
int gab[10];


    return 0;
}



/* 4. Escreva um programa que recebe 10 números DIFERENTES a serem 
armazenados em um vetor. Os dados deverão ser armazenados no vetor na ordem 
que forem sendo lidos, sendo que caso o usuário digite um número que já foi 
digitado anteriormente, o programa deverá pedir para ele digitar outro número. 
Note que cada valor digitado pelo usuário deve ser pesquisado no vetor, de forma 
a se verificar se ele existe já está armazenado no vetor. Ao final, o seu algoritmo 
deverá imprimir os valores que estão armazenados no vetor. */


/* 5. Escreva um programa que solicita ao usuário a dimensão da matriz (linha e 
coluna), cria a matriz de inteiros com essa dimensão e solicita ao usuário que 
preencha a matriz. Após, o seu algoritmo deve imprimir o número de linhas e o 
número de colunas nulas da matriz. */


/* 6. Faça um programa que cria e preenche um vetor de 3 elementos e uma matriz de 
3 x 3 elementos. Em seguida, o programa deve fazer a multiplicação do vetor pelas 
colunas da matriz. Por fim, imprima a matriz resultante. */


/* 7. Fazer um programa que recebe uma string do usuário e imprime o valor 1 se a
string digitada foi "SIM" e 0 se a string digitado foi "NAO". A rotina só deve 
imprimir alguma coisa se a string digitada for "SIM" ou "NAO". */


/* 8. Fazer um programa em "C" que recebe nomes de pessoas compostos por um nome 
e um sobrenome separados por um espaço em branco e imprima: 
a. A lista de nomes em ordem alfabética; 
b. O número médio de letras por nome. 
Obs: 
• A quantidade de nomes lidos deve ser menor ou igual a 20; 
• Uma sequência de nomes é encerrada pela palavra "FIM" */