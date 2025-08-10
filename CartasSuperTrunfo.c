#include <stdio.h>
//calcula PIB percapta e desidade
float pibpercapta(float pib, unsigned long int population){
    float pibperca = pib / population;
    return pibperca;}
//calcula densidade
double desidade(unsigned long int population, float area){
    double densi = population / area;
    return densi;
}
//calcula super poder
double superPoder(unsigned long int population,  float area, float pib, int turist){
    double densidade = desidade(population,area);
    double superPoder = ( population + area + pib + turist)/ densidade;
    return superPoder;
}
int main(){
    //declarando variáveis card01 e card02
    char estado01[50], estado02[50];
    char codCard01[20],codCard02[20];
    char cardName01[50], cardName02[50];
    unsigned long int pulation01, pulation02;
    float area01, area02;
    float pib01, pib02;
    int turistpoint01, turistpoint02;

    //atribuindo valores para as variáveis da carta 01
    printf("Qual estado da carta 01?(digite uma letra entre A - H) \n");
    scanf("%s", estado01);
    printf("Qual código da cidade 01?(digite a letra do estado escolhida, seguida de um número entre 01-04) \n");
    scanf("%s", codCard01);
    printf("Qual nome da cidade 01 ? \n");
    scanf("%s", cardName01);
    printf("Qual a população da cidade 01? \n");
    scanf("%lu", &pulation01);
    printf("Qual a área da cidade 01?  \n");
    scanf("%f", &area01);
    printf("Qual o PIB da cidade 01? \n");
    scanf("%f", &pib01);
    printf("Quantos pontos turísticos tem a cidade 01? \n");
    scanf("%d", &turistpoint01);

    //atribuindo valores para as variáveis da carta 02
    printf("Qual estado da carta 02?(digite uma letra entre A - H) \n");
    scanf("%s", estado02);
    printf("Qual código da cidade 02?(digite a letra do estado escolhida, seguida de um número entre 01-04) \n");
    scanf("%s", codCard02);
    printf("Qual nome da cidade 02 ? \n");
    scanf("%s", cardName02);
    printf("Qual a população da cidade 02? \n");
    scanf("%lu", &pulation02);
    printf("Qual a área da cidade 02?  \n");
    scanf("%f", &area02);
    printf("Qual o PIB da cidade 02? \n");
    scanf("%f", &pib02);
    printf("Quantos pontos turísticos tem a cidade 02? \n");
    scanf("%d", &turistpoint02);
    
    printf("==============================================================\n");
    
    float densi01;
     float pperca01;
    double superA;
    //chama função de densidade populacional 01
    densi01 = desidade(pulation01, area01);
    pperca01 = pibpercapta(pib01* 1000000000.0, pulation01);
    superA = superPoder(pulation01, area01, pib01, turistpoint01);
    //exibe dados atributos da carta 01
    printf("Carta 01:\n");
    printf("Estado: %s\nCódigo: %s\n", estado01, codCard01);
    printf("Nome: %s\n", cardName01);
    printf("População: %d\nArea: %.2f\n", pulation01, area01);
    printf("PIB: %.2f \nPontos Turísticos: %d\n", pib01, turistpoint01);
    printf("A desidade populacional é: %.2f\n", densi01);
    printf("O PIB per Capita: %.2lf\n", pperca01 );
    printf ("Super-Poder A: %.2lf\n",superA);
    printf("==============================================================\n");

     float densi02;
     float pperca02;
    double superB;
    //chama função de densidade populacional 02
    densi02 = desidade(pulation02, area02);
    pperca02 = pibpercapta(pib02 * 1000000000.0, pulation02);
    superB = superPoder(pulation02, area02, pib02, turistpoint02);
    //exibe dados atributos da carta 01
    printf("Carta 02:\n");
    printf("Estado: %s\nCódigo: %s\n", estado02, codCard02);
    printf("Nome: %s\n", cardName02);
    printf("População: %d\nArea: %.2f\n", pulation02, area02);
    printf("PIB: %.2f \nPontos Turísticos: %d\n", pib02, turistpoint02);
    printf("A desidade populacional é: %.2f\n", densi02);
    printf("O PIB per Capita: %.2lf\n", pperca02 );
    printf ("Super-Poder B: %.2lf\n",superB);
    printf("==============================================================\n");

    printf("População, %s venceu? %d\n",cardName01, pulation01 > pulation02);
    printf("PIB, carta 1 venceu? %d\n", pib01 > pib02);
    printf("Densidade, carta 1 venceu? %d\n", densi01 < densi02);
    printf("PIB per Capta, carta 1 venceu? %d\n", pperca01 > pperca02);
    printf("Super-Poder, carta 1 venceu? %d\n", superA > superB);
    return 0 ;
}