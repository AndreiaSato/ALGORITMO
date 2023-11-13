#include <stdio.h>
/*  Faça uma função que recebe um número como parâmetro e verifique se um ele é perfeito ou
não. Um valor é dito perfeito quando ele é igual a soma dos seus divisores excetuando ele
próprio. (Ex: 6 é perfeito, 6 = 1 + 2 + 3, que são seus divisores). A função deve retornar 0 caso o
número seja perfeito e 1 caso contrário. */
/* Um número perfeito é um número inteiro para o qual a soma de todos os seus divisores positivos
 próprios (excluindo ele mesmo) é igual ao próprio número. */

/* int perfeito (int num);

int main(){
    int numero, resp;
    printf("INFORME UM NUMERO: ");
    scanf("%d", &numero);

    resp=perfeito(numero);
    if(resp==0){
        printf("NUMERO PERFEITO ");
    }
    else{
        printf("NAO PERFEITO");
    }
    
    return 0;
}
int perfeito (int num){
    
    int soma = 0, i;
    for (i=1; i<num; i++){
        if(num%i == 0){
            soma +=i;
        }
    }
    if (soma==num){
        return 0;
    }
    else{
        return 1;
    }
} */

/*  Escreva uma função que recebe um valor inteiro como parâmetro e verifica se o valor é posiXvo
ou negaXvo. A função deve retornar 0 caso o número seja perfeito e 1 caso contrário. */

/*  Escreva uma função que recebe um valor inteiro como parâmetro e verifica se o valor é par ou
ímpar. A função deve retornar 0 caso o número seja perfeito e 1 caso contrário. */

/* 
Escreva o programa calculadora simples com as seguintes operações possíveis: adição,
subtração, mulGplicação e divisão. O programa inicia apresentando ao usuários um menu de
opções como mostrado abaixo:
**********************************************************************
1.Adição
2. Subtração
3. MulGplicação
4. Divisão
5. Sair do programa
*********************************************************************
Entre com sua opção:
Crie uma função para cada uma das operações. Cada função deve receber como parâmetro
dois números, efetuar a respecGva operação e retornar a resposta. O menu da sua calculadora deve
ser implementado na função main e ser exibido para o usuário enquanto a condição de parada não
for selecionada. */
/* 
int soma (int n1, int n2);
int subtracao (int n1, int n2);
int divisao (int n1, int n2);
int multiplicacao (int n1, int n2);

int main(){
    int num1, num2, opcao;
    printf("*********************************\n");
    printf("1- adicao\n");
    printf("2- subtracao\n");
    printf("3- multiplicacao\n");
    printf("4- divisao\n");
    printf("5- sair do programa\n");
    printf("*********************************\n");
    scanf("%d", &opcao);

    while (opcao != 5){
        printf("INFORME DOIS NUMEROS:\n");
        scanf("%d %d", &num1, &num2);
    
    switch (opcao){
        case 1: {
            int resp = soma(num1, num2);
            printf("soma: %d\n", resp);
            break;
        }
        case 2:{
            int resp = subtracao( num1, num2);
            printf("subtracao: %d\n", resp);
            break;
        }
        case 3: {
            int resp = multiplicacao(num1, num2);
            printf("divisao: %d\n", resp);
            break;
        }
        case 4:{
            int resp = divisao (num1, num2);
            printf("multiplicacao: %d\n", resp);
            break;
        }
        case 5:{
            break;
        }
        default:{
            printf("opcao invalida!\n");
            break;
        }}
    printf("*********************************\n");
    printf("1- adicao\n");
    printf("2- subtracao\n");
    printf("3- multiplicacao\n");
    printf("4- divisao\n");
    printf("5- sair do programa\n");
    printf("*********************************\n");
    scanf("%d", &opcao);
    }

    return 0;
}
  

  int soma(int n1, int n2){
    int s = n1+n2;
    return s;
  }
  int subtracao (int n1, int n2){
    int sub = n1 - n2;
    return sub;
  }
  int divisao (int n1, int n2){
     if (n2 == 0){
        return 0;
     }
     else{
        int div = n1/n2;
        return div;
     }
  }
  int multiplicacao (int n1, int n2){
    int mult=n1*n2;
    return mult;
  } */

/*  Escreva uma função que recebe um vetor de inteiros de 10 posições e um
número como parâmetros e que retorna quantas vezes o número aparece no vetor. Implemente também a função main para testar a função. */
/* int busca (int vetor[10], int num);

int main(){
    int vet[10], i, numero;
    for( i=0; i<10; i++){
         printf("INFORME O NUMERO DA POSICAO [%d]: ", i);
         scanf("%d", &vet[i]);
    }
    printf("INFORME UM NUMERO A SER BUSCADO NO VETOR: ");
    scanf("%d", &numero);

    printf("O NUMERO %d APARECE %d VEZES NO VETOR.", numero, busca(vet, numero));

    return 0;
}
int busca (int vetor[10], int num){
    int vezes=0, i;
    for( i=0; i<10; i++){
        if (vetor[i]== num){
            vezes++;
        }
    }
    return vezes;
} */


/*  Seja v um vetor de inteiros. Se i < j e v [ i ] > v [ j ] , então o par (i, j) é chamado
de inversão de v. Escreva uma função que recebe um vetor v de inteiros como
parâmetro e calcula a quanNdade de inversões neste vetor. */

/* int inversao (int vetor[10]);

int main(){
    int vetor[10], i, inv;
    for(i=0; i<10; i++){
        printf("INFORME O VALOR NA POSICAO [%d]", i);
        scanf("%d", & vetor[i]);
    }
    inv=inversao(vetor);
    printf("O VETOR POSSUI %d INVERSOES.", inv);

    return 0;
}
int inversao (int vetor[10]){
    int i, j, inv=0;
    for(i=0; i<10; i++){
    for(j=i+1; j<10; j++){
        if (vetor[i] > vetor[j]){
            inv++;
        }
    }
}
return inv;
    } */

/* Crie a função escalar que receba como parâmetros dois vetores A e B de 10
posições com números reais e calcula os valores de um terceiro vetor, que deve
conter produto escalar entre os vetores A e B.  - produto escalar = multiplicação*/
/* void produtoEscalar (int a[10], int b[10], int c[10]);

int main(){
     int va[10], vb[10], vc[10], i;
     printf("PREENCHENDO O VETOR A: \n");
     for(i=0; i<10; i++){
        printf("INFORME O VALOR DA POSICAO [%d]: \n", i);
        scanf("%d", &va[i]);
     }
      printf("PREENCHENDO O VETOR B: \n");
      for(i=0; i<10; i++){
        printf("INFORME O VALOR DA POSICAO [%d]: \n", i);
        scanf("%d", &vb[i]);
     }
     produtoEscalar( va, vb,vc);
     printf("VETOR C");
     for(i=0; i<10; i++){
        printf("%d\t", vc[i]);
     }
    return 0;
}

    void produtoEscalar (int a[10], int b[10], int c[10]){

        int i=0;
        for(i; i<10; i++){
            c[i] = a[i] * b[i];
        }
 } */
/*  Dada um vetor de n elementos, queremos saber se um determinado elemento
está presente nesse vetor. Nesse exercício, você deve implementar uma função
que faz a busca de um elemento em um vetor. Porém, esse caso, o tamanho do
vetor não deve ser fixo no parâmetro da função.*/
/* int busca( int vetor[], int tam, int num);

int main(){
    int v1[10], v2[5], i, num, qtd;
    printf("PREENCHENDO O PRIMEIRO VETOR: \n");
    for(i=0; i<10; i++){
        printf("INFORME O VALOR DA POSICAO [%d]", i);
        scanf("%d", & v1[i]);
    }
    printf("INFORME O NUMERO A SER BUSCADO: \n");
    scanf("%d", &num);
    qtd = busca(v1, 10, num);

        printf("O NUMERO %d APARECE %d VEZES. \n", num, qtd);

    printf("PREENCHENDO O SEGUNDO VETOR: \n");
    for(i=0; i<5; i++){
        printf("INFORME O VALOR DA POSICAO [%d]: ", i);
        scanf("%d", &v2[i]);
    }
     printf("INFORME O NUMERO A SER BUSCADO: \n");
     scanf("%d", &num);
     qtd = busca(v2, 5, num);

         printf("O NUMERO %d APARECE %d VEZES. \n", num, qtd);

 return 0;
    }
int busca( int vetor[], int tam, int num){
    int i, qtd=0;

    for(i=0; i<tam; i++){
        if (vetor[i] == num){
            qtd++;
        }
    }
    return qtd;
} */

