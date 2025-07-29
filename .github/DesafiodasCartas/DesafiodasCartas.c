#include <stdio.h>

int main(){

    printf("====== CARTA 1 ======\n");

    int populacao;
    int pontosturisticos;
    char cidade [20];
    char estado;
    char codigo [5];
    float area;


    printf("Escolha a cidade:\n");
    scanf("%s", cidade);

    printf("Numero de Habitantes:\n");
    scanf("%d", &populacao);

    printf("Pontos turisticos:\n");
    scanf("%d", &pontosturisticos);

    printf("Estado (ex: entre A e H)\n");
    scanf(" %c", &estado);
 
    printf("Area:\n");
    scanf(" %f", &area);

    printf("Codigo: ex: A01\n");
    scanf("%s", codigo);

     printf("====== CARTA 2 ======\n");

    int populacao2;
    int pontosturisticos2;
    char cidade2 [20];
    char estado2;
    char codigo2 [5];
    float area2;

    printf("Escolha a cidade:\n");
    scanf("%s", cidade2);

    printf("Numero de Habitantes:\n");
    scanf("%d", &populacao2);

    printf("Pontos turisticos:\n");
    scanf("%d", &pontosturisticos2);

    printf("Estado (ex: entre A e H)\n");
    scanf(" %c", &estado2);

    printf("Area:\n");
    scanf(" %f", &area2);
     
    printf("Codigo: ex: A02\n");
    scanf("%s", codigo2);

    printf("====== Carta 1 ======\n");

    printf("Cidade: %s\n", cidade);
    printf("Habitantes: %d\n", populacao);
    printf("Pontos turisticos: %d\n", pontosturisticos);
    printf("Estado: %c\n", estado);
    printf("Area: %.2f km²\n", area);
    printf("Codigo: %s\n", codigo);

    printf("====== Carta 2 ======\n");

    printf("Cidade: %s\n", cidade2);
    printf("Habitantes: %d\n", populacao2);
    printf("Pontos turisticos: %d\n", pontosturisticos2);
    printf("Estado: %c\n", estado2);
    printf("Area: %.2f km²\n", area2);
    printf("Codigo: %s\n", codigo2);

    return 0;

}