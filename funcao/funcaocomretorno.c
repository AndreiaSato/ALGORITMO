#include <stdio.h>

/* int soma(int num1, int num2);

int main(){
    int num1, num2, resultado;
    printf("INFORME DOIS NUMEROS: ");
    scanf("%d %d", &num1, &num2);
    resultado = soma ( num1 , num2);
    printf("A SOMA DOS NUMEROS EH: %d", resultado);
    return 0;
}

int soma(int num1, int num2){
    int resultado = num1 + num2;
    return resultado;
} */

/* Escreva uma função que recebe um número inteiro como parâmetro e retorna a soma de 0 até o número informado. */
/* int soma (int num);

int main(){
    int num, resultado;
    printf("INFORME UM NUMERO:");
    scanf("%d", &num);
    resultado = soma(num);
    printf("A SOMA DOS NUMEROS EH: %d", resultado);

    return 0;
}

int soma (int num){
    int resultado =0,  i;
    
    for (i=0; i<= num; i++){
       resultado = soma + i;
    }
    return resultado;
} */

/* Escreva uma função em C que recebe um número inteiro como parâmetro e que retorne o fatorial desse número. */

/* int fat(int num);

int main (){
    int num, resultado;
    printf("INFORME UM NUMERO: ");
    scanf("%d", &num);
    resultado = fat (num);
    printf("O FATORIAL DE %d EH: %d ", num, resultado);

    return 0;
}

int fat(int num){
    int resultado = 1, i;
    for (i = 1; i<=num; i++){
        resultado = resultado * i;
    }
    return resultado;
} */
/* Escreva uma função em C recebe dois números inteiro como parâmetro e retorne o maior valor. */
/* int maior (int num1, int num2);

int main(){
    int num1, num2;
    printf(" INFORME DOIS NUMEROS: ");
    scanf("%d %d", &num1, &num2);
    printf(" O MAIOR NUMERO EH: %d", maior(num1, num2));
    return 0;
}

int maior (int num1, int num2){
    int maior;
    if (num1 > num2){
        maior = num1;
    }
    else {
        maior = num2;
    }
return maior;
} */

/* Construir uma função em C que determine o maior de três números inteiros, usando a função anterior. */

/*int maior (int num1, int num2);
int ;

 int main (){
     int num3;
     int num1, num2;
        printf(" INFORME DOIS NUMEROS: \n");
        scanf("%d %d", &num1, &num2);
        
        printf("INFORME 1 NUMEROS: \n");
        scanf("%d", &num3);
        
     printf("O MAIOR NUMERO EH O : %d", maiordetres (num1, num2, num3));

    return 0;
}
int maior (int num1, int num2){
    int maior;
    if (num1 > num2){
        maior = num1;
    }
    else {
        maior = num2;
    }
return maior;
}
int maiordetres (int num1, int num2, int num3){
    int maiorvalor = maior ( num1, num2);
    maiorvalor = maior(maiorvalor, num3);

    return maiorvalor;
} */

/* Faça uma função que recebe por parâmetro a altura e o sexo de uma pessoa e retorna o seu peso ideal.
- Homens = 72.7 x altura – 58 
- Mulheres = 62.1 x altura - 44.7 */

float pesoideal (float altura, char sexo);

int main(){
    float peso, altura;
    char sexo;
    printf(" SEXO: ");
    scanf(" %c", &sexo);
    printf("ALTURA: ");
    scanf("%f", &altura);
    peso = pesoideal(altura, sexo);
    if (peso == -1){
        printf("SEXO INVALIDO!");
    }
    else {
         printf("o seu peso ideal eh: %f",peso );
    }
   

    return 0;
}

float pesoideal (float altura, char sexo){
    float peso = -1;
    if (sexo == 'M' || sexo == 'm'){
        peso == 72.7 * altura - 58;
    }
    else if (sexo == 'F' || sexo == 'f'){
        peso == 62.1 * altura - 44.7;
    }
    return 0;
}
