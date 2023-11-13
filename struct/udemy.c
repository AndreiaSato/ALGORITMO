/* EXEMPLOS DE STRUCTS COM FORMATOS DIFERENTES */
#include <stdio.h>
#include <string.h>

/* struct st_aluno
{
    char matricula[10];
    char nome[100];
    char curso[50];
    int ano_nascimento;
};
int main(){
    struct st_aluno aluno1;
    printf("Informe o nome do aluno:");
    fgets(aluno1.nome,100,stdin);

    printf("Informe a matricula do aluno: ");
    fgets(aluno1.matricula,10,stdin);

    printf("Informe o curso do aluno: ");
    fgets(aluno1.curso,50,stdin);

    printf("Informe seu ano de nascimento: ");
    scanf("%d", &aluno1.ano_nascimento);

    printf("************* DADOS DO ALUNO ************\n");
    printf("Nome do aluno: %s\n", aluno1.nome);
    printf("Matricula:%s\n", aluno1.matricula);
    printf("Curso:%s\n", aluno1.curso);
    printf("Ano de Nascimento:%d\n", aluno1.ano_nascimento);

    return 0;
} */

/* OU */

/* struct st_aluno
{
    char matricula[10];
    char nome[100];
    char curso[50];
    int ano_nascimento;
} aluno1;
int main(){
   
    printf("Informe o nome do aluno:");
    fgets(aluno1.nome,100,stdin);

    printf("Informe a matricula do aluno: ");
    fgets(aluno1.matricula,10,stdin);

    printf("Informe o curso do aluno: ");
    fgets(aluno1.curso,50,stdin);

    printf("Informe seu ano de nascimento: ");
    scanf("%d", &aluno1.ano_nascimento);

    printf("************* DADOS DO ALUNO ************\n");
    printf("Nome do aluno: %s\n", aluno1.nome);
    printf("Matricula:%s\n", aluno1.matricula);
    printf("Curso:%s\n", aluno1.curso);
    printf("Ano de Nascimento:%d\n", aluno1.ano_nascimento);

    return 0;
} */


/* OU  COM VETOR */

/* struct st_aluno
{
    char matricula[10];
    char nome[100];
    char curso[50];
    int ano_nascimento;
} alunos[5];

int main(){
   /*  struct st_aluno aluno1; /
   for(int i=0; i<5; i++){
        printf("Informe o nome do aluno:");
        fgets(alunos[i].nome,100,stdin);

        printf("Informe a matricula do aluno: ");
        fgets(alunos[i].matricula,10,stdin);

        printf("Informe o curso do aluno: ");
        fgets(alunos[i].curso,50,stdin);

        printf("Informe seu ano de nascimento: ");
        scanf("%d", &alunos[i].ano_nascimento);
        getchar();
   }
    for(int i=0; i<5; i++){
        printf("************* DADOS DO ALUNO ************\n" ,i+1);
        printf("Nome do aluno: %s\n", alunos[i].nome);
        printf("Matricula:%s\n", alunos[i].matricula);
        printf("Curso:%s\n", alunos[i].curso);
        printf("Ano de Nascimento:%d\n", alunos[i].ano_nascimento);
   }
    return 0;
} */
/* OU     */

struct st_contato
{
    char nome [100];
    int ano_nascimento;
    char telefone [20];
    char email [100];
};
struct st_agenda{
    struct st_contato contatos[100];
} agenda;

    int main(){
      for(int i=0; i<2; i++){
        printf("Informe o nome: ");
        fgets(agenda.contatos[i].nome,100,stdin);

        printf("Informe seu ano de nascimento: ");
        scanf("%d", &agenda.contatos[i].ano_nascimento);
        getchar();

        printf("Informe o telefone: ");
        fgets(agenda.contatos[i].telefone,20,stdin);

        printf("Informe o e-mail: ");
        fgets(agenda.contatos[i].email,100,stdin);  
   }
      for(int i=0; i<2; i++){
        printf("************* CONTATO %d ************\n" ,i+1);
        printf("Nome: %s\n", agenda.contatos[i].nome);
        printf("Ano de Nascimento:%d\n", agenda.contatos[i].ano_nascimento);
        printf("Telefone:%s\n", agenda.contatos[i].telefone);
        printf("E-mail:%s\n", agenda.contatos[i].email);    
   }
    return 0;
}

