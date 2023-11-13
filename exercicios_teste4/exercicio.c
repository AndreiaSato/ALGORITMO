#include <stdio.h>
#include <math.h>
/* Escrever um algoritmo que lê 5 valores e conta quantos destes valores são
nega7vos. Por fim, o seu algoritmo deve imprimir o resultado */

/* int main(){
    int valor, qtd = 0, cont = 1;
    while (cont <= 5){
        printf("VALOR: ");
        scanf("%d", &valor);
        if (valor <= 0){
            qtd = qtd + valor;
        }
        cont++;
    }
    printf(" A QTD DE VALORES NEGATIVOS EH: %d", qtd);
    return 0;
} */

/* Desenvolver um algoritmo que recebe 10 números do usuário e que efetue a soma
de todos os números ímpares que são múl7plos de três e que se encontram no
conjunto dos números de 1 até 500. */

/* int main(){
    int num, soma = 0, cont = 1;
    for (cont; cont <= 4; cont++){
        printf(" INFORME NUMEROS PARES E IMPARES: ");
        scanf("%d", &num);
        if ( (num %2 != 0) && ( num %3 == 0) && ( num >= 1 && num <= 500)){
             soma += num;
             printf("SOMA parcial: %d\n", soma);
        }
    }
    printf("SOMA DOS IMPARES EH: %d", soma);
return 0;
    } */

/* Escrever um algoritmo que leia uma quan7dade desconhecida de números e conte
quantos deles estão nos seguintes intervalos: [0-25], [26-50], [51-75] e [76-100]. O
algoritmo deve finalizar quando um número nega7vo for informado. */
/* int main(){
    int num , qtd1 = 0, qtd2 = 0, qtd3 = 0, qtd4 = 0, cont = 0;
        do{
        printf("NUMERO: ");
        scanf("%d", &num); 
        if(num < 0){
            printf("Numero negativo!\n");
        } 
        else if(num > 0 && num <= 25){
                qtd1 = qtd1 + num;
            }
            else if (num <=50){
                qtd2 = qtd2 + num;
            }
            else if (num <= 75){
                qtd3 = qtd3 +num;
            }
            else if  (num <= 100){
                qtd4 = qtd4 + num;
            }
        }
        while (num >= 0);
         cont++;
    printf("QT NUMEROS DE 0 A 25: %d\n" ,qtd1);
    printf("QT NUMEROS DE 26 A 50: %d\n" ,qtd2);
    printf("QT NUMEROS DE 51 A 75: %d\n" ,qtd3);
    printf("QT NUMEROS DE 76 A 100: %d\n" ,qtd4);

    return 0;
} */


/* Escrever um algoritmo que lê um valor N inteiro e posi7vo e que calcula e escreve o
valor de E
E = 1 + 1 / 1! + 1 / 2! + 1 / 3! + 1 / N! */
/* int main (){
    int n, E, fat = 1, cont =1;
    printf("DIGITE UM VALOR PARA N: ");
    scanf("%d", &n);
    for(cont=1; cont <= n; cont++){
        fat = fat * cont;
    }
     E = 1 + 1 / 1 + 1 / 2 + 1 / 6 + 1 / fat;
        printf("fat: %d\n", fat);
        printf("O VALOR DE E eh: %d", E);

return 0;   
} */



/* Escreva um algoritmo que leia o código de um aluno e suas três notas. Calcule a
média ponderada do aluno, considerando que o peso para a maior nota seja 4 e para
as duas restantes, 3. Mostre o código do aluno, suas três notas, a média calculada e
uma mensagem "APROVADO" se a média for maior ou igual a 5 e "REPROVADO" se a
média for menor que 5. Repita a operação até que o código lido seja nega7vo. */
/* int main(){
    int nota1, nota2, nota3, cod, media;
    do
    {
     printf("CODIGO DO ALUNO: ");
     scanf("%d", &cod);
     if (cod >= 0){
     printf("NOTA 1: ");
     scanf("%d", &nota1);
     printf("NOTA 2: ");
     scanf("%d", &nota2);
     printf("NOTA 3: ");
     scanf("%d", &nota3);
     if ((nota1 >= nota2) && (nota1 >= nota3)){
        media = (nota1 * 4 + nota2 * 3 + nota3 * 3)/10 ;
     }
     else if ((nota2 > nota1) && (nota2 >= nota3)){
        media = (nota2 * 4 + nota1 * 3 + nota3 *3)/10;
     }
     else{
        media = (nota3 * 4 + nota1 *3 + nota2 *3)/10;
     }
    printf("MEDIA PONDERADA : %d\n", media);
        if (media >= 5){
            printf("APROVADO!\n");
        }
        else {
            printf("REPROVADO!\n");
        }
    } } while (cod >= 0);
    return 0;
} */


/* A prefeitura de uma cidade fez uma pesquisa entre seus habitantes, coletando dados
sobre o salário e número de filhos. A prefeitura deseja saber:
a) Média do salário da população;
b) Média do número de filhos;
c) maior salário;
d) percentual de pessoas com salário até R$100,00.
Escreva um algoritmo que recebe esses dados da população e que imprime os
resultados. O seu algoritmo irá receber dados até que um salário negaDvo seja
informado. */
/* int main(){
float salario, mediasal = 0,  maiorsal = 0, mediafilho = 0;
int filhos, qtd = 0, cont = 0;

do
{   printf("SALARIO: ");
    scanf("%f", &salario); 
    if (salario >= 0){
        mediasal = mediasal + salario;
        if (salario > maiorsal){
            maiorsal = salario;
        }
        if (salario >= 100){
            qtd = qtd + salario;
        }
        printf("FILHOS: ");
        scanf("%d", &filhos);
        mediafilho = mediafilho + filhos;
        cont++;
    } 
} while (salario >= 0);

printf("MEDIA DE SALARIOS: %.2f\n", mediasal/cont);
printf("MEDIA DE FILHOS: %.2f\n", mediafilho/cont);
printf("MAIOR SALARIO: %.2f\n", maiorsal);
printf("PORCENTAGEM DE PESSOAS COM SALARIO ATE R$100,00:  %.2d %%", qtd/100);
    return 0;
} */


/* Uma eleição presidencial existem quatro candidatos. Os votos são informados através de códigos, de
acordo com a descrição abaixo
• 1,2,3,4 = voto para os respecLvos candidatos;
• 5 = voto nulo;
• 6 = voto em branco;
Elabore um algoritmo que leia o voto de um eleitor. O seu algoritmo deve calcular e imprimir as seguintes
informações:
• total de votos para cada candidato;
• total de votos nulos;
• total de votos em branco;
O seu algoritmo deve receber votos até o que o valor 0 seja informado. */

/* int main(){
    int  opcao,total1=0, total2=0, total3 =0, total4=0, total5=0, total6 =0 ;
    
    do{ 
        printf("ESCOLHA SEU CANDIDATO:\n 01\n 02\n 03\n 04\n 05\n 06\n");
        scanf("%d", &opcao);
        switch (opcao)
        {
        case 1:
         total1 = total1 + 1;
         break;
        case 2:
         total2++;
         break;
        case 3:
         total3++;
         break;
        case 4:
         total4++;
         break;
        case 5: 
         total5++;
         break;
        case 6:
         total6++;
         break;
        default:
        printf("opcao invalida!\n");
            break;
        }
    }
     while(opcao != 0 );
    printf( "VOTOS CANDIDATO 1: %d\n", total1);
    printf( "VOTOS CANDIDATO 2: %d\n", total2);
    printf( "VOTOS CANDIDATO 3: %d\n", total3);
    printf( "VOTOS CANDIDATO 4: %d\n", total4);
    printf( "VOTOS NULOS: %d\n", total5);
    printf( "VOTOS EM BRANCO : %d\n", total6);
    return 0;
    } */
    
