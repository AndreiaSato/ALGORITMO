#include<stdio.h>
/* 1) Um determinado material radioativo perde metade de sua massa a cada 50 
segundos. Assim, você deve escrever um algoritmo em C que recebe o valor da 
massa inicial do elemento em gramas do usuário e que determine o tempo 
necessário para que essa massa se torne menor do que 0,5 grama. Ao fim, o seu 
algoritmo deve escrever a massa inicial, a massa final e o tempo calculado em 
horas, minutos e segundos */
int main(){
    int mi, seg, cont=0;
    float hr, min, mf;
    printf("Digite a massa inicial (em gramas):");
    scanf("%d", &mi);
    mf = mi;
    do{
        mf = mf / 2;
        cont++;
    }while(mf>0.5);
    seg = cont * 50;
    min = seg / 60;
    hr = min / 60;
    printf("Massa inicial: %d\n", mi);
    printf("Massa final: %.2lf\n", mf);
    printf("Tempo total de perda da massa em horas: %.2lf\n", hr);
    printf("Tempo total de perda da massa em minutos: %.2lf\n", min);
    printf("Tempo total de perda da massa em segundos: %d", seg);


    return 0;
}

/* 
2. Você foi contratado para desenvolver um programa em C para uma urna 
eletrônica, que irá contabilizar os votos de uma eleição. A eleição é composta por 
quatro candidatos e deve também computar os votos brancos e nulos. Dessa 
forma, o seu algoritmo deve seguir o seguinte menu:
1 - Candidato 1
2 - Candidato 2
3 - Candidato 3
4 - Candidato 4
5 – Branco
-1 - Sair
O seu algoritmo deve receber votos enquanto a opção -1 não for escolhida. 
Qualquer opção escolhida fora das exibidas no menu deve ser contabilizado como voto 
nulo. Ao fim, o seu programa deve imprimir a quantidade e a porcentagem de votos 
recebidos por cada candidato, a quantidade de votos brancos e nulos e a quantidade total 
de votos.  */
 int main(){
float total1=0, total2=0, total3=0, total4=0, total5=0, total6=0, totalgeral=0;
int opcao;
do {
    printf(" 1) CANDIDATO 1\n 2) CANDIDATO 2\n 3) CANDIDATO 3\n 4) CANDIDATO 4\n 5) BRANCO\n-1) SAIR\nINFORME A OPCAO: ");
    scanf("%d", &opcao);
    switch (opcao){
        case 1: total1++;
        break;
        case 2: total2++;
        break; 
        case 3: total3++;
        break;
        case 4: total4++;
        break;
        case 5: total5++;
        break;
        case -1:
        printf("SAIR\n");
        break;
        default:
        printf("VOTO NULO\n");
        total6++;
    }
}
while (opcao!= -1);

totalgeral = total1+total2+total3+total4+total5+total6;

printf("TOTAL DE VOTOS CANDIDATO 1  %.2f e %.2f %%\n", total1, ((total1/totalgeral)* 100));
printf("TOTAL DE VOTOS CANDIDATO 2: %.2f e %.2f %%\n", total2, ((total2/totalgeral) * 100));
printf("TOTAL DE VOTOS CANDIDATO 3: %.2f e %.2f %%\n", total3, ((total3/totalgeral) * 100));
printf("TOTAL DE VOTOS CANDIDATO 4  %.2f e %.2f %%\n", total4, ((total4/totalgeral) * 100));
printf("TOTAL DE VOTOS BRANCOS:     %.2f e %.2f %%\n", total5, ((total5/totalgeral) * 100));
printf("TOTAL DE VOTOS NULOS:       %.2f e %.2f %%\n", total6, ((total6/totalgeral) * 100));
return 0;  
}  