#include<stdio.h>
#include<math.h>
/* int main(){
    int cont;
    for(cont = 1; cont <= 10; cont++){
        printf("%d\n", cont);
    }
    return 0;
} */

/* ESCREVA UM ALGORITMO ATÉ 20 E CALCULE SEU QUADRADO  */
/* int main(){
    int cont;
    for (cont = 1; cont <= 20; cont++){
    printf("%d - %.3lf\n", cont, pow(cont,2));
    }
    return 0;
} */

/* ESCREVA UM ALGORITMO QUE RECEBE DO USUARIO UM NUMERO INTEIRO E QUE ESCREVE TODOS OS NUMEROS MULTIPLOS DE 3, DESDE O 0 ATÉ O VALOR LIDO */

/* int main(){
 int num, cont;
 printf("Informe um numero: ");
 scanf("%d", &num);
  for( cont = 0; cont <= num; cont++){
    if(cont % 3 == 0){
        printf("%d\n", cont);
    }
  } 
    return 0;
} */
  // outra forma:
/* int main(){
 int num, cont;
 printf("Informe um numero: ");
 scanf("%d", &num);
  for( cont = 0; cont <= num; cont = cont +3){
        printf("%d\n", cont);
  } 
    return 0;
} */

/* ESCREVER UM ALGORITMO QUE LÊ UM NUMERO INTEIRO POSITIVO E QUE ESCREVE TODOS OS NUMEROS A PARTIR DO NUMERO LIDO ATÉ O ZERO 
(OU SEJA, ESCREVA OS NUMEROS DE TRAS PARA FRENTE, UM A UM). */

/* int main(){
int num, cont;
 printf("Informe um numero: ");
 scanf("%d", &num);
for (cont = num; cont >= 0; cont -= 1){
    printf("%d\n", cont);
}
    return 0;
}
 */
/* Escrever um algoritmo que recebe um número inteiro
posi?vo do usuário e escreve todos os valores da série de
Fibonacci, desde 1 até o valor lido */

int main(){
    int n, cont, primeiro = 1, segundo = 3, proximo;
    printf("NUMERO INTEIRO E POSITIVO: ");
    scanf("%d", &n);
    printf("SERIE DE FIBONACCI ATE %d: \n", n);
    if (n >= 1){
        printf("1");
    }
    for (cont = 2; cont <= n; cont++){
        proximo = primeiro + segundo;
        printf(" %d", proximo);
        primeiro = segundo;
        segundo = proximo;
    }
    return 0;
}