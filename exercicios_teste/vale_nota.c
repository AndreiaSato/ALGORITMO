#include <math.h>
#include <stdio.h>

/* 1. Escreva um programa em C que inicialmente recebe do usuário um valor inteiro.  
Logo após, o seu programa deve solicitar ao usuário que informe mais 3 valores  a, b e c (podem ser inteiros ou decimais). 
Se o valor de i for par então o seu  programa deve calcular e imprimir na tela a média aritmética de a, b e c. 
Caso  contrário, se i>10 então o programa deve calcular e imprimir na tela a média ponderada de a, b e c. 
Os pesos dos valores são respectivamente 2, 3 e 4. */
/* int main(){
        int num;
        float a, b, c, m;

        printf("Informe um numero interio:  ");
        scanf("%d", &num);
        printf("Informe tres numeros para a, b e c: ");
        scanf("%f %f %f", &a, &b, &c);
        
        if (num %2 == 0){
                m = (a + b + c)/3;
                printf( "A media artmetica eh %.2f\n", m);
        }
        else if (num > 10){
                m = (a*2 +b*3 +c*4)/9;
                printf("A media ponderada eh %.2f\n", m);
        }
         printf(" PROGRAMA ENCERRADO!"); 
        return 0;
        
}
    */



/* 2. Elabore um algoritmo em C que receba dois valores do usuário, que correspondem  a base e a altura de um retângulo. 
Seu algoritmo deve verificar inicialmente se os  valores formam um retângulo ou um quadrado.
Caso formem um quadrado, imprima a palavra QUADRADO, e caso seja um retângulo, mostre o perímetro (soma de todos os lados) e 
a área (base vezes a altura) do retângulo.*/

/* int main(){
        double base, altura;
        printf("Informe o valor da base do retangulo: ");
        scanf("%lf", &base);
        printf("Informe um valor para a altura do retangulo: ");
        scanf("%lf", &altura);
        if (altura == base){
                printf("QUADRADO!");
        }
        else {
                printf( "perimetro %.2lf\n", (altura * 2) + (base *  2));
                printf( "base %.2lf", base * altura);
        }
return 0;
} */


/* 3. Escreva um algoritmo que permite ao usuário executar ações a partir de dois  números informados por ele. 
O seu algoritmo deve solicitar inicialmente ao  usuário informe os dois números e depois exibir o seguinte menu em tela: 
1- Soma de 2 números. 
2- Diferença entre 2 números (maior pelo menor). 
3- Produto entre 2 números. 
4- Divisão entre 2 números (o denominador não pode ser zero). 
O seu programa deve retornar o resultado de acordo com a opção escolhida pelo  usuário, obedecendo as restrições existentes em algumas 
das opções (caso sejam  escolhidas). 
*/
/* int main(){
        int  num1, num2;
        int opcao;
        printf("Informe dois numeros interios: ");
        scanf("%d %d", &num1, &num2);
        printf("Escolha a opcao: \n1) Para a soma dos numeros, \n2) A diferenca dos numeros, \n3) O produto dos numeros, \n4) A divisao dos numeros\n");
        scanf("%d", &opcao);
        if (opcao == 1){
                printf("A soma dos numeros eh: %d", (num1 + num2));
        }
        else if (opcao == 2){
                if (num1 > num2){
                        printf("A diferenca entre os numeros eh: %d", (num1 - num2));
                }
                else {
                        printf("A diferenca entre os numeros eh: %d", (num2 - num1));
                }
        }
        else if (opcao == 3){
                printf("O produto entre os numeros eh: %d", (num1 * num2));
        }
        else if (opcao == 4){
                if (num2 == 0){
                        printf("Programa encerrado");
                } 
                else{
                        printf("O valor da divisao eh: %d",(num1/num2));
                }

        }

 return 0;
} */

/* 4. As tarifas de certo parque de estacionamento são as seguintes:  
1ª e 2ª hora - R$ 1,00 cada  
3ª e 4ª hora - R$ 1,40 cada  
5ª hora e seguintes - R$ 2,00 cada 

O número de horas a pagar é sempre inteiro e arredondado por excesso. 
Deste  modo, quem estacionar durante 61 minutos pagará por duas horas, que é o mesmo  que pagaria se tivesse permanecido 120 minutos. 
Os momentos de chegada ao  parque e partida deste são apresentados na forma de pares de inteiros,  representando horas e minutos.
Por exemplo, o par 12 50 representará “dez para  a uma da tarde”. Pretende-se criar um programa que, lidos pelo teclado os  momentos de 
chegada e de partida, escreva na tela o preço cobrado pelo  estacionamento. 
Admite-se que a chegada e a partida se dão com intervalo não superior a 24 horas. 
Portanto, se uma dada hora de chegada for superior à da  partida, isso não é uma situação de erro, antes significará que a partida ocorreu
no  dia seguinte ao da chegada.  */
/* int main(){
        int horat, horac, horas, mint, minc, mins;
        float tarifa;
        printf("Informe a hora e minuto de chegada: ");
        scanf("%d %d", &horac, &minc);
        printf("Informe a hora e minuto de saida: ");
        scanf("%d %d", &horas, &mins);
        if (horac <= horas){
                horat = horas - horac;
        }else{
                horat = (horas+24) - horac;
        }
        
        mint = mins - minc;

        if (mint > 0 ){
                horat ++;
        }
        if (horat <= 2){
                tarifa = horat * 1;
        }
        else if (horat <=4){
                tarifa = horat * 1.4;
        }
        else{
                tarifa = horat * 2;
        }
        printf("A tarifa eh: %.2f", tarifa);
        


return 0;
} */

/*5. Uma empresa determinou um reajuste salarial de 5 % a todos os seus funcionários.  
Além disto, concedeu um abono de R$ 100,00 para aqueles que recebem até R$  750,00. 
Escreva um algoritmo que, dado o valor do salário de um funcionário,  informe para quanto ele será reajustado. */
/* int main(){
        float salario, reajuste;
        printf("Informe o valor de seu salario: ");
        scanf("%f", &salario);
        reajuste = (salario *5 / 100) + salario;
        if (salario <= 750.00){
                reajuste += 100.00;
        }
        printf("%.2f", reajuste );
return 0;
} */

/*6. Escrever um algoritmo que apresenta ao usuário menus de escolhas de pratos,  sobremesas e bebidas, de acordo com a tabela abaixo. 
O usuário pode escolher um dos pratos, uma das sobremesas e uma das bebidas  desse cardápio. A seguir, o algoritmo deve calcular e 
escrever o total de calorias  da refeição, com base nas calorias dos pratos escolhidos.
        PRATO                             SOBREMESA                        BEBIDA
        vegetariano (180 cal)             abacaxia (75cal)                 chá (20cal)
        peixe (230cal)                    sorvete diet (110cal)            suco de laranja (70cal)
        frango (250cal)                   mousse diet (170cal)             suco de melão(100cal)
        carne (350cal)                    mousse chocolate(200cal)         refrigerante diet (65cal)*/        

int main(){
        int cal;
        int opcao;
        printf("Digite a opcao desejada do PRATO:\n 1) vegetariano\n 2) peixe\n 3) frango\n 4) carne\n ");
        scanf("%d", &opcao);
        if (opcao == 1){
                cal = 180;
        }
        else if (opcao == 2){
                cal = 230;
        }
        else if (opcao == 3){
                cal = 250;
        }
        else if (opcao == 4){
                cal = 350;
        }
        printf("Digite a opcao desejada da SOBREMESA: \n 1) abacaxi\n 2) sorvete diet\n 3) mousse diet\n 4) mousse de chocolate\n ");
        scanf("%d", &opcao);
        if (opcao == 1){
                cal += 75;
        }
        else if (opcao == 2){
                cal += 110;
        }
        else if (opcao == 3){
                cal += 170;
        }
        else if (opcao == 4){
                cal += 200;
        }
        printf("Digite a opcao desejada da BEBIDA: \n 1) cha\n 2) suco de laranja\n 3) suco de melao\n 4) refrigerante diet\n ");
        scanf("%d", &opcao);
        if (opcao == 1){
                cal += 20;
        }
        else if (opcao == 2){
                cal += 70;
        }
        else if (opcao == 3){
                cal += 100;
        }
        else if (opcao == 4){
                cal += 65;
        }
        printf(" O total de calorias a ser consumida eh: %d cal", cal);

        return 0;
}