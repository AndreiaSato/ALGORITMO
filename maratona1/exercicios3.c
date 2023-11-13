#include <stdio.h>
#include <math.h>

/* ESCREVA UM PROGRAMA EM C QUE RECEBE UM NUMERO INTEIRO DO USUARIO E VERIFIQUE SE O NUMERO INFORMADO É DIVISIVEL POR 3 OU 5,
 MAS NÃO SIMULTANEAMENTE PELOS DOIS. EM CASO POSITIVO, IMPRIMIR UMA MENSAGEM INFORMANDO.*/

/*     int main(){
     int num;
     printf("Informe um numero: ");
     scanf("%d", &num );
    
    if( (num % 3 == 0) && ( num % 5 == 0)){
        printf("numero invalido");
    }

    else if  ((num % 3 == 0) ) {
        printf( " numero aceito ");
    }
    else if  ((num % 5 == 0) ) {
        printf( " numero aceito ");
    }
    else{
        printf("numero invalido");
    }

    return 0;
 }  */

/* Um produto vai sofrer aumento de acordo com a tabela abaixo.
Escreva um algoritmo que receba do usuário o preço anEgo do

produto, calcule e escreva o novo preço, de acordo com a tabela
abaixo:
até 50,00 -  aumento 5%
de 50,00 a 100,00 - aumento 10%
acima de 100,00 aumento 15% */

/*  int main(){ 
 float preco;

printf("informe o preco: ");
scanf("%f", & preco);

if (preco < 50.00){
    printf("O preco atual eh: %.2f",  preco *= 1.05 );
}
else if ((preco > 50.00 ) && (preco < 100.00) ){
    printf(" O preco atual eh %.2f", preco *= 1.10);
}
else{
    printf(" O preco atual eh %.2f", preco *= 1.15);

}
    return 0; } 
    */

/* Em uma frutaria, as maçãs custam R$ 0,30 cada se forem compradas
menos de que uma dúzia, e R$ 0,25 se forem compradas pelo menos doze. Escreva um programa que recebe do usuário a quantidade de
maçãs compradas, calcule e escreva o valor total da compra. */

/* int main(){

    float preco;
    int maca;

    printf("Quantas macas sera comprada: ");
    scanf("%d", &maca);

    if (maca  < 6){
        printf("O total da compra eh: %.2f", preco = maca * 0.30);
    }
    else {
        printf(" O total da compra eh %.2f", preco = maca *0.25);
    }
    return 0;
} */

/*  Escreva um algoritmo em C que recebe do usuário um número de 4 algarismos (ex: 1234) e calcule a seguinte operação:

• Mul1plique o primeiro dígito por 111, o segundo por 222, o terceiro por 333 e
o quarto por 444.

• Some todas as operações acima e diga se o resultado final é par ou ímpar:

• Ex: 1234

• 1*111+2*222+3*333+4*444 = 3.330 => O número é par! */



/*  int main(){
    
    int num, milhar, centena, dezena, soma, unidade;
    printf("Informe um numero de 4 algarismo: ");
    scanf ("%d", &num);
    
    milhar = num / 1000;
    centena = (num %1000) /100;
    dezena = (num % 100) / 10;
    unidade = (num % 10);
    
    soma = (milhar*111) + (centena * 222) + (dezena * 333) + ( unidade * 444);
    printf("%d\n", soma);

    if (soma %2 == 0){
        printf(" O numero eh par!");
    }
    else{
        printf("O numero eh impar!");
    }
    

    return 0;
    }  */



    /* Uma empresa vende o mesmo produto para quatro diferentes estados. Cada estado possui uma taxa diferente de imposto sobre o produto:

• MG 7%; SP 12%; RJ 15%; MS 8%. */


 /*    int main(){
        float valor;
        int estado;
        printf(" qual o valor: ");
        scanf("%f", &valor);
        printf(" Digite\n 1) MG\n 2) SP\n 3) RJ\n 4) MS\n");
        scanf("%d", &estado);

        switch (estado){
            case 1:{
                printf("valor eh: %.2f", (valor *= 1.07));
                break;
            }
            case 2:{
                printf("valor eh: %.2f", (valor *= 1.12));
                break;
            }
            case  3:{
                printf("valor eh: %.2f", (valor *= 1.15));
                break;
            }
            case  4:{
                printf("valor eh: %.2f", (valor *= 1.08));
                break;
            }
            default :{
                printf("opcao invalida");
            }
        return 0;
        }

    }  */

  