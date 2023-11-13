#include <stdio.h>
struct boletim{
float notas[2][2];
float media;
int passou;
};

struct alunos{
char nome[50];
int semestre;
struct boletim b;
};

int lerQtdAlunos(); // assinatura das funções
struct alunos lerAlunos(int numAluno);
struct boletim lerNotas();
float calcularMedia(struct boletim b);
int validarPassou(struct boletim b);
void mostraAlunos(struct alunos aluno);

int main(){

int i;
int qtdAlunos = lerQtdAlunos();
struct alunos aluno[qtdAlunos];

for(i=0; i<qtdAlunos; i++){
aluno[i] = lerAlunos(i);
struct boletim b= lerNotas();
aluno[i].b.media= calcularMedia(b);
aluno[i].b.passou =validarPassou(b);
}

for(i=0; i<qtdAlunos; i++){
mostraAlunos(aluno[i]);
}

return 0;
}
// criar funções
int lerQtdAlunos(){
	int qtda;
	printf("Digite a quantidade de alunos:");
	scanf("%d", &qtda);
	return qtda;
}

struct alunos lerAlunos(int numAluno){
	struct alunos a;
	printf("Digite o nome do aluno: ");
	scanf(" %s", a.nome);
	printf("Digite a semestre do aluno: ");
	scanf("%d", &a.semestre);
	return a;
}

struct boletim lerNotas(){
	struct boletim b;
	do{
	printf("Digite a nota do trabalho 1:");
	scanf("%f", &b.notas[0][0]);
}while(b.notas[0][0]<0 || b.notas[0][0]>10);
	do{
	printf("Digite a nota do trabalho 2:");
	scanf("%f", &b.notas[0][1]);
}while(b.notas[0][1]<0 || b.notas[0][1]>10);
	do{
	printf("Digite a nota da prova 1:");
	scanf("%f", &b.notas[1][0]);
}while(b.notas[1][0]<0 || b.notas[1][0]>10);
	do{
	printf("Digite a nota da prova 2:");
	scanf("%f", &b.notas[1][1]);
}while(b.notas[1][1]<0 || b.notas[1][1]>10);
return b;
}

float calcularMedia(struct boletim b){
    float media;
    media	= b.notas[0][0] + b.notas[0][1] + b.notas[1][0] + b.notas[1][1]/4;
	return media;
}

int validarPassou(struct boletim b){
    int passou;
    b.media	= b.notas[0][0] + b.notas[0][1] + b.notas[1][0] + b.notas[1][1] /4;
	if(b.media<6){
	passou = 0;
}
if(b.media>=6){
	passou = 1;
}
return passou;
}

void mostraAlunos(struct alunos aluno){
	printf("Nome do aluno: %s \n", aluno.nome);
	printf("semestre do aluno: %d \n", aluno.semestre);
	if(aluno.b.passou==0){
	printf("Reprovou com a media %.1f \n", aluno.b.media);
}
if(aluno.b.passou==1){
	printf("Aprovado com a media %.1f \n", aluno.b.media);
}
}