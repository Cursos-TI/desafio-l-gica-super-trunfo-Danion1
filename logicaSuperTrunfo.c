#include <stdio.h> //adiciona a biblioteca ao código para a entrada e saida de informações 

int main(){ //Cria o diretório onde vai se passar todo o código
    //aplica as variaveis para as cartas
    char estado[20], estado2[20], cdcard[20], cdcard2[20], nomec[20], nomec2[20]; 
    int populacao, populacao2, pturist, pturist2;
    float area, area2, pib, pib2, pibpc, pibpc2, densidade, densidade2, superpoder1, superpoder2, superpoder;

    //colhe as informações da primeira carta
    printf("Digite o estado da primeira carta(de A a H): ");
    scanf("%s", estado);
    
    printf("Digite o código da carta finalizados com um número de 1 a 4(ex: A01, A04, Z03): ");
    scanf("%s", cdcard);
    
    printf("Digite o nome da cidade: ");
    scanf("%s", nomec);
    
    printf("Digite a população da carta: ");
    scanf("%d", &populacao);

    printf("Digite quantos pontos turisticos há na carta:");
    scanf("%d", &pturist);

    printf("Digite a Área(km2): ");
    scanf("%f", &area);

    printf("Digite o PIB da carta: ");
    scanf("%f", &pib);

    //colhe as informações da segunda carta
    printf("Digite o estado da Segunda carta(de A a H): ");
    scanf("%s", estado2);
    
    printf("Digite o código da carta finalizados com um número de 1 a 4(ex: A01, A04, Z03): ");
    scanf("%s", cdcard2);
    
    printf("Digite o nome da cidade: ");
    scanf("%s", nomec2);

    getchar();
    
    printf("Digite a população da carta: ");
    scanf("%d", &populacao2);

    printf("Digite quantos pontos turisticos há na carta:");
    scanf("%d", &pturist2);

    printf("Digite a Área(km2): ");
    scanf("%f", &area2);

    printf("Digite o PIB da carta: ");
    scanf("%f", &pib2);


    //Cálculo da pib per capita e da densidade populacional
    pibpc = pib / populacao;
    pibpc2 = pib2 / populacao2;
    densidade = populacao / area;
    densidade2 = populacao2 / area2;

    //calculo do super poder das cartas somando todas as caracteristacas mais o inverso da densidade(a menor densidade ganha)
    superpoder = populacao + pturist + area + pib + pibpc - densidade;
    superpoder2 = populacao2 + pturist2 + area2 + pib2 + pibpc2 - densidade2;


    //imprime as informações das cartas
    printf("população da carta 1 - %s - %d\n", nomec, populacao);
    printf("população da carta 2 - %s - %d\n", nomec2, populacao2);

    
    //comparação entre as cartas baseadas no mesmo atributo
    if (populacao > populacao2){//se a primeira carta tiver mais população, ela ganha
        printf("A primeira carta ganha em população!\n");
    } else {
        printf("A segunda carta ganha em população!\n");
    }
    
    return 0; //sinalizar que o código foi finalizado com sucesso

}