#include<stdio.h>
/*int main(){

    int numero;
    printf("Informe um numero: ");
    scanf("%d", &numero);
    printf("Numero informado: %d\n", numero);
    return 0;
}*/

//01) Implemente um algorítmo em C que recebe dois numeros inteiros
// informados pelo usuário e imprime a média desses números:
/* int main(){
    int num1;
    int num2;
    int soma;
    int media;
    printf("Informe o primeiro numero: ");
    scanf("%d", &num1);
    printf("Informe o segundo numero: ");
    scanf("%d", &num2);
    soma = num1 + num2;
    media = soma / 2;
    printf("A media dos numeros informados eh: %d", media);
    return 0;
} */


//02) Implemente um algorítmo em C que recebe um valor inteiro informado pelo usuário e imprime seu quadrado
/* int main(){
    int num;
    int qua;
printf("Informe um numero: ");
scanf("%d", &num);
qua = num * num;
printf("O quadrado do numero informado eh: %d", qua);
return 0;
} */

//03) Implemente um algoritmo em C que recebe um valor informado pelo usuário, que representa o saldo de conta,
// e imprimir esse valor reajustado em 1%
/* int main(){
    int saldo;
    int reajuste;
    int saldofinal;
    printf("Digite se saldo atual: ");
    scanf("%d", &saldo);
    reajuste = saldo * 1/100;
    saldofinal = saldo + reajuste;
    printf("O saldo reajustado eh: %d", saldofinal);
    return 0;
} */


//04) Implemente um algoritmo em C que recebe como entrada o preço de um produto informado pelo usuário, 
//calcular novo preço desse produto com desconto de 9% e imprime o resultado
/* int main(){
    float preco;
    float desconto;
    float resultado;
    printf("Digite o valor atual do produto: ");
    scanf("%f", &preco);
    desconto = preco * 9/100;
    resultado = preco - desconto;
    printf("O preco final com desconto  de 9%% eh: %.2f", resultado);
    return 0;
} */

//05) Implemente um algorítmo em C que recebe três caracteres do usuário e imprime esses três caracteres.

/* #include <stdio.h>
int main(){
    char c1;
    char c2; 
    char c3;
    printf("Informe o primeiro caracter:  ");
    scanf("%c", &c1);
    fflush(stdin);// para limpar o buffer e tirar o caractere de quebra de linha
    printf("Informe um segundo caracter:  ");
    scanf("%c", &c2);
    fflush(stdin);
    printf("Informe o terceiro caracter:  ");
    scanf("%c", &c3);
   
    printf("Caracteres informados sao: %c , %c e %c\n", c1, c2, c3);
    return 0;
} */ 