#include <stdio.h>

/* int main(){
int n[10], i;

//preenchendo o vetor

for (i=0; i<=9; i++){
    n[i]=0;
}

//imprimindo o vetor

printf("%s %13s\n", "ELEMENTO", "VALOR");
for (i=0; i<10; i++){
    printf("%7d %13d\n", i, n[i]);
}

    return 0;
} */
/* int main(){
int i, n[10] = {32, 27, 64, 18, 95, 14, 90, 70, 60, 37};
//imprimindo o vetor
printf("%s%13s\n", "Elemento", "Valor");
for(i = 0; i <= 9 ; i++){
printf("%7d%13d\n", i, n[i]);
}
return 0;
} */

/* 2. Escreva um algoritmo em C que cria um vetor de 10 posições,
preenche o mesmo com os números pares a partir do 2 e depois
imprime o conteúdo do vetor. */
/* int main(){
    int vetor[10], i;
    for(i = 0; i < 10; i++){
        vetor[i] = 2*(i+1);
    }

    for(i = 0; i < 10; i++){
        printf("[%d]: %d\n", i, vetor[i]);
    }
    return 0;
} */

/* 3. Escrever um algoritmo que recebe como entrada 10 números
inteiros informados pelo usuários e os armazena em um vetor. Logo
após o seu algoritmo deverá imprimir os valores armazenados. */

/* int main(){
    int i, num[10];

    for (i=0; i<10; i++){
        printf("DIGITE UM NUMERO: ");
        scanf("%d",&num[i]);
       
    }
    for( i=0; i<10; i++){
         printf("%d\n", num[i]);
    }
return 0;
} */

/* 4. Escreva um algoritmo em C que recebe como entrada 10 números
inteiros informados pelo usuários e os armazena-os em um vetor.
Depois, o seu algoritmo deve calcular a soma e a média dos
números armazenados. Ao final, o seu algoritmo deve imprimir o
vetor, a soma e a média de seus elementos */

int main(){
    int vet[10], i, soma = 0;
    double media;
    for(i = 0; i < 10; i++){
        printf("Informe o numero da posicao %d:\n", i);
        scanf("%d", &vet[i]);
    }

    for(i = 0; i < 10; i++){
        soma = soma + vet[i];
    }

    media = soma/10.0;

    printf("Soma: %d; Media: %.2lf\n", soma, media);
    return 0;
}