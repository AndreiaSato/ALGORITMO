#include <stdio.h>


/* ESCREVA UM PROGRAMA QUE LEIA O CODIGO DE UM DETERMINADO PRODUTO E MOSTRE A SUA CLASSIFICÇÃO. UTILIZE A TABELA ABAIXO COMO 
REFERENCIA:
COD: 1,2,3,4,  DESCRIÇÃO:  ALIMENTO - NÃO PERECIVEL, ALIMENTO PERECIVEL, VESTUARIO, LIMPEXZA */ 
/* int main(){
    int cod;
    printf("INFORME UM CODIGO: ");
    scanf("%d", &cod);
    if (cod == 1){
        printf("ALIMENTO-NAO-PERECIVEL");}
    else if (cod ==2){
        printf("ALIMENTO PERECIVEL");}
    else if (cod == 3){
        printf("VESTUARIO");}
    else if ( cod == 4){
        printf("LIMPEZA");}
    else {
        printf("INVALIDO!");
    }
    return 0;
} */

/* Escreva um programa em C para simular uma calculadora. O seu programa deve possuir o seguinte menu:
1 – Somar
2 – Subtrair
3 – Mul<plicar
4 – Dividir
5 - Sair
Caso o usuário selecione as opções de 1 a 4, o seu algoritmo deve solicitar dois números, efetuar a operação
e imprimir o resultado. O seu algoritmo deve executar enquanto a opção 5 não seja escolhida.
Obs: Você não deve permi[r a operação de divisão caso o segundo número seja zero. */

/* int main(){
int num, num1, num2 , opcao, soma, sub, div, mult;

printf("SELECIONE A OPCAO:\n 1)SOMAR\n 2)SUBTRACAO\n 3)MULTIPLICACAO\n 4)DIVISAO\n 5)SAIR\n");
scanf("%d", &opcao);
switch (opcao)
{
case 1:{
    printf("DIGITE DOIS NUMEROS: ");
    scanf("%d %d", &num1, &num2);
    soma = num1 + num2;
    printf("RESULTADO: %d", soma);
    break;
}
case 2:{
    printf("DIGITE DOIS NUMEROS: ");
    scanf("%d %d", &num1, &num2);
    sub = num1 - num2;
    printf("RESULTADO: %d", sub);
    break;
}
case 3:{
    printf("DIGITE DOIS NUMEROS: ");
    scanf("%d %d", &num1, &num2);
    mult = num1 * num2;
    printf("RESULTADO: %d", mult);
    break;
}
case 4:{
    printf("DIGITE DOIS NUMEROS: ");
    scanf("%d %d", &num1, &num2);
    if (num2 != 0){   
        div = num1 / num2;
        printf("RESULTADO: %d", div);
    }  
    else {printf("INVALIDO"); }
    break;
   }
case 5:{
    printf("SAIR");
}
default:
    break;
}
    return 0;
} */

/*  Num treinamento para as olimpíadas, são medidos os tempos de três corredores  A, B e C. 
 Escreva um programa em C que receba do usuário respec2vamente o tempo de cada um dos corredores, A, B, e C, 
 calcule e imprima: 
• A ordem de chegada do corredores, do mais rápido para o mais lento. 
• O tempo médio entre os corredores. 
• Exemplo: Se as entradas fossem 35.5 30.5 25.5, as saídas seriam: 
• Ordem: A B C 
• Tempo médio: 30.5 */

/*  int main(){
float tmpa, tmpb, tmpc, media;
printf("CORREDOR A: ");
scanf("%f", &tmpa);
printf("CORREDOR B: ");
scanf("%f", &tmpb);
printf("CORREDOR C: ");
scanf("%f", &tmpc);
if (tmpa < tmpb && tmpa < tmpc && tmpb < tmpc){
    printf("PRIMEIRO A\nSEGUNDO B = %.2f\nTERCEIRO C\n" ,tmpb );}
else if (tmpb < tmpa && tmpb < tmpc && tmpc < tmpa){
    
    printf("PRIMEIRO B\nSEGUNDO C = %.2f\nTERCEIRO A\n", tmpc);
}
else{
    
    printf("PRIMEIRO C\nSEGUNDO A = %.2f \nTERCEIRO B\n", tmpa);
}
media = (tmpa + tmpb + tmpc )/3;
printf("O TEMPO MEDIO DA CORRIDA EH %.2f\n", media); // mudar para tempo do segundo lugar
    return 0;
}  */

/* • As Ilhas Weblands formam um reino independente nos mares do Pacífico. Como é um reino recente, a sociedade é
muito influenciada pela informá<ca. A moeda oficial é o Bit; existem notas de B$ 50,00, B$10,00, B$5,00 e B$1,00. 
Você foi contratado(a) para ajudar na programação dos caixas automá<cos de um grande banco das Ilhas Weblands. 

• Tarefa: Os caixas eletrônicos das Ilhas Weblands operam com todos os <pos de notas disponíveis, mantendo um 
estoque de cédulas para cada valor (B$ 50,00, B$10,00, B$5,00 e B$1,00). Os clientes do banco u<lizam os caixas 
eletrônicos para efetuar re<radas de um certo número inteiro de Bits. Sua tarefa é escrever um programa que, dado 
o valor de Bits desejado pelo cliente, determine o número de cada uma das notas necessário para totalizar esse 
valor, de modo a minimizar a quan<dade de cédulas entregues. Por exemplo, se o cliente deseja re<rar B$50,00, 
basta entregar uma única nota de cinquenta Bits. Se o cliente deseja re<rar B$72,00, é necessário entregar uma nota 
de B$50,00, duas de B$10,00 e duas de B$1,00. 

• O seu programa deve funcionar uma quan<dade indeterminada de vezes, até q o valor zero (condição de para do 
programa) seja informado.  */

int main(){
int valor, cinq, dez, cinco, um;
printf("VALOR DESEJADO PARA RETIRADA: ");
scanf("%d", &valor);

cinq = valor/50;
valor = valor % 50;
dez = valor /10;
valor = valor %10;
cinco = valor / 5;
valor = valor%5;
um = valor;

printf("%d NOTAS DE -> R$50,00\n%d NOTAS DE -> R$10,00\n%d NOTAS DE -> R$5,00\n%d NOTAS DE -> R$1,00\n", cinq, dez, cinco, um);
return 0;
} 