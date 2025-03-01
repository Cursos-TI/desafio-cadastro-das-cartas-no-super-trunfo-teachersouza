#include <stdio.h>

int main() {
    char estado1, estado2;
    char codigo1[3], codigo2[3];
    char cidade1[100], cidade2[100];
    int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int lugares1, lugares2;

        printf("Carta 01 \n");

        printf("Digite a inicial do Estado da Cidade 01: ");
        scanf(" %c", &estado1);

        printf("Digite o código da Cidade 01: ");
        scanf("%s", codigo1);

        printf("Digite o nome da cidade 01: ");
        scanf(" %s", &cidade1); 
        
        printf("Digite a população da cidade 01: ");
        scanf("%d", &populacao1);

        printf("Digite a área em km² da cidade 01: ");
        scanf("%f", &area1);

        printf("Digite o PIB da cidade 01: ");
        scanf("%f", &pib1);

        printf("Digite o número de lugares turísticos da cidade 01: ");
        scanf("%d", &lugares1);



        printf("\n\nCarta 02 \n");

        printf("Digite a inicial do Estado da Cidade 02: ");
        scanf(" %c", &estado2);

        printf("Digite o código da Cidade 02: ");
        scanf("%s", codigo2);

        printf("Digite o nome da cidade 02: ");
        scanf(" %s", &cidade2); 
        
        printf("Digite a população da cidade 02: ");
        scanf("%d", &populacao2);

        printf("Digite a área em km² da cidade 02: ");
        scanf("%f", &area2);

        printf("Digite o PIB da cidade 02: ");
        scanf("%f", &pib2);

        printf("Digite o número de lugares turísticos da cidade 02: ");
        scanf("%d", &lugares2);

        printf("\n\n--------------\n\n");

            printf("Carta 01 \n\n");

            printf("Estado: %c \n", estado1);
            printf("Código: %s \n", codigo1);
            printf("Cidade: %s \n", cidade1);
            printf("População: %d \n", populacao1);
            printf("Área: %.2f km² \n", area1);
            printf("PIB: %.2f \n", pib1);
            printf("Pontos turísticos: %d \n\n", lugares1);

            printf("Carta 02 \n\n");

            printf("Estado: %c \n", estado2);
            printf("Código: %s \n", codigo2);
            printf("Cidade: %s \n", cidade2);
            printf("População: %d \n", populacao2);
            printf("Área: %.2f km² \n", area2);
            printf("PIB: %.2f \n", pib2);
            printf("Pontos turísticos: %d \n", lugares2);

    return 0;
}
