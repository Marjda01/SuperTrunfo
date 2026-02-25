#include <stdio.h>

int main(){
    char Estado1[30], Estado2[30];
    char Codigocarta1[2], Codigocarta2[2];
    char Cidade1[30], Cidade2[30];
    int Populacao1, Populacao2;
    float Area1, Area2;
    float Pib1, Pib2;
    int Turistico1, Turistico2;

    printf("Cadastro de cartas   \n");
    printf("\n");
    printf("\n");
    // Cadastro da primeira carta
    printf("Cadastro da primeira carta \n");

    printf("Digite o nome do Estado: \n");
    scanf("%s", &Estado1);

    printf("Digite o código da carta: \n");
    scanf("%s", &Codigocarta1);

    printf("Digite o nome da cidade: \n");
    scanf("%s", &Cidade1);

    printf("Digite a sua população: \n");
    scanf("%d", &Populacao1);

    printf("Digite a área em km²: \n");
    scanf("%f", &Area1);

    printf("Digite o PIB da sua cidade: \n");
    scanf("%f", &Pib1);

    printf("Digite a quantidade de pontos turísticos: \n");
    scanf("%d", &Turistico1);

    //Cadastro da segunda carta

    printf("\n");
    printf("\n");
    printf("Cadastro da segunda carta \n");

        printf("Digite o nome do Estado: \n");
    scanf("%s", &Estado2);

    printf("Digite o código da carta: \n");
    scanf("%s", &Codigocarta2);

    printf("Digite o nome da cidade: \n");
    scanf("%s", &Cidade2);

    printf("Digite a sua população: \n");
    scanf("%d", &Populacao2);

    printf("Digite a área em km²: \n");
    scanf("%f", &Area2);

    printf("Digite o PIB da sua cidade: \n");
    scanf("%f", &Pib2);

    printf("Digite a quantidade de pontos turísticos: \n");
    scanf("%d", &Turistico2);

// Área de exibição 
    printf("\n");
    printf("Dados da primeira carta \n");
    printf("\n");


    printf("Estado: %c \n", Estado1);
    printf("Código da carta: %s \n", Codigocarta1);
    printf("Cidade: %s \n", Cidade1);
    printf("População: %d \n", Populacao1);
    printf("Área em Km²: %f \n", Area1);
    printf("PIB: %f \n ", Pib1);
    printf("Número de pontos turísticos: %d \n", Turistico1);

    printf("\n");
    printf("Dados da segunda carta \n");
    printf("\n");


    printf("Estado: %c \n", Estado2);
    printf("Código da carta: %s \n", Codigocarta2);
    printf("Cidade: %s \n", Cidade2);
    printf("População: %d \n", Populacao2);
    printf("Área em Km²: %f \n", Area2);
    printf("PIB: %f \n ", Pib2);
    printf("Número de pontos turísticos: %d \n", Turistico2);

    return 0;
}
