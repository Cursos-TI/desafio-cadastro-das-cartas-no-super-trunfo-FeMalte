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
    float densidade;
    float pibpercapita;

    // Declaração das variáveis do card2
    int carta2 = 2;
    char estado2;
    char codigo2[4]; // Array para armazenar o código (3 caracteres (0,1 e 2) + \n (3) + terminador nulo (4))
    char cidade2[20];
    int populacao2;
    float pib2;
    float area2;
    int pontosturiscos2; 
    float densidade2;
    float pibpercapita2;

    // Declaração da variável resultado
    int resultado;

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

    //Calculo da densidade
    densidade = (float)(populacao / area);
    //Calculo do pib per capita
    pibpercapita = ((float)pib * 1000000000/ populacao);

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
    
    //Calculo da densidade
    densidade2 = (float)(populacao2 / area2);
    //Calculo do pib per capita
    pibpercapita2 = ((float)pib2 * 1000000000/ populacao2);

    printf("\n\n");

    // Exibição das informações do Card1
    printf("Carta: %d\n", carta);
    printf("Estado: %c\n", estado);
    printf("Código: %s\n", codigo);
    printf("Nome da Cidade: %s\n", cidade);
    printf("População: %d\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: %.2f bilhões de reais\n", pib);
    printf("Número de Pontos Turísticos: %d\n", pontosturiscos);
    printf("Densidade Populacional: %.2f hab/km²\n ", densidade);
    printf("PIB per Capita: %.2f reais\n", pibpercapita);
    printf("\n\n");

    // Exibição das informações do Card2
    printf("Carta: %d\n", carta2);
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosturiscos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f reais\n", pibpercapita2);

    printf("\n\n");

    //Comparação do atributo população
    printf("Comparação do atributo População:\n");
    if (populacao > populacao2)//Comparando população das cartas 1 e 2
    {   //Caso a carta 1 vença
        printf("Carta 1 - %s: %d\n", cidade, populacao);//Mostra o valor do atributo população da carta 1
        printf("Carta 2 - %s: %d\n", cidade2, populacao2);//Mostra o valor do atributo população da carta 2
        printf("Carta 1 (%s) venceu!\n", cidade);//Mostra a cidade da carta vencedora
    } else { //Caso a carta 2 vença
        printf("Carta 1 - %s: %d\n", cidade, populacao);
        printf("Carta 2 - %s: %d\n", cidade2, populacao2);
        printf("Carta 2 (%s) venceu!\n", cidade2);
    };
    
    return 0;
}