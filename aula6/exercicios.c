#include <math.h>
#include <stdio.h>
/*1)   Escreva um algoritmo que recebe 3 valores como entrada (a,b,c) e ache as soluções da equação de seg. grau pelo método báskara: 
y = a*x² + b *x + c = 0   */

/* int main()
{
    float  a, b, delta, c;

     printf(" Informe um valor para a ");
     scanf("%f", &a);
     printf(" Informe um valor para b ");
     scanf("%f",&b);
     printf(" Informe um valor para c ");
     scanf("%f", &c);

     delta = b*b - 4*a*c;

   

    printf( "o valor de delta eh: %.2f\n", delta);
    if (delta < 0){
        printf("Nao existe raiz real");
    }
    if (delta == 0) {
        float x = b/(2*a);
        printf("Ha apenas uma raiz e seu valor eh %.2f", x); 
    }
    else{
        float x1, x2;
        x1 = (-b +sqrt(delta))/ 2*a;
        x2 = (-b -sqrt(delta))/ 2*a;
         printf("x1: %.2f\nx2: %.2f", x1, x2);
    }
      return 0; 

    } */

/*                                                  BOOLEANOS                                                                       */
/*                            &&   -> E (AND)    /    ||   -> OU  (OR)     /      !    ->   NEGAÇÃO  (NOT)                          */    

/*2)   Escreva um algoritmo em C que recebe dois números inteiros do usuários e verifica se ambos os números são pares. Em caso positivo
imprimir a mensagem “Ambos os números informados são pares!”. Em caso negativo, verificar se algum dos dois números é par e
informar. */

/* int main(){

int num1, num2;
printf("Informe o primeiro numero: ");
scanf("%d", &num1);
printf("Informe o segundo numero: ");
scanf("%d", &num2);
if((num1 % 2 ==0) && (num2 % 2 == 0)){
    printf("Ambos sao PARES");
}
else if (num1 % 2 == 0){
    printf("O primeiro numero eh PAR");
}
else if (num2 % 2 == 0){
    printf("O segundo numero eh PAR");
}
else{
    printf("Ambos os numeros sao IMPARES");
}
return 0;


} */

/* 3)   Implemente um algoritmo em C que recebe do usuário o peso e altura de uma pessoa e calcule o seu IMC (IMC = peso/altura2). O
seu algoritmo deve mostrar em tela o valor do IMC calculado e deve informar a classificação da pessoa, de acordo com a seguinte tabela:
Menor que 18,5 Magreza
Entre 18,5 e 24,9 Peso normal
Entre 25 e 29,9 Sobrepeso
Acima de 30 Obesidade*/

/* int main(){
    float imc, peso, altura;
    printf("Informe sue peso atual: ");
    scanf("%f", &peso);
    printf("Informe sua altura: ");
    scanf("%f", &altura);
    imc = peso/pow (altura,2);

    if (imc < 18.5){
        printf("Magreza");
    }
    else if (imc < 25){
        printf("Peso Normal");
    }
    else if ( imc < 30 ){
        printf("Sobrepeso");
    }
    else {
        printf("Obesidade");
    } 
    
return 0;
}*/
 

/*4)   Faça um programa que receba três números e mostre-os em ordem crescente*/
/* int main(){
    int num1, num2,num3;
    printf("Informe tres numeros: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    if (num1 < num2 && num2 <= num3){
        printf("%d %d %d a", num1, num2, num3);
    }
    else if (num2 < num1 && num1 <= num3){
        printf("%d %d %d b", num2, num1, num3);
    }
    else if (num3 < num1 && num1 <= num2){
        printf("%d %d %d c", num3, num1, num2);
    }
    else if (num1 < num3 && num3 <= num2){
        printf("%d %d %d d", num1, num3, num2);
    }
    else if (num2 < num3 && num3 <= num1){
        printf("%d %d %d e", num2, num3, num1);
    }
    else if (num3 < num2 && num2 <= num1){
        printf("%d %d %d f", num3, num2, num1);
    }
return 0;
}
 */
/* 5)  Faça um programa que receba como entrada uma data no formato (dd/mm/aa) e determine se ela é válida. Ou seja, verifique se o mês
está entre 1 e 12, e se o dia existe naquele mês. Note que fevereiro tem 29 dias em anos bissextos, e 28 dias em anos não bissextos.*/
 int main(){
    int data, dia, mes, ano;
    printf("Informe sua data de nascimento no formato de dd/mm/aa:  ");
    scanf("%d", &data);
   
    dia = (data / 1000000) ;
    mes = (data / 10000) % 100;
    ano = data % 10000;
    printf("A data em DD/MM/AAAA eh %d/%d/%d.\n", dia, mes, ano);

    if (mes > 0 && mes <= 12){ 
        if (ano %4==0 && ano %100 !=0 || ano %400==0 ){  /* ANO BISSEXTO multiplos de 4, não são multiplos de 100 exceto pelos multiplos de 400*/
             if (dia >=1 && dia <= 29 && mes == 2){
                printf('Data valida!');
            }
            else if (mes != 2 && dia >= 1 && dia <=31){
                printf("Data valida!");
            }
            else {
                printf("Data invalida!");}
        }  
        
       else{
           if (dia >=1 && dia <= 28 && mes == 2){   /* ANO NÃO BISSEXTO*/
                 printf('Data valida!');
            }
            else if (mes != 2 && dia >= 1 && dia <=31){
                printf("Data valida!");
            }
            else {
                printf("Data invalida!");}
    }       
    }
    else {
        printf("DATA INVALIDA!");
    }
return 0;

} 