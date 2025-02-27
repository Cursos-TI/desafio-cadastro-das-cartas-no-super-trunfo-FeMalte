#include <stdio.h> // Inicialização da biblioteca

int main() { // Início da função principal
    
    // Declaração das variáveis do card1
    int carta = 1; 
    char estado;
    char codigo[4]; // Array para armazenar o código (3 caracteres (0,1 e 2) + \n (3) + terminador nulo (4))
    char cidade[20];
    int populacao;
    float pib;
    float area;
    int pontosturiscos;

    // Declaração das variáveis do card2
    int carta2 = 2;
    char estado2;
    char codigo2[4]; // Array para armazenar o código (3 caracteres (0,1 e 2) + \n (3) + terminador nulo (4))
    char cidade2[20];
    int populacao2;
    float pib2;
    float area2;
    int pontosturiscos2;

    // Leitura e gravação dos dados do card1
    printf("\nInforme o Estado do card 1: \n"); // Mostra qual informação inserir
    scanf(" %c", &estado); // Grava a informação inserida

    printf("\nInforme a Código do card 1: \n");
    scanf("%s", codigo); // Não precisa de & (char com leitura em string), Grava a informação inserida

    printf("\nInforme a Cidade do card 1: \n");
    scanf("%s", cidade); 

    printf("\nInforme a População do card 1: \n"); 
    scanf("%d", &populacao);
    
    printf("\nInforme a Área (em km²) do card 1: \n");
    scanf("%f", &area);

    printf("\nInforme o PIB do card 1: \n");
    scanf("%f", &pib);
     
    printf("\nInforme quantos pontos turísticos tem o card 1: \n");
    scanf("%d", &pontosturiscos);

    printf("\n\n");
    
    // Leitura e gravação dos dados do card2
    printf("\nInforme o Estado do card 2: \n");
    scanf(" %c", &estado2);

    printf("\nInforme a Código do card 2: \n");
    scanf("%s", codigo2); 

    printf("\nInforme a Cidade do card 2: \n");
    scanf("%s", cidade2);

    printf("\nInforme a População do card 2: \n");
    scanf("%d", &populacao2);
    
    printf("\nInforme a Área (em km²) do card 2: \n");
    scanf("%f", &area2);

    printf("\nInforme o PIB do card 2: \n");
    scanf("%f", &pib2);
    
    printf("\nInforme quantos pontos turísticos tem o card 2: \n");
    scanf("%d", &pontosturiscos2);
    
    printf("\n\n");

    // Exibição das informações do Card1
    printf("Carta: %d\n", carta);
    printf("Estado: %c\n", estado);
    printf("Código: %s\n", codigo);
    printf("Cidade: %s\n", cidade);
    printf("População: %d\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: %.2f bilhões de reais\n", pib);
    printf("Número de pontos turísticos: %d\n", pontosturiscos);
    printf("\n\n");

    // Exibição das informações do Card2
    printf("Carta: %d\n", carta2);
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de pontos turísticos: %d\n", pontosturiscos2);

    printf("\n\n");

    return 0;
}