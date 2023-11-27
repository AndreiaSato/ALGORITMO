#include <stdio.h>

/* 1. Escreva um programa em C que cria um vetor de números inteiros de 10 posições 
e que solicita ao usuário que preencha esse vetor. Logo após, o seu algoritmo 
deve:
a. Imprimir o maior valor contido no vetor;
b. A média os valores
c. Os valores dispostos em ordem crescente
d. Os números primos contidos no vetor */
/* int main(){
   int vet[10], i,j,maior, soma=0, aux =0, cont=0;
   double media;
   for(i=0; i<10; i++){
    printf("INFORME O VALOR DA POSICAO [%d]: ", i);
    scanf("%d", &vet[i]);
   }
   maior = vet[0];
   for(i=0; i<10; i++){
    if (vet[i]>maior){
        maior = vet[i];
    }
   }
   printf("O MAIOR EH: %d\n", maior);
   for(i=0; i<10; i++){
    soma += vet[i];
   }
   media += soma/10;
   printf("A MEDIA DOS NUMEROS SAO: %.2lf\n", media);
   for (i=0; i<0; i++){
        for (j = i+1; i<10; j++){
            if (vet[i]> vet[j]){
            aux = vet[i];
            vet[i]=vet[j];
            vet[j]= aux;
        }
        }
   }
   printf("VETOR ORDENADO:\n");
   
   for(i=0; i<10; i++){
    printf("%d\t", vet[i]);
   }
    printf("\n NUMEROS PRIMOS: \n");
    for (i=0; i<10; i++){
        cont = 0;
        for (j=1; j<= vet[i]; j++){
            if (vet[i] % j== 0){
                cont++;
            }
        }
        if (cont == 2){
            printf("%d\t", vet[i]);
        }
    }
    return 0;
} */



/* 2. Escreva um programa que recebe 10 números DIFERENTES a serem 
armazenados em um vetor. Os dados deverão ser armazenados no vetor na ordem 
que forem sendo lidos, sendo que caso o usuário digite um número que já foi 
digitado anteriormente, o programa deverá pedir para ele digitar outro número. 
Note que cada valor digitado pelo usuário deve ser pesquisado no vetor, de forma 
a se verificar se ele existe já está armazenado no vetor. Ao final, o seu algoritmo 
deverá imprimir os valores que estão armazenados no vetor. */
/* int main(){
int vet[10], i, j, k;

printf("DIGITE 10 NUMEROS: ");
scanf("%d", &vet[0]);

for (i=1; i<10; i++){
   scanf("%d", &vet[i]);

    for(j=i-1; j >= 0; j--){
     if (vet[i]==vet[j]){
        printf("NUMERO REPETIDO\n");
        i--;
        break;
     } 
    }
}
for (k=0; k< 10; k++){
    printf("%d ", vet[k]);
}
return 0;} */

/* 3. Escreva um programa em C que cria um vetor para o armazenamento de 10 
números inteiros e que possui o seguinte menu:
1- Inserir número
2- Remover número
3- Buscar número
4- Quantidade de números armazenados
5- Imprimir os elementos do vetor
6- Sair

Regras:
• O seu programa deve finalizar quando a opção 6 for selecionada
• Quando o usuário selecionar a opção 1, o seu programa deve verificar se 
existem posições livres no vetor. Em caso positivo, ele deve solicitar um 
número ao usuário e armazenar o número na primeira posição livre. Caso 
contrário, a mensagem “O vetor está cheio” deve ser impresso.
• Quando a opção 2 for selecionada, apenas a primeira ocorrência do 
número deve ser removida.
• Quando a opção 3 for escolhida, o seu programa deve imprimir a posição 
o número escolhido. Caso o número não esteja no vetor, o seu programa 
deve imprimir a mensagem: “O número não está no vetor!”. */
  /*   int main(){
    int vet[10];
    int i;
    for ( i=0; i > 10; i++){
       vet[i] = -1;
        printf("INFORME 10 NUMEROS: ");
        scanf("%d", & vet[10]);

    }   TAREFA!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!1111

        return 0;
    }
 */

/* 4. Escreva um algoritmo que, dada uma matriz real A com m linhas e n colunas e 
um vetor real V com n elementos, determina e imprime o produto de A por V. 
OBS: o tamanho da matriz, do vetor e os elementos das duas estruturas devem ser 
definidos pelo usuário. */
/* int main(){
int m,n, l, c;
printf("INFORME A QUANTIADE DE LINHAS DA MATRIZ: ");
scanf("%d", &m);
printf("INFORME A QUANTIDADE DE COLUNAS: ");
scanf("%d", &n);
int matriz [m] [n];
int vetor [n];
printf("INFORME OS ELEMENTOS DA MATRIZ: \n2");
    for(l=0; l < m; l++){
        for(c=0; c<n; c++){
            printf("ELEMENTO NA POSICAO [%d] [%d]: ", l,c);
            scanf("%d", &matriz [l][c]);
        }
    }
    printf("PREENCHENDO O VETOR: \n");
    for (l=0; l<n; l++){
        printf("INFORME O ELEMENTO NA POSICAO %d: ",l);
        scanf("%d" ,&vetor[l]);
    }
// multiplicando matriz pelo vetor

for (l=0; l<m; l++){
    for (c=0; c< n; c++){
        matriz [l][c] = matriz [l][c] * vetor [c];
    }
}
// imprimindo a matriz atualizada
for(l=0; l < m; l++){
        for(c=0; c<n; c++){
            printf("%d\t", matriz[l][c]);
        }
        printf("\n");
}
    return 0;
} */


/* 5. Faça um algoritmo que crie uma matriz de 3 linhas e 5 colunas de números inteiros 
e que solicita ao usuário números para preencher essa matriz. Em seguida o seu 
algoritmo deve imprimir a soma dos elementos de cada linha e se a soma dos 
elementos é par ou ímpar. Por fim escreva a soma dos elementos de cada coluna 
e se a soma dos elementos é par ou ímpar. */



/* 6. Os elementos aij de uma matriz inteira Anxn representam os custos de transporte 
da cidade i para a cidade j. Dados n itinerários, cada um com k cidades, calcular 
o custo total para cada itinerário. Considere que aij, quando i == j, considera o 
custo para dar a volta na própria cidade.
Exemplo: Dada a matriz de custos:

4   1   2   3   
5   2   1   400
2   1   3   8
7   1   2   5

Digamos que o usuário informe o seguinte itinerário: 0	3	1	3	3	2	1	0.	O	seu	custo	
seria	calculado	da	seguinte	forma:
a03	+	a31	+	a13	+	a33	+	a32	+	a21	+	a10	=	3	+	1	+	400	+	5	+	2	+	1	+	5	=	417 */	