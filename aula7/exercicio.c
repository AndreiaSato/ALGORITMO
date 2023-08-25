/* switch  só aceita int e char */
/* #include <stdio.h>

int main(){
    int num;

    printf("Informe um numero de 1 a 7: ");
    scanf("%d", &num);

    switch (num){
    
    case 1: {
        printf("Domingo");
        break;
    }
     case 2: {
        printf("Segunda - feira");
        break;
     }
     case 3: {
        printf("Terça- feira");
        break;
     }
     case 4: {
        printf("Quarta- feira");
        break;
     }
     case 5: {
        printf("Quinta - feira");
        break;
     }
     case 6: {
        printf("Sexta - feira");
        break;
     }
     case 7: {
        printf("Sabado");
        break;
     }
     default:{
        printf("dia Invalido!");
        }
    }
    return 0;

} */

/* CRIE UM PROGRAMA QUE RECEBE DO USUARIO O CONCEITO DE UM ALUNO EM UMA DISCIPLINA E IMPRIME SEU 
SIGNIFICADO, DE ACORDO COM A TABELA ABAIXO. CASO SEJA INFORMADO UM CONCEITO INEXISTENTE, DEVE SER EXIBIDA UMA MENSAGEM DE ERRO*/

/* int main(){
    char conceito;
    printf("Informe seu conceito (A, B, C, D): ");
    scanf("%c", &conceito);
     switch (conceito)
     {
     case 'A':{
        printf("Exelente");
        break;
     }
        
     case 'B': {
        printf("Bom");
        break;
     }
     case 'C':{
        printf("Regular");
        break;
     }
     case'D': {
        printf("Reprovado");
        break;
     }

     default:{
        printf("Invalido");
     }
        
 }
return 0;
} */
/* ESCREVA UM ALGORITMO EM C QUE INICIALMENTE RECEBA DO USUARIO DOIS NUMEROS. APÓS ISSO, O SEU ALGORITMO DEVE SOLICITAR AO USUARIO
 QUE SELECIONE UMA DAS OPÇÕES: +, -,* OU /. POR FIM, O SEU ALGORITMO DEVE IMPRIMIR O RESULTADO DA OPERAÇÃO SELECIONADA APLICADA AOS NUMEROS INFORMADOS.
 OBS: CASO O USUARIO INFORME UMA OPERAÇÃO QUE NÃO SEJA NENHUMA DAS OPÇÕES ACIMA, DEVE IPRIMIR " OPÇÃO INVÁLIDA" */

 int main(){
    int num1, num2;
    char opcao;
    printf("Informe dois numeros: ");
    scanf("%d %d", &num1, &num2);
    
    printf("Escolha entre as opcoes: (+, - ,* ,/) :  ");
    scanf("  %c", &opcao);

    switch (opcao){
        case '+':{
        printf("resultado: %d", (num1 + num2));
        break;
        }
        case '-':{
        printf("resultado: %d", (num1 - num2));
        break;
        }
        case '*':{
            printf("resultado: %d",(num1 * num2));
            break;
        }
        case '/':{
            printf("resultado: %d",(num1 / num2));
            break;
        }
        default:{
            printf("opcao invalida!");
        }
    }
        return 0;
    }