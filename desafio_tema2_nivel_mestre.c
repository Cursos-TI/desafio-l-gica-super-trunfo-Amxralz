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

    int escolha1, escolha2;
    int soma1, soma2;
    char repetir;

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

    getchar(); // Limpa o buffer

    do {
        // Escolha do primeiro atributo
        printf("\nEscolha o primeiro atributo para comparar:\n");
        printf("1 - População\n");
        printf("2 - Área\n");
        printf("3 - PIB\n");
        printf("4 - Pontos turísticos\n");
        printf("5 - Densidade demográfica\n");
        printf("Digite sua escolha: ");
        scanf("%d", &escolha1);

        // Validação da primeira escolha
        if (escolha1 < 1 || escolha1 > 5) {
            printf("Opção inválida!\n");
            continue;
        }

        // Escolha do segundo atributo 
        printf("\nEscolha o segundo atributo para comparar:\n");
        for (int i = 1; i <= 5; i++) {
            if (i != escolha1) {
                switch(i) {
                    case 1: printf("1 - População\n"); break;
                    case 2: printf("2 - Área\n"); break;
                    case 3: printf("3 - PIB\n"); break;
                    case 4: printf("4 - Pontos turísticos\n"); break;
                    case 5: printf("5 - Densidade demográfica\n"); break;
                }
            }
        }
        printf("Digite sua escolha: ");
        scanf("%d", &escolha2);

        // Validação da segunda escolha
        if (escolha2 < 1 || escolha2 > 5 || escolha2 == escolha1) {
            printf("Opção inválida!\n");
            continue;
        }

        printf("\n=== RESULTADO DA COMPARAÇÃO ===\n");
        printf("País 1: %s\n", pais1);
        printf("País 2: %s\n\n", pais2);

        // Comparação do primeiro atributo
        printf("Comparação do primeiro atributo:\n");
        switch (escolha1) {
            case 1:
                printf("População: %d x %d\n", populacao1, populacao2);
                if (populacao1 > populacao2) {
                    printf("Vencedor: %s\n", pais1);
                } else if (populacao2 > populacao1) {
                    printf("Vencedor: %s\n", pais2);
                } else {
                    printf("Empate!\n");
                }
                soma1 = populacao1;
                soma2 = populacao2;
                break;
            case 2:
                printf("Área: %.2f x %.2f\n", area1, area2);
                if (area1 > area2) {
                    printf("Vencedor: %s\n", pais1);
                } else if (area2 > area1) {
                    printf("Vencedor: %s\n", pais2);
                } else {
                    printf("Empate!\n");
                }
                soma1 = area1;
                soma2 = area2;
                break;
            case 3:
                printf("PIB: %.2f x %.2f\n", pib1, pib2);
                if (pib1 > pib2) {
                    printf("Vencedor: %s\n", pais1);
                } else if (pib2 > pib1) {
                    printf("Vencedor: %s\n", pais2);
                } else {
                    printf("Empate!\n");
                }
                soma1 = pib1;
                soma2 = pib2;
                break;
            case 4:
                printf("Pontos turísticos: %d x %d\n", pontos1, pontos2);
                if (pontos1 > pontos2) {
                    printf("Vencedor: %s\n", pais1);
                } else if (pontos2 > pontos1) {
                    printf("Vencedor: %s\n", pais2);
                } else {
                    printf("Empate!\n");
                }
                soma1 = pontos1;
                soma2 = pontos2;
                break;
            case 5:
                printf("Densidade demográfica: %.2f x %.2f\n", densidade1, densidade2);
                if (densidade1 < densidade2) {
                    printf("Vencedor: %s (menor densidade vence)\n", pais1);
                } else if (densidade2 < densidade1) {
                    printf("Vencedor: %s (menor densidade vence)\n", pais2);
                } else {
                    printf("Empate!\n");
                }
                soma1 = densidade1;
                soma2 = densidade2;
                break;
            default:
                printf("Opção inválida!\n");
                continue;
        }

        // Comparação do segundo atributo
        printf("\nComparação do segundo atributo:\n");
        switch (escolha2) {
            case 1:
                printf("População: %d x %d\n", populacao1, populacao2);
                if (populacao1 > populacao2) {
                    printf("Vencedor: %s\n", pais1);
                } else if (populacao2 > populacao1) {
                    printf("Vencedor: %s\n", pais2);
                } else {
                    printf("Empate!\n");
                }
                soma1 += populacao1;
                soma2 += populacao2;
                break;
            case 2:
                printf("Área: %.2f x %.2f\n", area1, area2);
                if (area1 > area2) {
                    printf("Vencedor: %s\n", pais1);
                } else if (area2 > area1) {
                    printf("Vencedor: %s\n", pais2);
                } else {
                    printf("Empate!\n");
                }
                soma1 += area1;
                soma2 += area2;
                break;
            case 3:
                printf("PIB: %.2f x %.2f\n", pib1, pib2);
                if (pib1 > pib2) {
                    printf("Vencedor: %s\n", pais1);
                } else if (pib2 > pib1) {
                    printf("Vencedor: %s\n", pais2);
                } else {
                    printf("Empate!\n");
                }
                soma1 += pib1;
                soma2 += pib2;
                break;
            case 4:
                printf("Pontos turísticos: %d x %d\n", pontos1, pontos2);
                if (pontos1 > pontos2) {
                    printf("Vencedor: %s\n", pais1);
                } else if (pontos2 > pontos1) {
                    printf("Vencedor: %s\n", pais2);
                } else {
                    printf("Empate!\n");
                }
                soma1 += pontos1;
                soma2 += pontos2;
                break;
            case 5:
                printf("Densidade demográfica: %.2f x %.2f\n", densidade1, densidade2);
                if (densidade1 < densidade2) {
                    printf("Vencedor: %s (menor densidade vence)\n", pais1);
                } else if (densidade2 < densidade1) {
                    printf("Vencedor: %s (menor densidade vence)\n", pais2);
                } else {
                    printf("Empate!\n");
                }
                soma1 += densidade1;
                soma2 += densidade2;
                break;
            default:
                printf("Opção inválida!\n");
                continue;
        }

        // Exibição da soma e resultado final
        printf("\nSoma dos atributos:\n");
        printf("%s: %d\n", pais1, soma1);
        printf("%s: %d\n", pais2, soma2);

        printf("\nVencedor final: ");
        if (soma1 > soma2) {
            printf("%s\n", pais1);
        } else if (soma2 > soma1) {
            printf("%s\n", pais2);
        } else {
            printf("Empate!\n");
        }

        printf("\nDeseja comparar outros atributos? (s/n): ");
        getchar();
        repetir = getchar();

    } while (repetir == 's' || repetir == 'S');

    printf("\nPrograma finalizado.\n");
    return 0;
}

// Função adicionada para não repetir o mesmo atributo
// Função adicionada para não fechar o programa após comparar os atritubutos