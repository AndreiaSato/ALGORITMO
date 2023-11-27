#include <stdio.h>
 struct produto{
	char nome[50];
	float preco[2];
 } leite[3];

void nome_preco();
void var_precos();
void var_positiva();
void var_negativa();

int main(){
int cod;

do{
printf("******* MENU *******\n");
printf("[1]- Cadastrar Amostra\n");
printf("[2]- Exibir Informacoes das Amostras\n");
printf("[3]- Variacao Positiva:\n");
printf("[4]- Variacao Negativa\n");
printf("[5]- Encerrar Programa\n");
scanf("%d", &cod);

	switch (cod){
		case 1:{
		    nome_preco();
			break;
		}
		case 2:{
			var_precos();
			break;
		}	
		case 3:{
			var_positiva();
			break;
		}
		case 4:{  
			var_negativa(); 
			break;
		}
		case 5:{ 
			printf("Saindo...");
			break;

		}
		default:{
			printf("Opcao Invalida!");
	} } }
	while (cod != 5);
return 0;
 }



void nome_preco(){
	for(int i=0; i < 3; i++){
		printf("Informe o Nome da amostra %d: ", i+1);
		scanf(" %[^\n]s", &leite[i].nome);
		fflush(stdin);
		
		printf("Informe o valor da amostra no primeiro mes: R$ ");
		scanf("%f",&leite[i].preco[0]);
	
	    printf("Informe o valor da amostra no segundo mes: R$ ");
		scanf("%f",&leite[i].preco[1]);
		}
}

void var_precos(){
    float variacaoP;

printf("************** RESULTADO ***************\n");

	for(int i=0; i<3; i++){
		variacaoP = ((leite[i].preco[1] - leite[i].preco[0])/leite[i].preco[0])*100;
        printf("A variacao percentual de %s eh %.2f %%\n", leite[i].nome, variacaoP);			
	}
}

void var_positiva(){
	    float variacaoP;

	for(int i=0; i<3; i++){
		variacaoP = ((leite[i].preco[1] - leite[i].preco[0])/leite[i].preco[0])*100;
     
			if (variacaoP >= 0){
				printf("A variacao positiva de %s eh %2.f %%\n", leite[i].nome, variacaoP);
			}
	}
}
void var_negativa(){
		float variacaoP;

	for(int i=0; i<3; i++){
		variacaoP = ((leite[i].preco[1] - leite[i].preco[0])/leite[i].preco[0])*100;
    
			if (variacaoP <= 0){
				 
				printf("A variacao negativa de %s eh %2.f %%\n", leite[i].nome, variacaoP);
			}
	}
	}
	
/* TRABALHO DE ALGORITMO
ESTUDO DE CASO:
* CONTER UM MENU
* POSSUIR PELO MENOS UM REGISTRO;
* POSSUIR PELO MENOS 2 FUNÇÕES
* FAZER USO DE PELO MENOS UM VETOR OU MATRIZ
* DEVE USAR ESTRUTURAS CONDICIONAIS E LAÇOS DE REPETIÇÃO;

DESCRIÇÃO:
Um programa para analisar média e variação de preços de determinados produtos cadastrados pelo usuário
Pesquisa para avaliar variação de preço de leite de 3 marcas em dois meses.
Usaremos:
MENU - para gerar o cód do produto,
REGISTRO - inserir os dados ( nome do produto e preço)
FUNÇÃO - para ler os dados do registro e para calcular a média e variação dos preços
VETOR [2] -  ( tres produtos em dois meses)
VETOR DE STRUCT -
ESTRUTURA CONDICIONAL E LAÇOS DE REPETIÇÃO- percorre com os valores em cada mês e calcula a media e variações
na formação da função media e quando necessário

PEDE PARA USUÁRIO:
-NOME DO PRODUTO
-MESESES PARA COMPARAÇÃO [1] ou [2]: (exemplificar primeiro e segundo)
-PREÇO MENSAL: (exemplo: insere os 2 valores, primeiro e segundo mês)

DEVOLVE PARA O USUÁRIO:
 Nome dos Produtos  e a variação percentual de um mês para o outro */

