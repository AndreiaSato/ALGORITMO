#include <stdio.h>
/* Implemente um algoritmo em C que recebe como entrada 3 numeros reais informados pelo usuário (a,b,c), 
calcula e escreve o resultado da expressão x=2*((a-c)/8)-b*5 */

/* 
int main(){

    float a;
    float b;
    float c;
    float res;

printf("Informe um valor para a: " );
scanf("%f", &a);

printf("Informe um valor para b: " );
scanf("%f", &b);

printf("Informe um valor para c: " );
scanf("%f", &c);

res = 2*((a-c)/8)-b*5;
printf("O resultado eh: %.2f", res);

return 0;
} */

/* Implemente um algoritmo em C que lê dois numeros inteiros, calcula e escreve o resultado da soma, da multiplicação
da subtração, da divisão e do resto da divisão do primeiro pelo segundo numero*/

/* int main(){
    int num1;
    int num2;
    int soma;
    int prod;
    int subt;
    int div;
    int resto;

    printf(" Informe dois numeros inteiros:  ");
    scanf("%d  %d" , &num1, &num2);
    soma = num1 + num2;
    prod = num1 * num2;
    subt = num1 - num2;
    div = num1 / num2;
    resto = num1 % num2;

    printf("O resultado da soma eh: %d\n", soma);
    printf("O resultado da multiplicacao eh: %d\n", prod);
    printf("O resultado da subtracao eh: %d\n", subt);
    printf("O resultado da divisao eh: %d\n", div);
    printf("O resto eh: %d", resto);

    return 0;
} */


/* Escreva um algoritmo em C que recebe um numero inteiro do usuário, adiciona 1 a esse valor
 e imprime o valor do numero alterado*/

/*  int main(){
    int num;

    printf("Informe um numero: ");
    scanf("%d", &num);
    num += 1;
    printf("O novo numero eh: %d", num);
    return 0;
 } */

 /*    INCREMENTO ( AUMENTA 1 NA VARIÁVEL ANTES DE QUALQUER OPERAÇÃO) E DECREMENTO ( AUMENTA 1 NA VARIÁVEL APÓS AQUALQUER OPERAÇÃO)    
                                   
   EXERCÍCIOS 01 -Escreva um algoritmo em C que recebe do usuário o valor de um raio de um círculo, calcula e imprime o valor da área
  e do perímetro desse círculo.  (dados : area = pi * raio*raio; 
                                        perímetro = 2*pi * raio
                                        pi = 3.14) */
/* int main(){
    
    float raio;
    float area;
    float perimetro;
    float pi;

    printf("Informe o valor do raio: ");
    scanf("%f", &raio);

    pi = 3.14;
    area = pi * raio*raio;
    perimetro = 2* pi * raio;

    printf("O valor do perimetro eh: %.2f\n", perimetro);
    printf("O valor da area eh: %.2f", area);
    return 0;

} */

/*02 -  Escreva um algoritmo em C para calcular o número de dias aproximados que
 uma pessoa viveu, com base em sua idade (considere que o ano tem 365 dias). O algoritmo deve receber a idade do
 usuário, calcular e imprimir a quantidade de dias vividos*/
 /* int main(){

    int dias;
    int idade;
    printf("INFORME SUA IDADE ATUAL: ");
    scanf("%d", &idade);
    dias = idade * 365;
    printf("PELOS MEUS CALCULAOS VOCE JA PASSOU POR %d DIAS", dias);

    return 0;
}  */ 

 /*03 - Escreva um algoritmo em C que recebe do usuário um número real, calcula e escreve 4% do valor lido*/

/*     int main(){
  
    float num, num2;

    printf("Informe um numero real:  ");
    scanf("%f", &num);
    num2 = num * 0.04;
    printf("4%% do valor informado eh: %.1f ", num2);
    return 0;
}  */
 /* 04 -Escrever um algoritmo que recebe como entrada a distância percorrida em uma viagem e o tempo gasto para percorrê la
 Calcule a velocidade média do veículo durante a viagem e retorne para o usuário. ( obs:  vm =  distancia / tempo)*/
 
/* int main(){
    float distancia, tempo, vm;

    printf("Informe sua distancia percorrida e o tempo gasto: ");
    scanf("%f %f", &distancia, &tempo);
    vm = distancia / tempo;
    printf("A velocidade media usada foi: %.2f km/h", vm);
    return 0 ;
} 
 */

 /*05 - Escrever um algoritmo em c que recebe como entrada um número inteiro de 3 casas decimais e mostra como resultado
 o algarismo das casas das dezenas*/
/* 
    int main(){
    int num;
    int resto;
    int dezena;
    printf("Informe um numero de três casas decimais: ");
    scanf("%d", &num);
    resto = num % 100 ;
    dezena = resto/10;
    printf("A dezena informada eh: %d", dezena);
    return 0;
}  */
 /*06 - Escrever um algoritmo em C que recebe como entrada um inteiro que representa uma data no formato de ddmmaa e imprima
 na tela a seguinte sída:  Dia:dd mês:mm Ano: aa           */

 int main(){

int dia ;
int mes ;
int ano ;
int data;
int aux;
printf("INFORME A DATA DE SEU NASCIMENTO NO FORMATO DD/MM/AA: ");
scanf("%d",&data);

dia = data / 10000;
aux = data % 10000;
mes = aux / 100;
ano = aux % 100;
printf("DIA:%d MES:%d ANO:%d ", dia, mes, ano);
return 0;

 }  

 
