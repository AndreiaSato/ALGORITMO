#include <stdio.h>
#include <math.h>

/* 1. Escreva um programa em C que recebe dois números do usuário e mostre qual
deles é o maior. */,
/* int main(){
    int num1, num2;
    printf("Digite dois numeros: ");
    scanf("%d %d",&num1, &num2);
    if (num1 > num2){
        printf("O numero maior eh o %d", num1);
    }
    else{
    printf("O numero maior eh %d", num2);
    }
return 0;
} */

/* 2. Escreva um programa em C que recebe um número do usuário. Se o número for
positivo, imprima sua raiz quadrada. Caso contrário, imprima o quadrado do
número. */

/* int main(){
double raiz, quadrado;
int num;
printf("Informe um numero: ");
scanf("%d", &num);
raiz = sqrt (num);
quadrado = pow (num, 2);
if (num >= 0){
    printf("A raiz quadrada de %d eh: %.2lf", num, raiz);
}
else{
    printf("O numero %d ao quadrado eh: %.2lf", num, quadrado);

}
return 0;
} */
/* 
3. Escreva um programa em C que recebe um número inteiro do usuário e, caso o
número seja maior que zero, imprima em tela a soma de seus algarismos. Por
exemplo, se o número informado for 241, o valor a ser impresso deve ser 7
(2+4+1). Se o valor informado for menor que zero, o programa deve imprimir a
mensagem “Número inválido!”. */

/* int main() {
    int numero, digito, soma = 0;

    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);

    if (numero < 0) {
        printf("Numero invalido!\n");
    } else {
        // Calcula a soma dos algarismos
        while (numero > 0) {
            digito = numero % 10;
            soma += digito;
            numero /= 10;
        }

        printf("A soma dos algarismos eh: %d\n", soma);
    }

    return 0;
} */



/* 4. Escreva um algoritmo em C que recebe três valores do usuário, A, B, C, e verifica
se eles podem ser valores dos lados de um triângulo. Em caso positivo, o seu
algoritmo deve verificar se o triângulo é equilátero, isósceles ou escaleno. Abaixo
são listadas as regras para a verificação de um triângulo e de seus tipos:

a. Para formarem um triângulo, o comprimento de cada lado deve ser menor
que a soma dos outros dois. Ou seja, dados os valores informados, para
serem um triângulo, cada um deles não pode ser maior que a soma dos
outros dois.
b. Um triângulo é equilátero se todos os três lados têm o mesmo
comprimento.
c. Um triângulo é isósceles se possui dois lados iguais.
d. Por fim, um triângulo é escaleno se possui os três lados diferentes. */


/* int main(){
double a, b, c;
printf("Informe três valores: ");
scanf("%lf %lf %lf", &a, &b, &c);
    if ((a < b + c) && ( b < a + c) && ( c < a + b)){
    printf("Forma um triangulo");
        if ( a == b && b == c && c == a ) {
             printf(" TRIANGULO EQUILATERO   ");
        }
        else if (( a == b || b == c || c == a )){
             printf(" TRIANGULO ISOSCELES");   
        }
        else {
            printf(" TRIANGULO ESCALENO");
        }
    }
 
    else{
    printf("Nao forma um triangulo!");
}
return 0; 
 } */

/* 5. Escreva um programa em C que recebe do usuário seu sexo (M/m ou F/f), sua
idade e tempo de serviço e define se ele já pode se aposentar. As regras para a
aposentadoria são as seguintes:

a. Se o sexo for masculino, o usuário deve ter pelo menos 62 anos e 35 anos
de tempo de serviço;
b. Se o sexo for feminino, o usuário deve ter pelo menos 60 anos e 30 anos
de tempo de serviço. */

/* int main(){
    char sexo;
    int idade, temposervico;
   
    printf("Informe sua idade: ");
    scanf("%d", &idade);
    printf("Informe seu tempo de servico: ");
    scanf("%d", & temposervico);
    printf("Informe (M/m) ou (F/f):  ");
    scanf( "  %c", &sexo);
    
    if ((sexo == "M"|| "m") && (idade >= 65) && (temposervico >= 35)){
        printf("Voce pode se aposentar!");
    }
    else if ( (sexo =="F"||"f") && (idade >= 60) && (temposervico >= 30)){
        printf("Voce pode se aposentar!");
    }
    else{
        printf("Voce ainda nao pode se aposentar!!");
    }
    return 0;

} */