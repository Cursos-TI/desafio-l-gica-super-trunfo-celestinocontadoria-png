#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // ===================================
    // Declaração das variáveis
    // ===================================
    char cidade1[50],cidade2[50];
    int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int opcao;

    // ===================================
    // Cadastro das Cartas 1
    // ===================================
    printf("\n=== CADASTRO DA CIDADE 1 ===\n");
    printf("Nome da cidade: ");
    scanf(" %[^\n]",cidade1); //utilizei (" %[^\n]",cidade1) - porque pode aparecer nome composto.

    printf("Populacao: ");
    scanf("%d",&populacao1); //O %d significa que é esperado um número decimal e o & é onde esse número será armazenado.

    printf("Area (km²): ");
    scanf("%f",&area1); //O %f ele trabalha o float na declaração das variáveis.

    printf("PIB (em bilhões): ");
    scanf("%f",&pib1);

    // ==================================
    // Cadastro das Cartas 2
    // ==================================
    printf("\n===CADASTRO DA CIDADE 2 ===\n");
    printf("Nome da cidade: ");
    scanf(" %49[^\n]",cidade2); // %49 Limita para não estourar o vetor.

    printf("Populacao: ");
    scanf("%d",&populacao2);

    printf("Area (km²): ");
    scanf("%f",&area2);

    printf("PIB (em bilhões): ");
    scanf("%f",&pib2);


    // =================================
    // Escolher atributo de comparação
    // =================================
    printf("\n=== COMPARAÇÃO DE CARTAS ===\n");
    printf("Escolha o atributo para comparação:\n");
    printf("1 - Populacao\n");
    printf("2 - Area (km²)\n");
    printf("3 - PIB (em bilhões)\n");
    printf("Opcao:");
    scanf("%d",&opcao);

    // ==================================
    // Exibição dos Resultados
    // ==================================
    if(opcao == 1){
        printf("\nAtributo escolhido: POPULAÇÃO\n");
    if (populacao1 > populacao2) {
        printf("\nVencedora: %s (Cidade 1)\n",cidade1);
    } else if (populacao2 > populacao1){
        printf("Vencedora: %s (Cidade 2)\n",cidade2);
    }else{
        printf("Empate! As duas cidades tem a mesma população.\n");
    }

}else if(opcao == 2){
    printf("\nAtributo escolhido: ÁREA\n");
    if(area1 > area2){
        printf("Vencedora: %s (Cidade 1)\n",cidade1);
    }else if(area2 > area1){
        printf("Vencedora: %s (Cidade 2)\n",cidade2);
    }else{
        printf("Empate! As duas cidades tem a mesma área.\n");
    }
  }else if(opcao == 3){
     printf("\nAtributo escolhido: PIB\n");
     if(pib1 > pib2){
        printf("Vencedora: % (Cidade 1)\n",cidade1); // O nome da cidade está saindo cortado. Resolvi tirar o s do %s.
     }else if(pib2 > pib1){
        printf("Vencedora: % (Cidade 2)\n",cidade2);
     }else{
        printf("Empate! As duas cidades tem o mesmo PIB.\n");
     }
  }else{
    printf("\nOpção inválida! Você deve escolher uma das opções 1,2 ou 3.\n");
  }
  return 0;
}

    
  