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
    int populacao, populacao2, pturist, pturist2, opcao, opcao2, resultado, resultado2, resultadoD2, resultadoD;
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


    //Cálculo da pib per capita e da densidade Demográfica
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
    printf("Densidade Demorgráfica - %.2f habitantes/km2\n", densidade);

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
    printf("Densidade Demográfica - %.2f habitantes/km2\n", densidade2);


    //Menu interativo para a comparação das duas cartas 

    printf("Escolha uma das opções abaixo para comparação das cartas\n");
    printf("1 - Comparar PIB per Capita\n");
    printf("2 - Comparar Densidade Demográfica\n");
    printf("3 - Comparar população\n");
    printf("4 - Comparar Pontos turisticos\n");
    printf("5 - Comparar Área\n");
    printf("Escolha a primeira opção: ");
    scanf("%d", &opcao);

    //switch para a comparação das duas cartas
    switch(opcao){
    case 1:
            printf("Você escolheu comparar a PIB per capita das duas cartas");
            resultado = pibpc > pibpc2 ? 1:0;
        break;
    case 2:
            printf("Você escolheu comparar a Densidade Demográfica das duas cartas");
            resultadoD = densidade < densidade2 ? 1:0;
            if (resultadoD == 1)    
            {
                printf("A carta 1 tem o maior valor na opção escolhida\n");
            } else {
                printf("A carta 2 tem o maior valor na opção escolhida\n");
            }
        break;
    case 3:
            printf(" você escolheu comparar a População das duas cartas");
            resultado = populacao > populacao2 ? 1:0;
        break;
    case 4:
            printf(" vocé escolheu comparar a Pontos turisticos das duas cartas");
            resultado = pturist > pturist2 ? 1:0;
        break;
    case 5:
            printf(" vocé escolheu comparar a Área das duas cartas");
            resultado = area > area2 ? 1:0;
        break;
    default:
            printf("Opção inválida");
        break;
    }


    printf("Escolha uma das opções abaixo para comparação das cartas\n");
    printf("1 - Comparar PIB per Capita\n");
    printf("2 - Comparar Densidade Demográfica\n");
    printf("3 - Comparar população\n");
    printf("4 - Comparar Pontos turisticos\n");
    printf("5 - Comparar Área\n");
    printf("Escolha a segunda opção: ");
    scanf("%d", &opcao2);

    switch(opcao){
        case 1:
                printf("Você escolheu comparar a PIB per capita das duas cartas\n");
                resultado2 = pibpc > pibpc2 ? 1:0;
            break;
        case 2:
                printf("Você escolheu comparar a Densidade Demográfica das duas cartas\n");
                resultadoD2 = densidade < densidade2 ? 1:0;
                if (resultadoD2 == 1)    
                {
                    printf("A carta 1 tem o maior valor na opção escolhida\n");
                } else {
                    printf("A carta 2 tem o maior valor na opção escolhida\n");
                }
            break;
        case 3:
                printf(" você escolheu comparar a População das duas cartas\n");
                resultado2 = populacao > populacao2 ? 1:0;
            break;
        case 4:
                printf(" vocé escolheu comparar a Pontos turisticos das duas cartas\n");
                resultado2 = pturist > pturist2 ? 1:0;
            break;
        case 5:
                printf(" vocé escolheu comparar a Área das duas cartas\n");
                resultado2 = area > area2 ? 1:0;
            break;
        default:
                printf("Opção inválida");
            break;
        }

        if (opcao == opcao2)
        {
            printf("ERRO! As opções escolhidas devem ser diferentes!\n");
            return 0;
        }

    // Exibe o resultado da comparação
        printf("Carta 1 - %s      Carta 2 - %s\n", nomec, nomec2);
        if (resultado == 1 && resultado2 == 1){
            printf("A carta 1 Venceu!\n");
        } else  if (resultado == 0 && resultado2 == 0){
            printf("A carta 2 Venceu!\n");
        } else {
            printf("EMPATE!\n");
        }
            
        
    return 0;
}