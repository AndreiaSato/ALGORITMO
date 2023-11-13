#include <stdio.h>
#include <math.h>

/* 1 )Escreva um programa em C que receba do usuário a idade, o peso e o sexo de 10 
pessoas. Por fim, o seu algoritmo deve imprimir: 
a. O total de homens; 
b. O total de mulheres; 
c. A soma e a média das idades dos homens; 
d. A soma e a média dos pesos das mulheres.  */

/* int main(){
    int idade, somaidade = 0, peso, somapeso = 0, totalm = 0, totalf = 0, cont = 1;
    char sexo;

    for (cont; cont <= 10; cont++){
           printf("IDADE: ");
           scanf("%d", &idade);
           printf("PESO: ");
           scanf("%d", &peso);
           printf("SEXO [m/f]: ");
           scanf(" %c", &sexo);

           if (sexo == 'f'){
            totalf += 1;
            somapeso += peso;
           }
           else if ( sexo == 'm'){
            totalm +=1;
            somaidade += idade;
           }
           else{
            printf("OPCAO INVALIDA, INFORME NOVAMENTE!\n");
            cont--;
           }
    }
printf("TOTAL HOMENS %d\n", totalm);
printf("TOTAL MULHERES %d\n", totalf);
printf("A SOMA IDADE DOS HOMENS EH: %d\n MEDIA DA IDADE DOS HOMENS EH: %d\n", somaidade, (somaidade/totalm) );
printf("A SOMA PESO DAS MULHERES EH %d\n MEDIA DOS PESOS DAS MULHERES EH:%d",somapeso, (somapeso / totalf) );

return 0;
} */ 

/* 2) Escreva um programa que receba do usuário 10 valores inteiros e positivos e: 
a. Encontre e imprima o maior valor; 
b. Encontre e imprima o menor valor; 
c. Calcule a média dos números lidos */

/* int main(){
    int num, soma = 0, maior = 0, menor = 0, cont = 1;
    for (cont; cont <=10; cont++){
        printf("DIGITE 10 NUMEROS %d: ", cont);
        scanf("%d", &num);
        soma = soma + num;
       if (cont == 1){
        maior = num;
        menor = num;
       }
       else if (num > maior){
        maior = num;
       }
       else if (num < menor){
        menor = num;
       }
    }
    printf("A MEDIA DOS NUMEROS LIDOS EH: %d\n", (soma / 10));
    printf("O MAIOR VALOR LIDO EH: %d\n", maior );
    printf("O MENOR VALOR LIDO EH: %d\n", menor);
return 0;
} */

/* 3) Escreva um programa que receba do usuário 2 valores inteiros e positivos: X e Y. 
O seu programa deve calcular e escrever o valor da função potência XY utilizando 
um laço de repetição (ou seja, sem utilizar a função pow).  */
 /*    int main(){
    int x, y = 1, cont = 1, p = 1;
     printf("VALOR DE X: ");
        scanf("%d", &x);
        printf("VALOR DE Y: ");
        scanf("%d", &y);
    for (cont; cont <= y; cont++){
       p = p * x;
      printf("x = %d / y = %d p = %d\n",  x, y, p);
    }
    return 0;
}   */

/* 4) Escreva um algoritmo que exiba uma mensagem com as opções "1-
multiplicar","2-somar", "3- Subtrair", "4-Dividir", "5-Sair". O seu programa deve 
ler a opção desejada (1, 2, 3, 4), solicitar ao usuário que informe dois valores, 
executar a operação escolhida e exibir o resultado. O programa deve ficar 
repetindo a execução (ou seja, exibição das opções, leitura doa valores e exibição 
do resultado), até que seja escolhida a opção sair.  */
/* int main(){
    int v1, v2, soma ,multiplicacao, subtracao, divisao, opcao, cont =1;
    for (cont; opcao != 5; cont++){
    printf("OPCOES:\n 1) MULTIPLICAR\n 2) SOMAR\n 3) SUBTRAIR\n 4) DIVIDIR\n 5) SAIR\n");
    scanf("%d", &opcao);
    printf("VALOR 1: ");
    scanf("%d", &v1);
    printf("VALOR 2: ");
    scanf("%d", &v2);
    switch (opcao){
        case 1:
            multiplicacao = v1 * v2;
            printf("MULTIPLICACAO: %d\n", multiplicacao);
            break;
        
        case 2:
            soma = v1 + v2;
            printf("SOMA: %d\n", soma);
            break;
        
        case 3:
            subtracao = v1 - v2;
            printf("SUBTRACAO: %d\n", subtracao);
            break;

        case 4:
            divisao = v1 / v2;
            printf("DIVISAO: %d\n", divisao);
            break;

        case 5:
            printf("ENCERRANDO!\n");
            break;

        default:
            printf("OPCAO INVALIDA!\n");
            break;
    }
    }
return 0;
} */


/* 5) Escreva um programa que receba a idade e o peso de 15 pessoas. O seu programa 
de calcular e mostre as médias dos pesos das pessoas da mesma faixa etária. As 
faixas etárias são: de 1 a 10 anos, de 11 a 20, de 21 a 30 anos e maiores de 31 
anos.  */

/*  int main(){
    int idade, peso, somap1 = 0, somap2 = 0, somap3 = 0, somap4 = 0, cont = 1;
    int totalp1 = 0, totalp2 =0, totalp3 = 0, totalp4 =0;
    for(cont; cont <= 15; cont++){
    printf("IDADE: ");
    scanf("%d", &idade);
    printf("PESO: ");
    scanf("%d", &peso);
        if (idade >=1 && idade <= 10){
            totalp1 += 1;
            somap1 = somap1 + peso;
        }
        else if (idade >= 11 && idade <= 20){
            totalp2 +=1;
            somap2 = somap2 + peso;
        }
        else if (idade >= 21 && idade <= 30){
            totalp3 += 1;
            somap3 = somap3 + peso;
        }
        else{
            totalp4 += 1;
            somap4 = somap4 + peso;
        }
    }
    printf("A MEDIA DOS PESOS DE:\n");
    printf("1 A 10 ANOS: %d\n", (somap1 /totalp1 ));
    printf("11 A 20 ANOS: %d\n", (somap2 / totalp2));
    printf("21 A 30 ANOS: %d\n", (somap3/ totalp3));
    printf("30 ANOS +: %d\n", (somap4 / totalp4));
    return 0;
}  */

/* 6) Escreva um programa que receba valores inteiros o usuário até que o valor -99
seja digitado. Quando isso acontecer o programa deverá escrever a soma e a média
dos valores recebidos anteriormente.  */
/*  int main(){
    int valor = 0, soma = 0, cont = 0;

    while ( valor != -99){
        printf("VALOR %d: ", cont);
        scanf("%d", &valor);
        if (valor != -99){
        soma = soma + valor;
        cont++;
        }
    }
    printf("SOMA = %d\nMEDIA = %d", soma, (soma / cont));
    return 0;
}  */
 // outra maneira
/*  int main(){
    int num, soma = 0, media, qtd = 0;
    printf("INFORME UM NUMERO:  ");
    scanf("%d", &num);
    while (num != -99){
        soma = soma + num;
        qtd = qtd +1;
        printf("INFORME UM NUMERO: ");
        scanf("%d", &num);
    }
    media = soma / qtd;
    printf("SOMA: %d\n", soma);
    printf("MEDIA: %d", media);
 } */

/* 7) Escreva um algoritmo que permita fazer um levantamento do estoque de vinhos 
de uma adega, que tem como dados de entrada os tipos de vinhos, sendo: “T” para 
tinto; “B” para branco e “R” para rosê. A quantidade de garrafas de vinho da adega 
é desconhecida. Quando a letra “F” (de fim) for informada, o programa deve parar 
de receber dados e escrever a quantidade de cada tipo de vinho e a quantidade 
total de vinhos na adega.  */
int main(){
char opcao;
int total = 1, qtd, qtdb=0, qtdt=0, qtdr=0;

while (opcao != 'F' && opcao != 'f'){
    printf(" TIPO DE VINHO:\n T- TINTO\n B- BRANCO\n R- ROSE\n  ** F- FIM **\n");
    scanf(" %c", &opcao);
    if (opcao == 'F'){
        break;
    }
    printf("QUANTIDADE: ");
    scanf("%d", &qtd);
   
    switch (opcao){
        case 'T': 
        qtdt = qtdt + qtd;
        printf("VINHO TINTO: %d", qtdt);
        break;
        case 'B': 
        qtdb = qtdb + qtd;
        printf("VINHO BRANCO: %d", qtdb);
        break;
        case 'R':
        qtdr = qtdr + qtd;
         printf("VINHO ROSE:%d", qtdr);
        break;
        /* case 'F': printf("FIM\n");
        break; */

        default:
        printf("Opcao Invalida!\n");
        break;
    }
}
  total = qtdt + qtdb + qtdr;
  printf("TOTAL DE GARRAFAS: %d", total) ;
    return 0;
} 