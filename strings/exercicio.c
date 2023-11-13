#include<stdio.h>
#include <string.h>

/* int main(){
    char nome [20];
    printf("PALAVRA: ");
    scanf("%s", nome);
    printf("PALAVRA %s", nome);
    return 0;
} */


// GETS () - recebe strigs

/* int main(){
    char nome [20];
    printf("PALAVRA: ");
    gets( nome);
    printf("PALAVRA %s", nome);
    return 0;
} */

// para o scanf pegar toda a palavra até o final :        scanf("% [^\n] s", nome)
// bibliotecas strings:  strlen ( tamanho )/ 

/* int main(){
    char nome [100];
    int tamanho;
    printf("PALAVRA: ");
    scanf("%[^\n]s", nome);
    tamanho = strlen (nome);
    printf("PALAVRA TAMANHO %d\n", tamanho);
    return 0;
} */

// biblioteca para comparar uma palavra com a outra : strcmp (compara duas strings) - stricmp (ignora a letra maiuscula)

/* int main(){
    char nome1 [20];
    char nome2 [50];
    printf("PALAVRA1: ");
    scanf("%[^\n]s", nome1);
    fflush (stdin);
    printf("PALAVRA2: ", nome2);
    scanf("%[^\n]s", nome2);
    if ( stricmp(nome1,nome2) == 0){
        printf("NOMES IGUAIS\n");
    }
    else{
        printf("NOMES DIFERENTES\n");
    }
    return 0;
} */

// biblioteca para faz copia - strcpy

/* int main(){
     char nome1[50], nome2[50];
     printf("PALAVRA: ");
     scanf("%[^\n]s", nome1);
     strcpy (nome2,nome1);
     printf("NOME 2: %s", nome2);
    return 0;
} */

//strcat - concatena a segunda string no final da primeira
/* int main(){
     char nome1[50], nome2[50];
     printf("PALAVRA1: ");
     scanf("%[^\n]s", nome1);
     printf("PALAVRA2: ");
     scanf(" %[^\n]s", nome2);
     fflush(stdin);
     strcat (nome1,nome2);
     printf("CONCATENADO: %s",nome1, nome2 );
    return 0;} */

//                                           EXERCICIOS

/* ESCREVA UM ALGORITMO QUE RECEBE UMA STRING DO USUARIO E IMPRIMA AS QUATRO PRIMEIRAS LETRAS DESSA STRING */

/* int main(){
char palavra[50];
int  i=0;
printf("PALAVRA: ");
scanf("%[^\n]s",palavra);
for (i; i<4; i++){
  printf("LETRAS: %c\n ",palavra[i]); 
}
return 0;
} */

/* ESCREVA UM ALGORITMO QUE RECEBE UMA STRING DO USUÁRIO E IMPRIMA AS LETRAS DAS POSIÇÕES ÍMPARES */

/* int main(){
    char nome[50];

    printf("NOME:");
    scanf("%[^\n]s", nome);
    printf("POSICOES IMPARES:");
    for( int i=1; i < strlen(nome); i = i +2){
     printf("%c", nome[i]);
    }
    return 0;
} */

/* ESCREVA UM ALGORITMO QUE RECEBE DUAS STRINGS DO USUARIO E AS COLOCA EM ORDEM ALFABÉTICA */
/*  int main(){
 char palavra1 [50], palavra2[50];
 int comp;
 printf("PRIMEIRA PALAVRA: ");
 scanf("%[^\n]s", palavra1);

 printf("SEGUNDA PALAVRA: ");
 scanf(" %[^\n]s", palavra2);
 
 comp = strcmp (palavra1, palavra2);
 if( comp < 0 ){
        printf("%s - %s\n", palavra1, palavra2);
    }
    else if (comp > 0){
        printf("%s - %s\n", palavra1, palavra2);
    }
    else{
        printf("OS NOMES SAO IGUAIS\n");
    }
 
    return 0;
 } 




 // TESTE


int main(){
int mat[3][3];
int i, j;
for(i=0; i<3; i++){
    for(j=0; j<3; j++){
        printf(" INSIRA O ELEMENTO DA LINHA  %d , COLUNA  %d: ", i,j);
        scanf("%d", &mat[i][j]);
    }
}
    return 0;
}






/* 
ESCREVA UM ALGORITMO QUE RECEBE UMA STRING E UMA LETRA DO USUÁRIO E RETORNE QTS VEZES ESSA LETRA APARECE NA STRING INFORMADA*/