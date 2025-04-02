//especificadores de formato

//%d: Imprime um inteiro no formato decimal.
 
//%i: Equivalente a %d.
 
//%f: Imprime um número de ponto flutuante no formato padrão.
 
//%e: Imprime um número de ponto flutuante na notação científica.
 
//%c: Imprime um único caractere.
 
//%s: Imprime uma cadeia (string) de caracteres.

#include <stdio.h> //adiciona a biblioteca ao código para a entrada e saida de informações 
#include <string.h> //adiciona a biblioteca para uso do código strcpy


int main(){ //Cria o diretório onde vai se passar todo o código
    //aplica as variaveis para as cartas
    char estado[20], estado2[20], cdcard[20], cdcard2[20], nomec[20], nomec2[20]; 
    int populacao, populacao2, pturist, pturist2, opcao;
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

    // cálculo de super poder 
    superpoder = (float) populacao + area + pib + pturist + pibpc + 1 / densidade;
    superpoder2 = (float) populacao2 + area2 + pib2 + pturist2 + pibpc2 + 1 / densidade2;

    //Bloco de saida das informações da carta 1
    printf("carta 1: \n");
    printf("Estado - %s\n", estado);                       
    printf("Código da carta - %s\n", cdcard);           
    printf("Nome da cidade - %s\n",nomec);               
    printf("População da cidade - %d\n", populacao);          
    printf("Pontos turisticos - %d\n", pturist);
    printf("Área(km2) - %.2f km2\n", area);                    
    printf("PIB - %.2f Bilhões de reais\n", pib);           
    printf("PIB per Capita - %.2f reais\n", pibpc);
    printf("Densidade Populacional - %.2f habitantes/km2\n", densidade);

    //Bloco de saida das informações da carta 2
    printf("carta 2: \n");
    printf("Estado - %s\n",estado2);
    printf("Código da carta - %s\n", cdcard2);
    printf("Nome da cidade - %s\n", nomec2);
    printf("População da Cidade - %d\n", populacao2);
    printf("Pontos turisticos - %d\n", pturist2);
    printf("Área(km2) - %.2f km2\n", area2);
    printf("PIB - %.2f Bilhões de reais\n", pib2);
    printf("PIB per Capita - %.2f reais\n", pibpc2);
    printf("Densidade Populacional - %.2f habitantes/km2\n", densidade2);

    //Menu interativo para a comparação das duas cartas 

    printf("Escolha uma das opções abaixo para comparação das cartas\n");
    printf("1 - Comparar PIB per Capita\n");
    printf("2 - Comparar Densidade Populacional\n");
    printf("3 - Comparar população\n");
    printf("4 - Comparar Pontos turisticos\n");
    printf("5 - Comparar Área\n");
    printf("Escolha a opção: ");
    scanf("%d", &opcao);


    // Variáveis para armazenar os resultados
    char atributo[30]; 
    float valor1, valor2;
    int vencedor = 0; // 0 = empate, 1 = carta 1, 2 = carta 2


    // Comparação das cartas
    switch (opcao) {
        case 1:
            strcpy(atributo, "PIB per Capita");
            valor1 = pibpc;
            valor2 = pibpc2;
            break;
        case 2:
            strcpy(atributo, "Densidade Populacional");
            valor1 = densidade;
            valor2 = densidade2;
            break;
        case 3:
            strcpy(atributo, "População");
            valor1 = populacao;
            valor2 = populacao2;
            break;
        case 4:
            strcpy(atributo, "Pontos Turísticos");
            valor1 = pturist;
            valor2 = pturist2;
            break;
        case 5:
            strcpy(atributo, "Área");
            valor1 = area;
            valor2 = area2;
            break;
        default:
            printf("Opção inválida!\n");
            return 1;
    }

    // Determina o vencedor
    if (valor1 > valor2) {
        vencedor = 1;
    } else if (valor1 < valor2) {
        vencedor = 2;
    }

    // Exibição do resultado final
    printf("\n*** RESULTADO DA COMPARAÇÃO ***\n");
    printf("Carta 1 - %s (%s)  VS  Carta 2 - %s (%s)\n", nomec, estado, nomec2, estado2);
    printf("Atributo Comparado: %s\n", atributo);
    printf("Valores: Carta 1 -> %.2f | Carta 2 -> %.2f\n", valor1, valor2);
    
    if (vencedor == 1) {
        printf("Carta 1 venceu!\n");
    } else if (vencedor == 2) {
        printf("Carta 2 venceu!\n");
    } else {
        printf("Empate!\n");
    }

    return 0;
}