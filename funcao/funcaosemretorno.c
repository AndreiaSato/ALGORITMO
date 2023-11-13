// CHAMADA PROCEDIMENTO POIS NÃO RETORNA NADA

# include <stdio.h>

/* void imprimeCaracteres();

int main (){
imprimeCaracteres();
printf ("EU GOSTO DA LINGUAGEM C \n");
imprimeCaracteres();
printf("CURSO DE ANALISE E DESENVOLVIMENTO DE SISTEMAS \n");
imprimeCaracteres();

    return 0;
}
void imprimeCaracteres (){
    int i;
    for (i=1; i<=60; i++){
        printf("%c", '*');
    }
    printf("\n");
} */

/* void soma (int n1,  int n2);
int main (){
    int n1, n2; // esses n1 e n1 não é o mesmo do escopo da função
    printf("INFORME DOIS NUMEROS: ");
    scanf("%d %d", &n1, &n2);
    soma (n1, n2);
    return 0;
}

void soma (int n1, int n2){
    int s = n1 + n2;
    printf("Soma: %d\n", s); // poderia não criar a variável e dentro do printf inserir o n1 + n2
} */
    
   // ****************************************************
/* 1. Escreva um procedimento que recebe um número como parâmetro e diz se
esse número é par ou ímpar. */

/* void parImpar (num);
int main(){
 int num;
 printf("INFORME UM NUMERO: ");
 scanf("%d", &num);
 parImpar(num);
    return 0;
}
void parImpar(num){
    if (num %2 == 0){
        printf("%d eh Par",num);
    }
    else
       printf("%d eh Impar", num);
} */


/* 2. Escreva um procedimento que recebe um número como parâmetro e diz se
esse número é primo. */
/* void primo (int num);

int main(){
 int num;
 printf("INFORME UM NUMERO: ");
 scanf("%d", &num);
 primo(num);
    return 0;
}
void primo(int num){
    int div = 0;
    int i;
    printf("%d\n", num);
    for (i =1; i <= num; i++) {
        
        if (num % i == 0){
            div++;}
    }
    
    if (div == 2){
        printf("Numero Primo");
    }
    else{
        printf("Nao eh primo");
    }
} */

/* 3. Escreva um procedimento que recebe como parâmetro as 3 notas de um
aluno por parâmetro e uma letra. Se a letra for A o procedimento calcula a
média aritméGca das notas do aluno e se for P, a sua média ponderada (pesos:
5, 3 e 2). O procedimento deve imprimir a média calculada. */ //n1*5, n2*3, n3*2 /10
/* void notasMedia (double n1, double n2, double n3, char media);


int main(){
double n1, n2, n3;
char opcao;

printf("Nota 1: ");
scanf ("%lf", &n1);
printf("Nota 2: ");
scanf ("%lf", &n2);
printf("Nota 3: ");
scanf ("%lf", &n3);
printf("MEDIA [A]- aritmetica ou [P]- ponderada: ");
scanf(" %c", &opcao);
notasMedia ( n1, n2, n3, opcao);

    return 0;
}
void notasMedia (double n1, double n2, double n3, char media){
    double m;
    if (media == 'A'){
        m = n1+n2+n3/3;
        printf("MEDIA ARITMETICA: %2.lf", m);
    }
    else if (media == 'P'){
        m = (n1*5+n2*3+n3*2)/10;
        printf("MEDIA PONDERADA: %2.lf", m);
    }
    else {
        printf("OPCAO DE MEDIA INVALIDA!)");
    }
} */
  

/* 4. Escreva um procedimento que receba como parâmetro o peso e a altura de
uma pessoa como parâmetro, calcule o seu IMC e imprima a sua classificação de acordo com a tabela baixo:
 abaixo do peso imc < 18.5
 peso normal  18.5>= imc <=25
 acima do peso 25 > imc <=30
 obeso imc > 30 */
void calcularIMC (double peso, double altura);

int main(){
    double peso, altura;
    printf("INFORME SEU PESO: \n");
    scanf("%lf", &peso);
    printf("INFORME SUA ALTURA (usando .): \n");
    scanf("%lf", &altura);
    
    calcularIMC (peso, altura);

    return 0;
}
void calcularIMC (double peso, double altura){
    double imc = peso/(altura*altura);
    if (imc < 18.5){
        printf("ABAIXO DO PESO");
    }
    else if (imc>= 18.5 && imc <=25){
        printf("PESO NORMAL");
    }
    else if (imc >25 && imc <=30){
        printf("ACIMA DO PESO");
    }
    else{
        printf("OBESO!");
    }
}