#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.

int main()
{
    // Definição das variáveis para armazenar as propriedades das cidades
    // Você pode utilizar o código do primeiro desafio
    char Estado1[100];
    char Codigo1[100];
    char Cidade1[100];
    int Populacao1;
    float Area1;
    float pib1;
    int pontos1;

    char Estado2[100];
    char Codigo2[100];
    char Cidade2[100];
    int Populacao2;
    float Area2;
    float pib2;
    int pontos2;

    // Cadastro das Cartas:
    // Implemente a lógica para solicitar ao usuário que insira os dados das cidades
    // utilizando a função scanf para capturar as entradas.
    // utilize o código do primeiro desafio
    printf("Carta 1:\n");
    printf("Digite o state: ");
    scanf("%s", Estado1);
    printf("Digite o código: ");
    scanf("%s", Codigo1);
    printf("Digite a cidade: ");
    scanf("%s", Cidade1);
    printf("Digite a população: ");
    scanf("%d", &Populacao1);
    printf("Digite a área: ");
    scanf("%f", &Area1);
    printf("Digite o PIB: ");
    scanf("%f", &pib1);
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontos1);

    printf("\n\nCarta 2:\n");
    printf("Digite o state: ");
    scanf("%s", Estado2);
    printf("Digite o código: ");
    scanf("%s", Codigo2);
    printf("Digite a cidade: ");
    scanf("%s", Cidade2);
    printf("Digite a população: ");
    scanf("%d", &Populacao2);
    printf("Digite a área: ");
    scanf("%f", &Area2);
    printf("Digite o PIB: ");
    scanf("%f", &pib2);
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontos2);

    // Comparação de Cartas:
    // Desenvolva a lógica de comparação entre duas cartas.
    // Utilize estruturas de decisão como if, if-else para comparar atributos como população, área, PIB, etc.
    printf("\n\nComparação das CartaS:\n");

    printf("População: ");
    if (Populacao1 > Populacao2)
    {
        printf("Cidade 1 tem maior população\n");
    }
    else if (Populacao1 < Populacao2)
    {
        printf("Cidade 2 tem maior população\n");
    }
    else
    {
        printf("As cidades têm a mesma população\n");
    }

    printf("Área: ");
    if (Area1 > Area2)
    {
        printf("Cidade 1 tem maior área\n");
    }
    else if (Area1 < Area2)
    {
        printf("Cidade 2 tem maior área\n");
    }
    else
    {
        printf("As cidades têm a mesma área\n");
    }

    printf("PIB: ");
    if (pib1 > pib2)
    {
        printf("Cidade 1 tem maior PIB\n");
    }
    else if (pib1 < pib2)
    {
        printf("Cidade 2 tem maior PIB\n");
    }
    else
    {
        printf("As cidades têm o mesmo PIB\n");
    }

    printf("Pontos turísticos: ");
    if (pontos1 > pontos2)
    {
        printf("Cidade 1 tem mais pontos turísticos\n");
    }
    else if (pontos1 < pontos2)
    {
        printf("Cidade 2 tem mais pontos turísticos\n");
    }
    else
    {
        printf("As cidades têm o mesmo número de pontos turísticos\n");
    }

    printf("Densidade Populacional: ");
    if ((Populacao1 / Area1) > (Populacao2 / Area2))
    {
        printf("Cidade 1 tem maior densidade populacional\n");
    }
    else if ((Populacao1 / Area1) < (Populacao2 / Area2))
    {
        printf("Cidade 2 tem maior densidade populacional\n");
    }
    else
    {
        printf("As cidades têm a mesma densidade populacional\n");
    }

    printf("PIB per Capita: ");
    if ((pib1 / Populacao1) > (pib2 / Populacao2))
    {
        printf("Cidade 1 tem maior PIB per Capita\n");
    }
    else if ((pib1 / Populacao1) < (pib2 / Populacao2))
    {
        printf("Cidade 2 tem maior PIB per Capita\n");
    }
    else
    {
        printf("As cidades têm o mesmo PIB per Capita\n");
    }

    printf("Super Trunfo: ");
    if ((Populacao1 + Area1 + pib1 + pontos1 + (pib1 / Populacao1) - (Populacao1 / Area1)) > (Populacao2 + Area2 + pib2 + pontos2 + (pib2 / Populacao2) - (Populacao2 / Area2)))
    {
        printf("Carta 1 é o Super Trunfo (Vencedora)!\n");
    }
    else if ((Populacao1 + Area1 + pib1 + pontos1 + (pib1 / Populacao1) - (Populacao1 / Area1)) < (Populacao2 + Area2 + pib2 + pontos2 + (pib2 / Populacao2) - (Populacao2 / Area2)))
    {
        printf("Carta 2 é o Super Trunfo (Vencedora)!\n");
    }
    else
    {
        printf("As cidades têm o mesmo valor de Super Trunfo\n");
    }

    // Exemplo:
    // if (populacaoA > populacaoB) {
    //     printf("Cidade 1 tem maior população.\n");
    // } else {
    //     printf("Cidade 2 tem maior população.\n");
    // }

    // Exibição dos Resultados:
    // Após realizar as comparações, exiba os resultados para o usuário.
    // Certifique-se de que o sistema mostre claramente qual carta venceu e com base em qual atributo.

    // Exemplo:
    // printf("A cidade vencedora é: %s\n", cidadeVencedora);

    return 0;
}
