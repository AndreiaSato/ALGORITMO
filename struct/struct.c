#include <stdio.h>
/*  Crie um algoritmo em C que implemente um registro de aluno com os campos nome, número de registro acadêmico e código do curso.
Dentro do método main, implemente uma variável do 7po aluno, peça ao usuário para informar valores para os campos e imprima os
valores informados */
/* 
struct aluno{
    char nome [50];
    int Ra;
    int numCurso;
};

int main(){
    struct aluno a1;
    printf("INFORME O NOME DO ALUNO: \n");
    scanf("%[^\n]s", a1.nome);

    printf("INFORME O RA DO ALUNO: \n");
    scanf("%d", &a1.Ra);

    printf("INFORME O NUMERO DO CURSO: \n");
    scanf("%d", &a1.numCurso);

    printf("DADOS DO ALUNO: %s, %d, %d", a1.nome, a1.Ra, a1.numCurso);
    return 0;
} */

/* • Defina uma estrutura que irá representar bandas de música. Essa
estrutura deve ter o nome da banda, o es7lo de música que ela toca, o número de integrantes e em que posição do ranking essa
banda está dentre as suas 5 bandas favoritas.Crie um algoritmo que possua um registro da banda, preencha os
campos e imprima os dados da banda na tela. */
/*  struct banda
 {
    char nome [50];
    char estilo [50];
    int totalIntegrantes;
    int rank;

 };
 int main(){
    struct banda b1;
    printf("Informe o nome da banda: \n");
    scanf("%[^\n]s", b1.nome);
    fflush(stdin);
    printf("Informe o estilo musical: \n");
    scanf("%[^\n]s", b1.estilo);
    fflush(stdin);
    printf("Informe a qtd de integrantes: \n");
    scanf("%d", &b1.totalIntegrantes);
    printf("Informe o rank: \n");
    scanf("%d", &b1.rank);

    printf("Dados da banda:\n");
    printf("%s\n %s\n %d\n %d\n",b1.nome, b1.estilo, b1.totalIntegrantes, b1.rank);

    return 0;
 } */

/* Crie um algoritmo que crie uma estrutura de aluno (como no exercício anterior) e um vetor de alunos. Solicite ao usuário que
informe os dados de três alunos. Por fim, imprima os dados dos alunos. */
struct aluno{
    char nome [50];
    int Ra;
    int numCurso;
};

int main(){
    struct aluno alunos[3];
    //preencher o vetor
    for(int i=0; i<3; i++){
    printf("INFORME O NOME DO ALUNO na posiccao %d:\n", i);
    scanf("%[^\n]s", alunos[i].nome);
    fflush(stdin);

    printf("INFORME O RA DO ALUNO: \n");
    scanf("%d", &alunos[i].Ra);

    printf("INFORME O NUMERO DO CURSO: \n");
    scanf("%d", &alunos[i].numCurso);
    }

    printf("DADOS DOS ALUNOS:");
    for (int i; i<3; i++){
        printf("Nome:%s, RA:%d, Numero do Curso:%d ", alunos[i].nome, alunos[i].Ra, alunos[i].numCurso);
    }

    return 0;
}

/* Crie um programa que permita armazenar o nome, a altura e idade de 10 pessoas. Cada pessoa deve ser representada por uma struct
dentro de um vetor. Depois, o programa deve iden7ficar a pessoa mais velha e imprimir seus dados. */
/* 
struct pessoa{
    char nome[50];
    double altura;
    int idade;
};
int main(){
    struct pessoa pessoas[10];
    int maior, posicao;
    //preenchendo o vetor
    for(int i = 0; i<10; i++){
        printf("Preenchendo os dados da pessoa: %d\n",i);
        printf("Informe seu nome: ");
        fflush(stdin);
        scanf("%[^\n]s", pessoas[i].nome);
        
        printf("Informe sua altura: ");
        scanf("%lf", &pessoas[i].altura);
        printf("Informe a sua idade: ");
        scanf("%d", &pessoas[i].idade);
        }
        maior = pessoas[0].idade;
        posicao =0;

        for( int i=1; i<10; i++){
            if (maior <pessoas[i].idade){
                maior=pessoas[i].idade;
                posicao = i;
            }
        }
        printf("Pessoa mais velha: \nNome: %s\nAltura: %2.lf\n Idade: %d\n", pessoas[posicao].nome, pessoas[posicao].altura, pessoas[posicao].idade );
    /*  return 0; */

