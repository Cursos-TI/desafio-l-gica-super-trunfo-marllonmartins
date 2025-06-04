#include <stdio.h>

int main() {

    char estado1;
    char codigo1[4];
    char cidade1[50];
    unsigned long int populacao1;
    float area1, pib1;
    int pontosTuristicos1;
    float densidade1, ppc1, superpoder1;

    char estado2;
    char codigo2[4];
    char cidade2[50];
    unsigned long int populacao2;
    float area2, pib2;
    int pontosTuristicos2;
    float densidade2, ppc2, superpoder2;

    int opcao, opcao2;
    float soma1, soma2;

    printf("Digite o estado da carta 1: ");
    scanf(" %c", &estado1);
    printf("Digite o código da carta 1: ");
    scanf("%s", codigo1);
    printf("Digite o nome da cidade da carta 1: ");
    scanf(" %[^\n]", cidade1);
    printf("Digite a população da carta 1: ");
    scanf("%lu", &populacao1);
    printf("Digite a área da carta 1: ");
    scanf("%f", &area1);
    printf("Digite o PIB da carta 1: ");
    scanf("%f", &pib1);
    printf("Digite o número de pontos turísticos da carta 1: ");
    scanf("%d", &pontosTuristicos1);

    pib1 *= 10000000;
    densidade1 = populacao1 / area1;
    ppc1 = (pib1 / populacao1) * 100;
    pib1 /= 10000000;
    superpoder1 = populacao1 + area1 + pib1 + ppc1 + (1 / densidade1) + pontosTuristicos1;

    printf("Digite o estado da carta 2: ");
    scanf(" %c", &estado2);
    printf("Digite o código da carta 2: ");
    scanf("%s", codigo2);
    printf("Digite o nome da cidade da carta 2: ");
    scanf(" %[^\n]", cidade2);
    printf("Digite a população da carta 2: ");
    scanf("%lu", &populacao2);
    printf("Digite a área da carta 2: ");
    scanf("%f", &area2);
    printf("Digite o PIB da carta 2: ");
    scanf("%f", &pib2);
    printf("Digite o número de pontos turísticos da carta 2: ");
    scanf("%d", &pontosTuristicos2);

    pib2 *= 10000000;
    densidade2 = populacao2 / area2;
    ppc2 = (pib2 / populacao2) * 100;
    pib2 /= 10000000;
    superpoder2 = populacao2 + area2 + pib2 + ppc2 + (1 / densidade2) + pontosTuristicos2;

    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Cidade: %s\n", cidade1);
    printf("População: %lu\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões\n", pib1);
    printf("Pontos Turísticos: %d\n", pontosTuristicos1);
    printf("Densidade: %.2f hab/km²\n", densidade1);
    printf("PIB per capita: %.2f\n", ppc1);
    printf("Super poder: %.2f\n", superpoder1);

    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %lu\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões\n", pib2);
    printf("Pontos Turísticos: %d\n", pontosTuristicos2);
    printf("Densidade: %.2f hab/km²\n", densidade2);
    printf("PIB per capita: %.2f\n", ppc2);
    printf("Super poder: %.2f\n", superpoder2);

    printf("\n*** Qual atributo você deseja comparar? ***\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Pontos Turísticos\n");
    printf("5. Densidade\n");
    scanf("%d", &opcao);

    switch (opcao) {
        case 1:
            printf("População da carta 1: %lu\n", populacao1);
            printf("População da carta 2: %lu\n", populacao2);
            printf("Escolha outro atributo para comparar:\n");
            printf("2. Área\n3. PIB\n4. Pontos Turísticos\n5. Densidade\n");
            break;
        case 2:
            printf("Área da carta 1: %.2f\n", area1);
            printf("Área da carta 2: %.2f\n", area2);
            printf("Escolha outro atributo para comparar:\n");
            printf("1. População\n3. PIB\n4. Pontos Turísticos\n5. Densidade\n");
            break;
        case 3:
            printf("PIB da carta 1: %.2f\n", pib1);
            printf("PIB da carta 2: %.2f\n", pib2);
            printf("Escolha outro atributo para comparar:\n");
            printf("1. População\n2. Área\n4. Pontos Turísticos\n5. Densidade\n");
            break;
        case 4:
            printf("Pontos turísticos da carta 1: %d\n", pontosTuristicos1);
            printf("Pontos turísticos da carta 2: %d\n", pontosTuristicos2);
            printf("Escolha outro atributo para comparar:\n");
            printf("1. População\n2. Área\n3. PIB\n5. Densidade\n");
            break;
        case 5:
            printf("Densidade da carta 1: %.2f\n", densidade1);
            printf("Densidade da carta 2: %.2f\n", densidade2);
            printf("Escolha outro atributo para comparar:\n");
            printf("1. População\n2. Área\n3. PIB\n4. Pontos Turísticos\n");
            break;
        default:
            printf("Opção inválida.\n");
            return 1;
    }

    scanf("%d", &opcao2);

     switch (opcao2)
    {
    case 1:
        printf("População da carta 1: %lu\n", populacao1);
        printf("População da carta 2: %lu\n", populacao2);
        break;
        case 2:
        printf("Área da carta 1: %.2f\n", area1);
        printf("Área da carta 2: %.2f\n", area2);
        break;
        case 3:
        printf("PIB da carta 1: %.2f\n", pib1);
        printf("PIB da carta 2: %.2f\n", pib2);
        break;
        printf("Pontos turísticos da carta 1: %d\n", pontosTuristicos1);
        printf("Pontos turísticos da carta 2: %d\n", pontosTuristicos2);
        case 4:
        break;
        case 5:
        printf("Densidade da carta 1: %.2f\n", densidade1);
        printf("Densidade da carta 2: %.2f\n", densidade2);
        break;
    default:
    printf("***Opção Invalida***");
        break;
    }

    
    if ((opcao == 1 && opcao2 == 2) || (opcao == 2 && opcao2 == 1)) {
        soma1 = populacao1 + area1;
        soma2 = populacao2 + area2;
    } else if ((opcao == 1 && opcao2 == 3) || (opcao == 3 && opcao2 == 1)) {
        soma1 = populacao1 + pib1;
        soma2 = populacao2 + pib2;
    } else if ((opcao == 1 && opcao2 == 4) || (opcao == 4 && opcao2 == 1)) {
        soma1 = populacao1 + pontosTuristicos1;
        soma2 = populacao2 + pontosTuristicos2;
    } else if ((opcao == 1 && opcao2 == 5) || (opcao == 5 && opcao2 == 1)) {
        soma1 = populacao1 + densidade1;
        soma2 = populacao2 + densidade2;
    } else if ((opcao == 2 && opcao2 == 3) || (opcao == 3 && opcao2 == 2)) {
        soma1 = area1 + pib1;
        soma2 = area2 + pib2;
    } else if ((opcao == 2 && opcao2 == 4) || (opcao == 4 && opcao2 == 2)) {
        soma1 = area1 + pontosTuristicos1;
        soma2 = area2 + pontosTuristicos2;
    } else if ((opcao == 2 && opcao2 == 5) || (opcao == 5 && opcao2 == 2)) {
        soma1 = area1 + densidade1;
        soma2 = area2 + densidade2;
    } else if ((opcao == 3 && opcao2 == 4) || (opcao == 4 && opcao2 == 3)) {
        soma1 = pib1 + pontosTuristicos1;
        soma2 = pib2 + pontosTuristicos2;
    } else if ((opcao == 3 && opcao2 == 5) || (opcao == 5 && opcao2 == 3)) {
        soma1 = pib1 + densidade1;
        soma2 = pib2 + densidade2;
    } else if ((opcao == 4 && opcao2 == 5) || (opcao == 5 && opcao2 == 4)) {
        soma1 = pontosTuristicos1 + densidade1;
        soma2 = pontosTuristicos2 + densidade2;
    } else {
        printf("Combinação inválida.\n");
        return 1;
    }

    printf("Soma dos atributos da carta 1: %.2f\n", soma1);
    printf("Soma dos atributos da carta 2: %.2f\n", soma2);

    if (soma1 > soma2) {
        printf("A Carta 1 venceu!!\n");
    } else if (soma2 > soma1) {
        printf("A Carta 2 venceu!!\n");
    } else {
        printf("Deu empate!!\n");
    }

    return 0;
}
