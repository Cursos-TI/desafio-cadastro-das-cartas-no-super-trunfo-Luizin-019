#include <stdio.h>

int main(){
    //declarando variáveis card01
    char estado01[50];
    int codCard01;
    char cardName01[50];
    int pulation01;
    float area01;
    float pib01;
    int turistpoint01;
    //atribuindo valores para as variáveis da carta 01
    printf("Qual estado da carta 01?(digite uma letra entre A - H) \n");
    scanf("%s", &estado01);
    printf("Qual código da cidade 01?(digite a letra do estado escolhida, seguida de um número entre 01-04) \n");
    scanf("%d", &codCard01);
    printf("Qual nome da cidade 01 ? \n");
    scanf("%s", &cardName01);
    printf("Qual a população da cidade 01? \n");
    scanf("%d", &pulation01);
    printf("Qual a área da cidade 01?  \n");
    scanf("%f", &area01);
    printf("Qual o PIB da cidade 01? \n");
    scanf("%f", &pib01);
    printf("Quantos pontos turísticos tem a cidade 01? \n");
    scanf("%d", &turistpoint01);

     //declarando variáveis card02
    char estado02[50];
    int codCard02;
    char cardName02[50];
    int pulation02;
    float area02;
    float pib02;
    int turistpoint02;
    //atribuindo valores para as variáveis da carta 02
    printf("Qual estado da carta 02?(digite uma letra entre A - H) \n");
    scanf("%s", &estado02);
    printf("Qual código da cidade 02?(digite a letra do estado escolhida, seguida de um número entre 01-04) \n");
    scanf("%d", &codCard02);
    printf("Qual nome da cidade 02 ? \n");
    scanf("%s", &cardName02);
    printf("Qual a população da cidade 02? \n");
    scanf("%d", &pulation02);
    printf("Qual a área da cidade 02?  \n");
    scanf("%f", &area02);
    printf("Qual o PIB da cidade 02? \n");
    scanf("%f", &pib02);
    printf("Quantos pontos turísticos tem a cidade 02? \n");
    scanf("%d", &turistpoint02);
    
    printf("==============================================================\n");
    //exibe dados atributos da carta 01
    printf("Carta 01:\n");
    printf("Estado: %s\nCódigo: %d\n", estado01, codCard01);
    printf("Nome: %s\n", cardName01);
    printf("População: %d\nArea: %f\n", pulation01, area01);
    printf("PIB: %f \nPontos Turísticos: %d \n", pib01, turistpoint01);
    printf("==============================================================\n");
    //exibe dados atributos da carta 01
    printf("Carta 02:\n");
    printf("Estado: %s\nCódigo: %d\n", estado02, codCard02);
    printf("Nome: %s\n", cardName02);
    printf("População: %d\nArea: %f\n", pulation02, area02);
    printf("PIB: %f \nPontos Turísticos: %d\n", pib02, turistpoint02);

}