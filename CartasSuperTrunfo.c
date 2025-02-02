#include <stdio.h>

int main() {

    char codigo[5], nomecid[50], nomeest[50];
    int populacao, area, pib, pturisticos;

    printf("Digite o codigo da carta\n");
    scanf("%d", &codigo);

    printf("Digite o nome do estado\n");
    scanf("%s", &nomeest);

    printf("Digite o nome da cidade\n");
    scanf("%s", &nomecid);

    printf("Digite a população da cidade\n");
    scanf("%d", &populacao);

    printf("Digite a area da cidade\n");
    scanf("%d", &area);

    printf("Digite o PIB da cidade\n");
    scanf("%d", &pib);

    printf("Digite o número de pontos turísticos\n");
    scanf("%d", &pturisticos);

    printf("\nAqui está os dados sobre a carta cadastrada:\n Código da carta: %s\n", codigo);
    printf("\nEstado: %s\n", nomeest);
    printf("\nCidade: %s\n", nomecid);
    printf("\nPopulação: %d\n", populacao);
    printf("\nÁrea: %d\n", area);
    printf("\nPIB: %d\n", pib);
    printf("\nPontos turísticos: %d\n", pturisticos);

    return 0;
}
