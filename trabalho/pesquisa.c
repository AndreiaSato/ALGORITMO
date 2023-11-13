#include <stdio.h>

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
MATRIZ - de 3 x 2 ( tres produtos em dois meses)
ESTRUTURA CONDICIONAL E LAÇOS DE REPETIÇÃO- percorre com os valores em cada mês e calcula a media e variações
na formação da função media e quando necessário

PEDE PARA USUÁRIO:
-NOME DO PRODUTO
-MESESES PARA COMPARAÇÃO [1] ou [2]: (exemplificar primeiro e segundo)
-PREÇO MENSAL: (exemplo: insere os 2 valores, primeiro e segundo mês)

DEVOLVE PARA O USUÁRIO:
 Nome dos Produtos  e a variação percentual de um mês para o outro */

 struct produto{
	char nome[100];
	float preco[2];
 } leite[3];

void nome_preco();
void calculo();

int main(){
int cod;

do{
printf("******* MENU *******\n");
printf("[1]- Cadastrar Amostra\n");
printf("[2]- Exibir Informacoes das Amostras\n");
printf("[3]- Encerrar Programa\n");
scanf("%d", &cod);

	switch (cod){
		case 1:{
		    nome_preco();
			break;
		}
		case 2:{

			break;
		}	
		case 3:{
			printf("Saindo...");
			break;
		}
		default:{
			printf("Opcao Invalida!");
	} } }
	while (cod != 3);
return 0;
 }

void nome_preco(){
	for(int i=0; i < 3; i++){
		printf("Informe o Nome da amostra %d: ", i+1);
		scanf(" %c", &leite[i].nome);
		fflush(stdin);
		
		printf("Informe o valor da amostra no primeiro mes: R$");
		scanf("%f",&leite[i].preco[0]);
	
	    printf("Informe o valor da amostra no segundo mes: R$");
		scanf("%f",&leite[i].preco[1]);
		}
}
void calculo(){ // variacao percentual
	for 
}



