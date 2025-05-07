#include <stdio.h>
#include <string.h>

int main() {
    // Variáveis da Carta 1
    char pais1[50];
    int populacao1;
    float area1;
    float pib1;
    int pontos1;
    float densidade1;

    // Variáveis da Carta 2
    char pais2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontos2;
    float densidade2;

    int escolha;

    // Entrada dos dados da Carta 1
    printf("\n*** Carta 1 ***\n");
    printf("Nome do país: ");
    fgets(pais1, sizeof(pais1), stdin);
    pais1[strcspn(pais1, "\n")] = '\0';

    printf("População: ");
    scanf("%d", &populacao1);

    printf("Área (em km2): ");
    scanf("%f", &area1);

    printf("PIB (em bilhões): ");
    scanf("%f", &pib1);

    printf("Pontos turísticos: ");
    scanf("%d", &pontos1);

    densidade1 = populacao1 / area1;

    getchar();

    // Entrada dos dados da Carta 2
    printf("\n*** Carta 2 ***\n");
    printf("Nome do país: ");
    fgets(pais2, sizeof(pais2), stdin);
    pais2[strcspn(pais2, "\n")] = '\0';

    printf("População: ");
    scanf("%d", &populacao2);

    printf("Área (em km2): ");
    scanf("%f", &area2);

    printf("PIB (em bilhões): ");
    scanf("%f", &pib2);

    printf("Pontos turísticos: ");
    scanf("%d", &pontos2);

    densidade2 = populacao2 / area2;

    // Loop para comparar quantas vezes quiser
    do {
        printf("\nQual atributo deseja comparar?\n");
        printf("1 - População\n");
        printf("2 - Área\n");
        printf("3 - PIB\n");
        printf("4 - Pontos turísticos\n");
        printf("5 - Densidade demográfica\n");
        printf("0 - Sair\n");
        printf("Digite sua escolha: ");
        scanf("%d", &escolha);

        printf("\nComparando %s e %s:\n", pais1, pais2);

        switch (escolha) {
            case 1:
                printf("População: %d x %d\n", populacao1, populacao2);
                if (populacao1 > populacao2)
                    printf("Vencedor: %s\n", pais1);
                else if (populacao2 > populacao1)
                    printf("Vencedor: %s\n", pais2);
                else
                    printf("Empate!\n");
                break;
            case 2:
                printf("Área: %.2f x %.2f\n", area1, area2);
                if (area1 > area2)
                    printf("Vencedor: %s\n", pais1);
                else if (area2 > area1)
                    printf("Vencedor: %s\n", pais2);
                else
                    printf("Empate!\n");
                break;
            case 3:
                printf("PIB: %.2f x %.2f\n", pib1, pib2);
                if (pib1 > pib2)
                    printf("Vencedor: %s\n", pais1);
                else if (pib2 > pib1)
                    printf("Vencedor: %s\n", pais2);
                else
                    printf("Empate!\n");
                break;
            case 4:
                printf("Pontos turísticos: %d x %d\n", pontos1, pontos2);
                if (pontos1 > pontos2)
                    printf("Vencedor: %s\n", pais1);
                else if (pontos2 > pontos1)
                    printf("Vencedor: %s\n", pais2);
                else
                    printf("Empate!\n");
                break;
            case 5:
                printf("Densidade demográfica: %.2f x %.2f\n", densidade1, densidade2);
                if (densidade1 < densidade2)
                    printf("Vencedor: %s (menor densidade vence)\n", pais1);
                else if (densidade2 < densidade1)
                    printf("Vencedor: %s (menor densidade vence)\n", pais2);
                else
                    printf("Empate!\n");
                break;
            case 0:
                printf("Saindo do programa...\n");
                break;
            default:
                printf("Opção inválida!\n");
        }
    } while (escolha != 0);

    return 0;
}