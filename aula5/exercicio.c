 

/*  imprima um numero e diga se ele é positivo ou negativo  */
/* int main(){
    int numero;
    printf("Informe um numero: ");
    scanf("%d", &numero);
    if(numero > 0){
        printf("Numero positivo");
    }
    if (numero <=0){
        printf("Numero negativo");
    }
    return 0;
} */

/* ESCREVA UM ALGORITMO QUE SOLICITA UM NUMERO AO USUARIO E VERIFICA SE ELE É PAR OU IMPAR */

/* int main(){
    int num, resto;
    printf("Informe um numero: ");
    scanf("%d", &num);
    resto = num%2;
    if(resto == 0){
        printf("Numero par");
    }
    if (resto != 0){
        printf("Numero impar");
    }
    return 0;

} */

/* imprima um numero e diga se ele é positivo ou negativo  CONDIÇÃO COMPOSTA */
/* int main(){
    int numero;
    printf("Informe um numero: ");
    scanf("%d", &numero);
    if (numero > 0){
        printf("Numero Positivo");
    }
    else{
        printf("Numero nulo ou negativo");
    }
    return  0;
} */

/* IMPLEMENTE UM ALGORITMO QUE RECEBE DOIS NUMEROS DO USUARIO E VERIFICA SE OS MESMOS SAO IGUAIS */
/* int main(){
    int num1, num2;
    printf("Informe dois numeros: ");
    scanf("%d %d", &num1, &num2 );
    if (num1 == num2){
        printf( "NUMEROS IGUAIS");
    }
    else{
        printf("NUMEROS DIFERENTES");
    }

    return 0;
} */

/* IMPLEMENTE UM ALGORITMO QUE LEIA DOIS VALORES INFORMADOS PELO USUARIO E EFETUE A ADIÇÃO DELES. CASO O RESULTADO SEJA MAIOR OU IGUAL A 10,
 IMPRIMIR O RESULTADO CASO CONTRARIO IMPRIMIR A MENSAGEM ' SOMA MENOR QUE 10 */

/*  int main(){
    int num1, num2, soma;
    printf("Informe dois valores: ");
    scanf("%d %d", &num1, &num2);
    soma = num1 + num2;
    if (soma >=10){
        printf( "%d" ,soma);
    }
    else{
        printf("Soma menor que 10");
    }
    return 0;

 } */

 /* IMPLEMENTE UM ALGORITMO QUE RECEBE DOIS NUMEROS INFORMADOS PELO USUARIO E IMPRIME ESSES NUMEROS EM ORDEM CRESCENTE */

/*  int main(){
    int num1, num2;
    printf("Informe dois numeros: ");
    scanf("%d %d", &num1, &num2);
    if (num1 < num2){
        printf("%d %d", num1, num2);
    }
    else{
        printf("%d %d", num2, num1);
    }
return 0;
 } */

 /*                               CONDIÇÕES ANINHADAS                                  */
/* 
 int main(){
    int num;
    printf("informe um numero: ");
    scanf("%d", &num);
    if (num > 0){
        printf("numero positivo");
    }
    else{
        if (num < 0){
            printf("numero negativo");
        }
        else {
            printf("Numero nulo");
        }
    }
    return 0;
 }
  */
/*  int main(){
    int num;
    printf("informe um numero: ");
    scanf("%d", &num);
    if (num > 0){
        printf("numero positivo");
    }
    else if (num < 0){
            printf("numero negativo");
        }
        else {
            printf("Numero nulo");
        }
    
    return 0;
    } */

    /* Escreva um algoritmo que calcule o peso ideal de uma pessoa baseada na sua altura e sexo. Assim, o algoritmo deve receber como
entrada o sexo da pessoa (‘m’ ou ‘M’ para masculino e ‘f’ ou ‘F’ para feminino) e a f. Para cálculo do peso ideal, você
deve se basear na regra abaixo:    • para homens: (72.7 * h) – 58;    • para mulheres: (62.1 * h) – 44.7.*/
/*   int main(){
  char sexo;
  float h, psIdeal;

  printf("Informe o sexo (M/F): ");
  scanf("%c", &sexo);

  printf("Informe a altura em metros (m): ");
  scanf("%f", &h);

  if ((sexo == 'M') || (sexo == 'm')){
     psIdeal = (72.7 * h) - 58;
  }
  else{
     psIdeal = (62.1 * h) - 44.7;
  }
  printf("\nO Peso Ideal eh: %.2f kgs.", psIdeal);
       
    return 0;
 }  */
 

/* Elabore um algoritmo que calcule o que deve ser pago por um produto, considerando o preço normal de eGqueta e a escolha da
condição de pagamento. Utilize os códigos da tabela a seguir para ler qual a condição de pagamento escolhida e efetuar o cálculo
adequado.      1) a vista ou cheque 10% de desconto, 2) a vista no cartão crédito 15% desconto, 3) em duas vezes preço normal da
etiqueta sem juros,  4) em duas vezes preço normal da etiqueta mais juros de 10%  */
/*  int main(){
    float precoNormal;
    int condicao;
    printf("Informe o valor da etiqueta: ");
    scanf("%f", &precoNormal);

    printf("Escolha a condicao de pagamento: ");

    printf("\n 1) A vista ou cheque 10%% desconto\n 2) A vista ou cartao credito 15%% desconto\n 3) Em duas vezes preco normal etiqueta s juros\n 4) Em duas vezes preco normal etiqueta c juros de 10 %%:  ");

    scanf("%d", &condicao);

    if (condicao == 1){
        precoNormal *= 0.9 ;
    }
    else if (condicao == 2){
            precoNormal *= 0.85;
        }
        else if (condicao == 3){
            precoNormal /= 2;
            }
            else if (condicao == 4){
            precoNormal /=2 + 0.9;
        }
        else{
        printf("Condicao NAO informada ou NULA \n");
    }
    printf("O valor final do produto eh: %.2f", precoNormal);
return 0;
}  */
int main(){
 int data, dia, mes, ano;
    printf("Informe sua data de nascimento no formato de dd/mm/aa:  ");
    scanf("%d", &data);
   
    ano=valor%100;
    valor-=ano;
    valor/=100;
    mes=valor%100;
    valor-=mes;
    valor/=100;
    dia=valor%100;

return 0;
}