#include <stdio.h>

int main() {
    // Carta 1 – Brasil
    char nome1[] = "Brasil";
    int populacao1 = 213000000;
    float area1 = 8515767.0;
    float pib1 = 1490.0; // em bilhões de reais
    int pontos1 = 75;
    float densidade1 = populacao1 / area1;

    // Carta 2 – Japão
    char nome2[] = "Japão";
    int populacao2 = 125800000;
    float area2 = 377975.0;
    float pib2 = 4937.0;
    int pontos2 = 88;
    float densidade2 = populacao2 / area2;

    // Cabeçalho
    printf("\n🃏 SUPER TRUNFO INTERNACIONAL 🃏\n");
    printf("Cartas carregadas:\n");
    printf("1️⃣ %s\n2️⃣ %s\n\n", nome1, nome2);

    // Menu de comparação
    int opcao;
    printf("Escolha um atributo para comparar:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turísticos\n");
    printf("5 - Densidade Demográfica (menor vence!)\n");
    printf("Opção: ");
    scanf("%d", &opcao);

    printf("\nComparando %s vs %s:\n", nome1, nome2);

    switch (opcao) {
        case 1:
            printf("População:\n");
            printf("%s: %d\n", nome1, populacao1);
            printf("%s: %d\n", nome2, populacao2);
            if (populacao1 > populacao2)
                printf("🏆 Vencedor: %s\n", nome1);
            else if (populacao2 > populacao1)
                printf("🏆 Vencedor: %s\n", nome2);
            else
                printf("🤝 Empate!\n");
            break;

        case 2:
            printf("Área (km²):\n");
            printf("%s: %.2f\n", nome1, area1);
            printf("%s: %.2f\n", nome2, area2);
            if (area1 > area2)
                printf("🏆 Vencedor: %s\n", nome1);
            else if (area2 > area1)
                printf("🏆 Vencedor: %s\n", nome2);
            else
                printf("🤝 Empate!\n");
            break;

        case 3:
            printf("PIB (bilhões):\n");
            printf("%s: %.2f\n", nome1, pib1);
            printf("%s: %.2f\n", nome2, pib2);
            if (pib1 > pib2)
                printf("🏆 Vencedor: %s\n", nome1);
            else if (pib2 > pib1)
                printf("🏆 Vencedor: %s\n", nome2);
            else
                printf("🤝 Empate!\n");
            break;

        case 4:
            printf("Pontos Turísticos:\n");
            printf("%s: %d\n", nome1, pontos1);
            printf("%s: %d\n", nome2, pontos2);
            if (pontos1 > pontos2)
                printf("🏆 Vencedor: %s\n", nome1);
            else if (pontos2 > pontos1)
                printf("🏆 Vencedor: %s\n", nome2);
            else
                printf("🤝 Empate!\n");
            break;

        case 5:
            printf("Densidade Demográfica (hab/km²):\n");
            printf("%s: %.2f\n", nome1, densidade1);
            printf("%s: %.2f\n", nome2, densidade2);
            if (densidade1 < densidade2)
                printf("🏆 Vencedor: %s\n", nome1);
            else if (densidade2 < densidade1)
                printf("🏆 Vencedor: %s\n", nome2);
            else
                printf("🤝 Empate!\n");
            break;

        default:
            printf("❌ Opção inválida. Reinicie o jogo e tente de novo.\n");
    }

    return 0;
}
