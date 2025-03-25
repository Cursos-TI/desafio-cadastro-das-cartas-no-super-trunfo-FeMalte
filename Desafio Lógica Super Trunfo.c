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

    
    // Declaração da variável escolha
    int escolha;

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
    printf("Densidade Populacional: %.2f hab/km²\n", densidade);
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

    printf("Escolha qual atributo comparar:\n\n");
    // Início do menu
    printf("1 - População\n");
    printf("2 - Área em km²\n");
    printf("3 - PIB em bilhões de reais\n");
    printf("4 - Número de Pontos Turísticos\n");
    printf("5 - Densidade Populacional em hab/km²\n");
    printf("\n");
    printf("Escolha:");
    scanf("%d",&escolha); //escolha do menu

    switch (escolha) //Início dos possíveis casaos de escolha
    {
        case 1:
            printf("---------------------------------\n");
            printf("Atributo escolhido: População\n");
            printf("---------------------------------\n");
            //Início das comparações
            if (populacao > populacao2)
            {
                printf("Nome da Cidade: %s\n", cidade);
                printf("População: %d\n", populacao);
                printf("-----------------------\n");
                printf("Nome da Cidade: %s\n", cidade2);
                printf("População: %d\n", populacao2);
                printf("-----------------------\n");
                printf("#### A carta 1 ####\n#### %s Venceu!!!####",cidade);
            } 
            else if (populacao < area2)
            {
                printf("Nome da Cidade: %s\n", cidade);
                printf("População: %d\n", populacao);
                printf("-----------------------\n");
                printf("Nome da Cidade: %s\n", cidade2);
                printf("População: %d\n", populacao2);
                printf("-----------------------\n");
                printf("#### A carta 2 ####\n#### %s Venceu!!!####",cidade2);
            } 
            else //Caso de Empate
            {
                printf("Nome da Cidade: %s\n", cidade);
                printf("População: %d\n", populacao);
                printf("-----------------------\n");
                printf("Nome da Cidade: %s\n", cidade2);
                printf("População: %d\n", populacao2);
                printf("-----------------------\n");
                printf("#### Empate! ####\n\n");
            }
            break;
        case 2:
            printf("-----------------------------\n");
            printf("Atributo escolhido: Área\n");
            printf("-----------------------------\n");
            if (area > area2)
                {
                printf("Nome da Cidade: %s\n", cidade);
                printf("Área: %.2f\n", area);
                printf("-----------------------\n");
                printf("Nome da Cidade: %s\n", cidade2);
                printf("Área: %.2f\n", area2);
                printf("-----------------------\n");
                printf("#### A carta 1 ####\n#### %s Venceu!!!####",cidade);
            } 
            else if (area < area2)
            {
                printf("Nome da Cidade: %s\n", cidade);
                printf("Área: %.2f\n", area);
                printf("-----------------------\n");
                printf("Nome da Cidade: %s\n", cidade2);
                printf("Área: %.2f\n", area2);
                printf("-----------------------\n");
                printf("#### A carta 2 ####\n#### %s Venceu!!!####",cidade2);
            } 
            else 
            {
                printf("Nome da Cidade: %s\n", cidade);
                printf("Área: %.2f\n", area);
                printf("-----------------------\n");
                printf("Nome da Cidade: %s\n", cidade2);
                printf("Área: %.2f\n", area2);
                printf("-----------------------\n");
                printf("#### Empate! ####\n\n");
            }
            break;
        case 3:
            printf("--------------------------\n");
            printf("Atributo escolhido: PIB\n");
            printf("--------------------------\n");
            if (pib > pib2)
            {
                printf("Nome da Cidade: %s\n", cidade);
                printf("PIB: %.2f\n", pib);
                printf("-----------------------\n");
                printf("Nome da Cidade: %s\n", cidade2);
                printf("PIB: %.2f\n", pib2);
                printf("-----------------------\n");
                printf("#### A carta 1 ####\n#### %s Venceu!!!####",cidade);
            } else if (pib < pib2)
            {
                printf("Nome da Cidade: %s\n", cidade);
                printf("PIB: %.2f\n", pib);
                printf("-----------------------\n");
                printf("Nome da Cidade: %s\n", cidade2);
                printf("PIB: %.2f\n", pib2);
                printf("-----------------------\n");
                printf("#### A carta 2 ####\n#### %s Venceu!!!####",cidade2);
            } else 
            {
                printf("Nome da Cidade: %s\n", cidade);
                printf("PIB: %.2f\n", pib);
                printf("-----------------------\n");
                printf("Nome da Cidade: %s\n", cidade2);
                printf("PIB: %.2f\n", pib2);
                printf("-----------------------\n");
                printf("#### Empate! ####\n\n");
            }
            break;
        case 4:
            printf("-------------------------------------\n");
            printf("Atributo escolhido: Pontos turiscos\n");
            printf("-------------------------------------\n");
            if (pontosturiscos > pontosturiscos2)
            {
                printf("Nome da Cidade: %s\n", cidade);
                printf("Pontos turiscos: %d\n", pontosturiscos);
                printf("-----------------------\n");
                printf("Nome da Cidade: %s\n", cidade2);
                printf("Pontos turiscos: %d\n", pontosturiscos2);
                printf("-----------------------\n");
                printf("#### A carta 1 ####\n#### %s Venceu!!!####",cidade);
            } 
            else if (pontosturiscos < pontosturiscos2)
            {
                printf("Nome da Cidade: %s\n", cidade);
                printf("Pontos turiscos: %d\n", pontosturiscos);
                printf("-----------------------\n");
                printf("Nome da Cidade: %s\n", cidade2);
                printf("Pontos turiscos: %d\n", pontosturiscos2);
                printf("-----------------------\n");
                printf("#### A carta 2 ####\n#### %s Venceu!!!####",cidade2);
            } 
            else 
            {
                printf("Nome da Cidade: %s\n", cidade);
                printf("Pontos turiscos: %d\n", pontosturiscos);
                printf("-----------------------\n");
                printf("Nome da Cidade: %s\n", cidade2);
                printf("Pontos turiscos: %d\n", pontosturiscos2);
                printf("-----------------------\n");
                printf("#### Empate! ####\n\n");
            }
            break;
        case 5:
            printf("-------------------------------\n");
            printf("Atributo escolhido: Densidade\n");
            printf("-------------------------------\n");
            if (densidade < densidade2)
            {
                printf("Nome da Cidade: %s\n", cidade);
                printf("Densidade: %.2f\n", densidade);
                printf("-----------------------\n");
                printf("Nome da Cidade: %s\n", cidade2);
                printf("Densidade: %.2f\n", densidade2);
                printf("-----------------------\n");
                printf("#### A carta 1 ####\n#### %s Venceu!!!####",cidade);
            } 
            else if (densidade > densidade2)
            {
                printf("Nome da Cidade: %s\n", cidade);
                printf("Densidade: %.2f\n", densidade);
                printf("-----------------------\n");
                printf("Nome da Cidade: %s\n", cidade2);
                printf("Densidade: %.2f\n", densidade2);
                printf("-----------------------\n");
                printf("#### A carta 2 ####\n#### %s Venceu!!!####",cidade2);
            } 
            else 
            {
                printf("Nome da Cidade: %s\n", cidade);
                printf("Densidade: %.2f\n", densidade);
                printf("-----------------------\n");
                printf("Nome da Cidade: %s\n", cidade2);
                printf("Densidade: %.2f\n", densidade2);
                printf("-----------------------\n");
                printf("#### Empate! ####\n\n");
            }
            break;
                   
        default: //Caso de escolha inválida
            printf("Escolha uma opção válida!\n\n");
            break;
    }
  
    return 0;
}