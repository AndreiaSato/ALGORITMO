#include <stdio.h>

/* Escreva um algoritmo que recebe um número posiBvo do usuário e imprime os números de 1 até o número informado. Caso o número negaBvo, o seu
algoritmo deve imprimir a mensagem: “O número deve ser posiBvo!”. */

/* int main (){
    int num, cont;
    cont = 1;
    printf("Informe um numero: ");
    scanf("%d", &num);
    if (num >= 0){
        while  (cont <= num){
            printf("%d", cont);
            cont += 1;}
        }
    else{
        printf("O numero deve ser positivo!");
    }
        
 return 0;
} */

 /* Escreva um algoritmo que recebe um número posiBvo do usuário e imprime do número informado até o número 1. Caso o número negaBvo, o seu algoritmo
deve imprimir a mensagem: “O número deve ser positivo!”.
• Exemplo: se o número informado for 5, o algoritmo deve imprimir a seguinte sequência: 5 4 3 2 1 */

/* int main(){
    int num;
    
    printf(" Informe um numero qualquer: ");
    scanf("%d", &num);
    if (num >= 0){
        while ( num >= 1){
            printf("%d", num);
            num -= 1;
        }  
    }
    else{
         printf("O numero deve ser positivo!");
        }
        return 0;
} */

 /* Escrever um algoritmo que recebe 5 números do usuário, calcula e imprime a soma desses números. */

/*  int main(){
    int num, soma, cont;
    cont = 1;
    soma = 0;
        while (cont <= 5){
        
        printf("Informe cinco numeros: ");
        scanf("%d", &num);
        soma = soma + num;
        cont += 1;
    }
   
    printf("A soma dos numeros eh:%d", soma);
    return 0;
    
 } */

 /*  Escrever um programa que recebe 10 números do usuário, calcula e retorna a média desses números */

/*     int main(){
    int num, media,soma, cont;
    cont = 0;
    soma = 0;

       while ( cont < 10){ // cont = 0 ( < 10) cont = 1 ( <= 10)
        printf("Informe 10 numeros: ");
        scanf("%d", &num);
        soma = soma + num;
        printf("%d\n", soma);
        cont +=1;
       }
         media = soma/10 ;
        printf("A media dos numeros eh: %d", media);
       return 0;     
 }  */

  /* Escrever um algoritmo que recebe um número inteiro posivo informado pelo usuário e que escreve a soma de todos os números
inteiros, desde 0 até o valor lido */

/*     int main(){
    int num, soma, cont;
    cont = 0;
    soma = 0;

    printf("Informe o limite: ");
    scanf("%d", &num);

     while ( cont <= num){
        soma = cont + soma;
        cont += 1;
     }

    printf("A soma dos numeros eh:%d", soma);
    return 0;
} */ 

/* Escreva um algoritmo que recebe um número inteiro não negativo do usuário, calcula e escreve o valor do fatorial desse número. Caso
o usuário informe um número negativo imprimir a mensagem
“Número inválido!” */

/*     int main(){
    int num, fac;
   //O fatorial de um número é o produto dele pelos seus antecessores maiores que 0
    printf(" informe um numero: ");
    scanf("%d", &num),
    fac = num;
    if (num > 0){
        while (num > 1){
            fac = fac * (num - 1);
            num -= 1;
        }
    printf(" O valor da factorial eh %d", fac);
    }
    else{
    printf("Numero NEGATIVO invalido!");
    }
    return 0;
} */

// segunda resolução:
/* int main(){
int num, fac;
printf("Informe um numero: ");
scanf("%d", &num);
if (num <= num){
    printf("Numero invalido");
}
else{
    while(cont <= num){
        fat = fat * cont;
        cont ++;
    }
    printf("O factorial de %d eh %d", num, fac);

}
return 0;
} */
 
/*  Escreva um algoritmo que recebe n números informados pelo usuário (o n é definido pelo usuário), calcula e imprime a soma dos
números pares e a média dos números ímpares. */

/*  int main(){
    int n, valor, qtd = 0, somai = 0, somap = 0, media, cont = 1;
    printf("Informe o valor de n: ");
    scanf("%d", &n);
    if (n > 0){
        while (cont <=  n){
            printf("Informe  valores para n: ");
            scanf("%d", &valor);

              if (valor % 2 == 0){
              somap = somap + valor;
              }
              else {
                somai = somai + valor;  
                qtd ++;
              }
        cont += 1;
        }
     media = somai / qtd;
    printf("A media dos numeros impares sao:%d\n", media);
    printf("A soma dos numeros pares sao: %d", somap);
    }
 return 0; 
}  */
/* int main(){
    int qtd, cont = 1, somaPares = 0, somaImpares = 0;
    int impares = 0, n;
    printf("Informe a quantidade de numeros: ");
    scanf("%d", &qtd);
    while (cont <= qtd){ 
        printf("Informe o %dº numero: ", cont);
        scanf("%d", &n);
        if (n%2 == 0){
            somaPares = somaPares +  n;
        }
        else{
            somaImpares += n;
            impares++;
        }
        cont++;
    }
    somaImpares = somaImpares/impares;
    printf("Soma dos Pares: %d\n", somaPares);
    printf("A media dos impares: %d\n", somaImpares);
    return 0;
} */



 /* Escreva um algoritmo que recebe vários números inteiros do usuário e calcula a média desses números. Nesse caso, a quan;dade
de números a serem informados é desconhecida. O seu algoritmo deve finalizar quando o usuário digitar o número zero, que não deve entrar no 
conjunto dos números a serem analisados. Ou seja, quando o usuário informar o número zero, o seu algoritmo deve
para de solicitar números ao usuário, calcular a soma dos números e imprimir os resultados. */

  /* int main(){
    int num, media, qtd = 0, soma = 0;
    
         while (num != 0){
             printf("Informe um numero: ");
             scanf("%d", &num);
             soma = soma + num;
              if (num != 0){
                qtd += 1;
              }
            media = soma / qtd;

         }
   
    printf("O resultado eh: %d", media);
    return 0;
} */

/*  Escreva um algoritmo que recebe vários números inteiros do usuário e verifica quem é o maior número e quem é o menor. Nesse
caso, a quantidade de números a serem informados é desconhecida. O seu algoritmo deve finalizar quando o usuário
digitar o número zero, que não deve entrar no conjunto dos números a serem analisados. */

 /*    int main(){
    int num, maior, menor;
    printf("Informe um numero: ");
    scanf("%d", &num);
    maior = num;
    menor = num;
    while ( num != 0){     

        if (num > maior){
            maior = num;
        }
        else if (num < menor){
            menor = num;
        }
        printf("Informe um numero: ");
        scanf("%d", &num);
    }
    printf("Maior: %d\n", maior);
    printf("Menor: %d\n", menor);
    return 0;
}  */
 
/* ESCREVA UM ALGORITMO QUE RECEBE 10 NUMEROS DO USUARIO VERIFICA E IMPRIME O MAIOR E O MENOR */

/* int main(){
    int num, maior, menor, cont = 1;
    while (cont <= 10){
        printf("informe um numero: ");
        scanf("%d", &num);
        if (cont == 1){
            maior = num;
            menor = num;
        }
        else{
            if (num > maior){
                maior = num;
            }
            else if (num < menor){
                menor = num;
            }
        }
        cont++;  
    }

    printf("O maiior numero eh %d\n", maior);
    printf("O menor numero eh %d", menor);

     return 0; */



/*Escreva um algoritmo que recebe vários números inteiros do usuário e calcula a média desses números. Nesse caso, a quan=dade de números a 
serem informados é desconhecida. O seu algoritmo deve finalizar quando o usuário digitar o número zero,
que não deve entrar no conjunto dos números a serem analisados. Ou seja, quando o usuário informar o número zero, o seu algoritmo deve para 
de solicitar números ao usuário, calcular a média dos números e imprimir os resultados. */

/* int main(){
    int num, soma = 0, total = 0;
    printf("Informe um numero: ");
    scanf("%d", &num);

    while ( num != 0){    
        soma = soma + num;
        total = total +1;
        printf("Informe um numero: ");
        scanf("%d", &num);
    }
    soma = soma / total;
    printf("media dos numeros: %d ", soma);
    
    return 0;
}  */
/*  Escrever um programa que recebe 10 números do usuário, calcula e retorna a SOMA desses números */

/* int main(){
int num, soma = 0, cont = 0;

    do 
    { printf("Informe um numero: ");
    scanf("%d", &num); 
    soma = soma + num;
    cont++;
    } 
    while(cont < 10);
    
    printf("A soma dos numeros eh: %d", soma);
    
  
    return 0;
} */