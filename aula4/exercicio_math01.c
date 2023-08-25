#include <stdio.h>
#include <math.h>
/*                                     SENO / COSSENO / TANGENTE                                   */
/* int main(){
    double angulo, seno, cosseno, tangente;
    printf("Informe o angulo: ");
    scanf("%lf", &angulo);
    seno = sin(angulo);
    cosseno = cos(angulo);
    tangente = tan(angulo);
    printf("Seno: %.2lf\n", seno);
    printf("Cosseno: %.2lf\n", cosseno);
    printf("Tangente: %.2lf\n", tangente);
    return 0;

} */

/*                                      RAIZ QUADRADA                                                 */

/* IMPLEMENTE UM ALGORISMO EM C QUE RECEBE UM NÚMERO DO USUÁRIO E IMPRIME A SUA RAIZ QUADRADA  */
/* int main(){

double num, raiz;
printf("Informe um numero:  ");
scanf("%lf", &num);
raiz = sqrt (num);
printf("A raiz quadrada de %.1lf eh %.1lf", num, raiz);
return 0;

} */
/*                                      POTÊNCIA                                                     */
/* INFORME DOIS ALGARISMO EM C QUE RETORNE A POTENCIA*/
/* int main(){
double x, y, resposta;
printf("Informe a base: ");
scanf("%lf", &x);
printf("Informe o expoente: ");
scanf("%lf", &y);
resposta = pow(x,y);
printf("O resultado eh %.lf", resposta);
return 0;

} */

/*                            FUNÇÕES DE ARREDONDAMENTO DE NUMEROS REAIS         floor/ ceil  / round/                 */

/* int main(){
 double valor, rfloor, rceil, rround;
 printf("Informe um numero: ");
 scanf("%lf", &valor);
 rfloor = floor (valor);
 rceil = ceil(valor);
 rround = round(valor);
 printf("Resultado da funcao floor: %.1lf\n", rfloor);
 printf("Resulatado da funcao ceil: %.1lf\n", rceil); 
 printf("Resultado da funcao round: %.1lf", rround); 

return 0; */ 

/*                                           NÚMERO ABSOLUTO                            */

/* int main(){
    double valor, absoluto;
    printf("Informe um numero: ");
    scanf("%lf", &valor);
    absoluto = fabs(valor);
    printf("Numero absoluto: %.2lf", absoluto);
    return 0;

} */

/*                           EXERCÍCIOS                                   */
/* ESCREVA UM ALGORITMO EM C QUE RECEBE DO USUÁRIO UM NUMERO E IMPRIME SEU QUADRADO E SEU CUBO*/
/* int main(){
    double num, quadrado, cubo;
    printf("Informe um numero: ");
    scanf("%lf", &num);
    quadrado = pow (num,2);
    cubo = pow (num,3);
    printf("O quadrado do numero %.2lf eh %.2lf e seu cubo %.2lf", num, quadrado, cubo);

    return 0;
} */

/* Escrever um algoritmo em C que recebe dois números do usuário e retorna a raiz quadrada da
multiplicação desses números*/
/* int main(){
    double num1;
    double num2;
    double raiz;
    double multi;

    printf("Informe dois numeros: ");
    scanf("%lf %lf", &num1, &num2);
    multi = num1 * num2;
    raiz = sqrt(multi);
    printf("A raiza quadrada eh %.2lf", raiz );

    return 0; 

} */
/*  Nesse exercício, você deve escrever um algoritmo para calcular o valor de um termo n de uma progressão aritmétrica (PA), que tem a
 seguinte fórmula: -- an = primeiro + (n-1)*razão --   Dessa forma, o algoritmo deve solicitar ao usuário que informe o valor do primeiro termo, o valor
da razão da P.A. e seu número de ordem (n), e deve imprimir o termo calculado a partir dos valores informados.*/
/* int main(){
    double primeiro,razao;
    double n,a;

    printf("Informe um valor para o primeiro termo: ");
    scanf("%lf", & primeiro);
    printf("Informe um valor para n: ");
    scanf("%lf", & n);
    printf("Informe um valor para a razao: ");
    scanf("%lf", & razao);

    a = primeiro + (n-1) * razao;
    printf("O resultado final eh:%.1lf", a);
    return 0;
} */

/*Construa um algoritmo em C que, tendo como dados de entrada dois pontos quaisquer no plano, P(x1,y1) e P(x2,y2) informados pelo usuário, 
calcule a distância entre eles. A fórmula que efetua tal cálculo é:*/
/*  int main(){
    double x1,x2,y1,y2, distancia;

    printf("Informe um valor para x1: ");
    scanf("%lf", &x1);
    printf("Informe um valor para x2: ");
    scanf("%lf", &x2);
    printf("Informe um valor para y1: ");
    scanf("%lf", &y1);
    printf("Informe um valor para y2: ");
    scanf("%lf", &y2);

    distancia = sqrt((pow(x2 - x1,2)) + (pow(y2 - y1,2)));
    printf("O resultado da distancia eh: %.2lf", distancia);

    return 0;

}  */
/*Escreva um algoritmo em C que recebe três números inteiros e posivos (A, B, C) informados pelo usuário e calcule a seguinte expressão:
R = (A + B)²  S = (B + C)²   */
/*  int main(){
    int a, b, c, R, S;
    printf("Informe tres numeros interios: ");
    scanf("%d %d %d", &a,&b,&c);

    R = pow(a + b, 2);
    S = pow(b + c,2);

    printf(" O valor de R eh %d, e de S eh %d", R, S);
    return 0;

}  */