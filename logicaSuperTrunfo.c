#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // =======================================================
    // Declaração das variáveis
    // =======================================================
    char cidade1[50],cidade2[50];
    int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int opcao

    // =======================================================
    // Cadastro das Cartas 1
    // =======================================================
    printf("\n=== CADASTRO DA CIDADE 1 ===\n");
    printf("Nome da cidade: ");
    scanf(" %[^\n]",cidade1); //utilizei (" %[^\n]",cidade1) - porque pode aparecer nome composto.

    printf("Populacao: ");
    scanf("%d",&populacao1); //O %d significa que é esperado um número decimal e o & é onde esse número será armazenado.

    printf("Area (km²): ");
    scanf("%f",&area1); //O %f ele trabalha o float na declaração das variáveis.

    printf("PIB (em bilhões): ");
    scanf("%f",&pib1);

    // =======================================================
    // Cadastro das Cartas 2
    // =======================================================
    printf("\n===CADASTRO DA CIDADE 2 ===\n");
    printf("Nome da cidade: ");
    scanf(" %[^\n]",cidade2);

    printf("Populacao: ");
    scanf("%d",populacao2);

    printf("Area (km²): ");
    scanf("%f",&area2);

    printf("PIB (em bilhões): ");
    scanf("%f",&pib2);




    // Comparação de Cartas:
    // Desenvolva a lógica de comparação entre duas cartas.
    // Utilize estruturas de decisão como if, if-else para comparar atributos como população, área, PIB, etc.

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
