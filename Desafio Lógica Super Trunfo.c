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

    
    // Declaração das variáveis resultado e escolha
    int resultado = 0, resultado2 = 0, escolha, escolha2;

    // Leitura e gravação dos dados do card1
    printf("\nInforme o Estado do card 1: \n"); // Mostra qual informação inserir
    scanf("%c", &estado); // Grava a informação inserida

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

    printf("Escolha 2 atributos para comparar:\n\n");
    // Início do menu
    printf("1 - População\n");
    printf("2 - Área em km²\n");
    printf("3 - PIB em bilhões de reais\n");
    printf("4 - Número de Pontos Turísticos\n");
    printf("5 - Densidade Populacional em hab/km²\n");
    printf("\n");
    printf("Primeira Escolha: ");
    scanf("%d",&escolha); //Primeira escolha do menu
    
    //Validação da primeira escolha
    if (escolha < 1 || escolha > 5){
        printf("Escolha uma opção válida!\n");
        printf("Primera Escolha:");
        scanf("%d",&escolha); //Segunda escolha do menu
        printf("\n");
    }
    //Segunda escolha do menu
    printf("Segunda Escolha: ");
    scanf("%d",&escolha2);

    //Primeira validação da segunda escolha
    if (escolha2 < 1 || escolha2 > 5){
        printf("Escolha uma opção válida!\n");
        printf("Segunda Escolha:");
        scanf("%d",&escolha2);
    }
    //Segunda validação da segunda escolha
    escolha == escolha2 ? printf("Escolha uma opção diferente da primeira!\n\n") : printf("Escolhas válidas.\n\n");
    if (escolha == escolha2)
    { 
        switch (escolha2)//Monstrando menu com as alternativas disponíveis
        {
        case 1:
            escolha2 == 1 ? printf("2 - Área em km²\n3 - PIB em bilhões de reais\n4 - Número de Pontos Turísticos\n5 - Densidade Populacional em hab/km²\n") : 0;
            printf("Segunda escolha: ");
            scanf("%d",&escolha2); 
            break;
        case 2:
            escolha2 == 2 ? printf("1 - População\n3 - PIB em bilhões de reais\n4 - Número de Pontos Turísticos\n5 - Densidade Populacional em hab/km²\n") : 0 ;
            printf("Segunda escolha: ");
            scanf("%d",&escolha2); 
            printf("\n");
            break;
        case 3:
            escolha2 == 3 ? printf("1 - População\n2 - Área em km²\n4 - Número de Pontos Turísticos\n5 - Densidade Populacional em hab/km²\n") : 0 ;
            printf("Segunda escolha:");
            scanf("%d",&escolha2);
            printf("\n");
            break;
        case 4:
            escolha2 == 4 ? printf("1 - População\n2 - Área em km²\n3 - PIB em bilhões de reais\n5 - Densidade Populacional em hab/km²\n") : 0 ;
            printf("Segunda escolha:");
            scanf("%d",&escolha2); 
            printf("\n");
            break;
        case 5:
            escolha2 == 5 ? printf("1 - População\n2 - Área em km²\n3 - PIB em bilhões de reais\n4 - Número de Pontos Turísticos\n") : 0 ;
            printf("Segunda escolha:");
            scanf("%d",&escolha2);  
            printf("\n");
        default:
            printf("Você escolheu uma alternativa indisponível!\n");
            break;
        }
    }
    //Mostrando e comparando atributos da primeira escolha com operador ternário
    switch (escolha)
    {
        case 1:
            printf("-----------------------------------------\n");
            printf("Primeiro atributo escolhido: População\n");
            printf("-----------------------------------------\n");
            printf("Nome da Cidade: %s\n", cidade);
            printf("População: %d\n", populacao);
            printf("-----------------------\n");
            printf("Nome da Cidade: %s\n", cidade2);
            printf("População: %d\n", populacao2);
            printf("-----------------------\n");
            populacao > populacao2 ? resultado ++ : resultado2 ++;
            break;
        case 2:
            printf("-----------------------------------------\n");
            printf("Primeiro atributo escolhido: Área\n");
            printf("-----------------------------------------\n");
            printf("Nome da Cidade: %s\n", cidade);
            printf("Área: %.2f\n", area);
            printf("-----------------------\n");
            printf("Nome da Cidade: %s\n", cidade2);
            printf("Área: %.2f\n", area2);
            printf("-----------------------\n");
            area > area2 ? resultado ++ : resultado2 ++;         
            break;
        case 3:
            printf("-----------------------------------------\n");
            printf("Primeiro atributo escolhido: PIB\n");
            printf("-----------------------------------------\n");
            printf("Nome da Cidade: %s\n", cidade);
            printf("PIB: %.2f\n", pib);
            printf("-----------------------\n");
            printf("Nome da Cidade: %s\n", cidade2);
            printf("PIB: %.2f\n", pib2);
            printf("-----------------------\n");
            pib > pib2 ? resultado ++ : resultado2 ++;         
            break;
        case 4:
            printf("------------------------------------------------\n");
            printf("Primeiro atributo escolhido: Pontos turísticos\n");
            printf("------------------------------------------------\n");
            printf("Nome da Cidade: %s\n", cidade);
            printf("Pontos turiscos: %d\n", pontosturiscos);
            printf("-----------------------\n");
            printf("Nome da Cidade: %s\n", cidade2);
            printf("Pontos turiscos: %d\n", pontosturiscos2);
            printf("-----------------------\n");
            pontosturiscos > pontosturiscos2 ? resultado ++ : resultado2 ++;
            break;
        case 5:
            printf("-----------------------------------------\n");
            printf("Primeiro atributo escolhido: Densidade\n");
            printf("-----------------------------------------\n");
            printf("Nome da Cidade: %s\n", cidade);
            printf("Densidade: %.2f\n", densidade);
            printf("-----------------------\n");
            printf("Nome da Cidade: %s\n", cidade2);
            printf("Densidade: %.2f\n", densidade2);
            printf("-----------------------\n");
            densidade < densidade2 ? resultado ++ : resultado2 ++;
            break;
                   
        default:
            printf("Você escolheu uma alternativa indisponível!\n");
            break;
    }
    //Mostrando e comparando atributos da segunda escolha com operador de decisão aninhado
    switch (escolha2)
    {
        case 1:
            printf("-----------------------------------------\n");
            printf("Segundo atributo escolhido: População\n");
            printf("-----------------------------------------\n");
            if (populacao > populacao2)//Caso a carta 1 vença
            {
                printf("Nome da Cidade: %s\n", cidade);
                printf("População: %d\n", populacao);
                printf("-----------------------\n");
                printf("Nome da Cidade: %s\n", cidade2);
                printf("População: %d\n", populacao2);
                printf("-----------------------\n");
                resultado ++;
            } else if (populacao < populacao2)//Caso a carta 2 vença
            {
                printf("Nome da Cidade: %s\n", cidade);
                printf("População: %d\n", populacao);
                printf("-----------------------\n");
                printf("Nome da Cidade: %s\n", cidade2);
                printf("População: %d\n", populacao2);
                printf("-----------------------\n");
                resultado2 ++;
            } else 
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
            printf("-----------------------------------------\n");
            printf("Segundo atributo escolhido: Área\n");
            printf("-----------------------------------------\n");
            if (area > area2)
            {
                printf("Nome da Cidade: %s\n", cidade);
                printf("Área: %.2f\n", area);
                printf("-----------------------\n");
                printf("Nome da Cidade: %s\n", cidade2);
                printf("Área: %.2f\n", area2);
                printf("-----------------------\n");
                resultado ++;
            } else if (area < area2)
            {
                printf("Nome da Cidade: %s\n", cidade);
                printf("Área: %.2f\n", area);
                printf("-----------------------\n");
                printf("Nome da Cidade: %s\n", cidade2);
                printf("Área: %.2f\n", area2);
                printf("-----------------------\n");
                resultado2 ++;
            } else 
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
            printf("-----------------------------------------\n");
            printf("Segundo atributo escolhido: PIB\n");
            printf("-----------------------------------------\n");
            if (pib > pib2)
            {
                printf("Nome da Cidade: %s\n", cidade);
                printf("PIB: %.2f\n", pib);
                printf("-----------------------\n");
                printf("Nome da Cidade: %s\n", cidade2);
                printf("PIB: %.2f\n", pib2);
                printf("-----------------------\n");
                resultado ++;
            } else if (pib < pib2)
            {
                printf("Nome da Cidade: %s\n", cidade);
                printf("PIB: %.2f\n", pib);
                printf("-----------------------\n");
                printf("Nome da Cidade: %s\n", cidade2);
                printf("PIB: %.2f\n", pib2);
                printf("-----------------------\n");
                resultado2 ++;
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
            printf("-------------------------------------------------\n");
            printf("Segundo atributo escolhido: Pontos turísticos\n");
            printf("-------------------------------------------------\n");
            if (pontosturiscos > pontosturiscos2)
            {
                printf("Nome da Cidade: %s\n", cidade);
                printf("Pontos turiscos: %d\n", pontosturiscos);
                printf("-----------------------\n");
                printf("Nome da Cidade: %s\n", cidade2);
                printf("Pontos turiscos: %d\n", pontosturiscos2);
                printf("-----------------------\n");
                resultado ++;
            } else if (pontosturiscos < pontosturiscos2)
            {
                printf("Nome da Cidade: %s\n", cidade);
                printf("Pontos turiscos: %d\n", pontosturiscos);
                printf("-----------------------\n");
                printf("Nome da Cidade: %s\n", cidade2);
                printf("Pontos turiscos: %d\n", pontosturiscos2);
                printf("-----------------------\n");
                resultado2 ++;
            } else 
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
            printf("-----------------------------------------\n");
            printf("Segundo atributo escolhido: Densidade\n");
            printf("-----------------------------------------\n");
            if (densidade < densidade2)
            {
                printf("Nome da Cidade: %s\n", cidade);
                printf("Densidade: %.2f\n", densidade);
                printf("-----------------------\n");
                printf("Nome da Cidade: %s\n", cidade2);
                printf("Densidade: %.2f\n", densidade2);
                printf("-----------------------\n");
                resultado ++;
            } else if (densidade > densidade2)
            {
                printf("Nome da Cidade: %s\n", cidade);
                printf("Densidade: %.2f\n", densidade);
                printf("-----------------------\n");
                printf("Nome da Cidade: %s\n", cidade2);
                printf("Densidade: %.2f\n", densidade2);
                printf("-----------------------\n");
                resultado2 ++;
            } else 
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
                   
        default:
            printf("Você escolheu uma alternativa indisponível!\n");
            break;
    }
        
    printf("Pontos da carta 1: %d\nPontos da carta 2: %d\n", resultado, resultado2);
    
    resultado == resultado2 ? printf("Empate!"):0;
    resultado > resultado2 ? printf("Vitória da carta 1: %s!",cidade):printf("Vitória da carta 2: %s!",cidade2);
  
    return 0;
}