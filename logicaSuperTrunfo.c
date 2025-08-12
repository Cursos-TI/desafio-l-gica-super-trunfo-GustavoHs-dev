#include <stdio.h>


int main() {

    // variavel para o menu interativo

    int menubatalha1, menubatalha2, resultado1, resultado2;

    // armazenamento de dados das cartas

    // carta 1
 
    char codigo1[20];
    char estado1;
    char cidade1[20];
    int populacao1;
    float area1;
    float Pib1;
    int pontosturisticos1;
    float densidadepopulacional1;
    float Pibpercapta1;
    float poder1;
    
    // carta2

    char codigo2[20];
    char estado2;
    char cidade2[20];
    int populacao2;
    float area2;
    float Pib2;
    int pontosturisticos2;
    float densidadepopulacional2;
    float Pibpercapta2;
    float poder2;
    
    // Cadastro das Cartas:

    printf("*** Super Trunfo ***\n");

    // cadastro da carta1

    printf("\nDigite uma letra de A a H(Representando um dos 8 estados):\n");
    scanf(" %c", &estado1);
    printf("Digite a letra do estado seguido de um numero de 01 a 04: \n");
    scanf("%s", codigo1);
    printf("Digite o nome da cidade:\n");
    scanf("%s", cidade1);
    printf("Digite o numero de Habitantes da cidade:\n");
    scanf("%d", &populacao1);
    printf("digite a área da cidade em quilômetros quadrados:\n");
    scanf("%f", &area1);
    printf("Digite o pib da cidade:\n");
    scanf("%f", &Pib1);
    printf("Digite o numero de potos turisticos da cidade:\n");
    scanf("%d", &pontosturisticos1);

    printf("\n*** Carta Registrada ***\n");
    printf("Cadastre a Segunda carta:\n");

    // permite que o usuario visualize que a carta foi registrada e entenda oque deve fazer em seguida

    printf("\nDigite uma letra de A a H(Representando um dos 8 estados):\n ");
    scanf(" %c", &estado2);
    printf("Digite a letra do estado seguido de um numero de 01 a 04:\n");
    scanf("%s", codigo2);
    printf("Digite o nome da cidade:\n");
    scanf("%s", cidade2);
    printf("Digite o numero de Habitantes da cidade:\n");
    scanf("%d", &populacao2);
    printf("digite a área da cidade em quilômetros quadrados:\n");
    scanf("%f", &area2);
    printf("Digite o pib da cidade:\n");
    scanf("%f", &Pib2);
    printf("Digite o numero de potos turisticos da cidade:\n");
    scanf("%d", &pontosturisticos2);

    printf("*** Carta Registrada ***\n");
    // novamente permite que o usuario visualize que o codigo esta funcionando corretamente

    // calcula os dados fornecidos pelo usuario para definir os valores de densidade populacional, pib per capta e super poder

    densidadepopulacional1 = (float)populacao1 / area1;
    Pibpercapta1 = Pib1 / (float)populacao1;
    poder1 = (float)populacao1 + area1 + Pib1 + (float)pontosturisticos1 + Pibpercapta1 - densidadepopulacional1;

    densidadepopulacional2 = (float)populacao2 / area2;
    Pibpercapta2 = Pib2 / (float)populacao2;
    poder2 = (float)populacao2 + area2 + Pib2 + (float)pontosturisticos2 + Pibpercapta2 - densidadepopulacional2;
    
    // Exibição dos Dados das Cartas:

    // carta 1

    printf("\n*** Carta1 ***\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", Pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosturisticos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadepopulacional1);
    printf("PIB per Capita: %.2f Reais\n", Pibpercapta1);
    printf("Super Poder: %.2f\n", poder1);

    // carta 2

    printf("\n*** Carta2 ***\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", Pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosturisticos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadepopulacional2);
    printf("PIB per Capita: %.2f Reais\n", Pib2);
    printf("Super Poder: %.2f\n", poder1);

    // menu de  introducão da batalha de cartas com a expicação sobre como funciona o sistema

    printf("\n*** Batalha  De Cartas ***\n");

    printf("\n    Como funciona:\n");
    printf("com os atributos das cartas definidos chegou a hora de iniciar o jogo\n");
    printf("escolha dentre as opções abaixo um atributo das cartas para ser comparado com a outra\n");
    printf("a carta com o maior atributo vence, porem para a Densidade demografica a carta com o menor valor vence\n");

    printf("\n*** Primeira batalha ***\n");
    printf("Escolha o primeiro atributo para a batalha:\n");
    printf("1. Populacão\n");
    printf("2. Areakm²\n");
    printf("3. Pib\n");
    printf("4. Numero de pontos turísticos\n");
    printf("5. Densidade demografica\n");
    scanf("%d", &menubatalha1);

    // primeiro menu da batalha incluso com a comparação dos atributos escolhidos pelo usuario
    switch(menubatalha1){
        case 1:
            printf("Qual a maior População\n");
            printf("%s VS %s\n", cidade1, cidade2);
            printf("%d Habitantes VS %d Habitantes\n", populacao1, populacao2);
            resultado1 = (populacao1 > populacao2) ? 1 : 0;
            break;
        case 2:
            printf("Qual a maior Areakm²\n");
            printf("%s VS %s\n", cidade1, cidade2);
            printf("%.2f km² VS %.2f km²\n", area1, area2);
            resultado1 = (area1 > area2) ? 1 : 0;
            break;
        case 3:
            printf("Qual o maior PIB\n");
            printf("%s VS %s\n", cidade1, cidade2);
            printf("%.2f bilhões de reais VS %.2f bilhões de reais\n", Pib1, Pib2);
            resultado1 = (Pib1 > Pib2) ? 1 : 0;
            break;
        case 4:
            printf("Quem tem mais pontos turisticos\n");
            printf("%s VS %s\n", cidade1, cidade2);
            printf("%d VS %d\n", pontosturisticos1, pontosturisticos2);
            resultado1 = (pontosturisticos1 > pontosturisticos2) ? 1 : 0;
            break;
        case 5:
            printf("Qual menor Densidade demográfica\n");
            printf("%s VS %s\n", cidade1, cidade2);
            printf("%.2f hab/km² VS %.2f hab/km²\n", densidadepopulacional1, densidadepopulacional2);
            resultado1 = (densidadepopulacional1 < densidadepopulacional2) ? 1 : 0;
            break;
    default:
        printf("opção invalida!\n");
        break;
    }

    // resultado da primeira batalha incluso de modo que independe do atributo escolhido pelo jogador o resultado sera incluso para todos os atributos

    resultado1 == 1 ? printf("Você venceu a primeira rodada!\n") : printf("Você perdeu a primeira rodada!\n");

    printf("\n*** Segunda rodada ***\n");
    printf("Escolha o segundo atributo para a batalha:\n");
    printf("1. Populacão\n");
    printf("2. Areakm²\n");
    printf("3. Pib\n");
    printf("4. Numero de pontos turísticos\n");
    printf("5. Densidade demografica\n");
    scanf("%d", &menubatalha2);

    // segundo menu de batalha

    if (menubatalha1 == menubatalha2){
        printf("Você escolheu o mesmo atributo\n");
        // if para que nao seja possivel escolher o mesmo atributo para o segundo duelo
    }else{
        switch(menubatalha2){
            case 1:
                printf("Qual a maior População\n");
                printf("%s VS %s\n", cidade1, cidade2);
                printf("%d Habitantes VS %d Habitantes\n", populacao1, populacao2);
                resultado2 = (populacao1 > populacao2) ? 1 : 0;
                break;
            case 2:
                printf("Qual a maior Areakm²\n");
                printf("%s VS %s\n", cidade1, cidade2);
                printf("%.2f km² VS %.2f km²\n", area1, area2);
                resultado2 = (area1 > area2) ? 1 : 0;
                break;
            case 3:
                printf("Qual o maior PIB\n");
                printf("%s VS %s\n", cidade1, cidade2);
                printf("%.2f bilhões de reais VS %.2f bilhões de reais\n", Pib1, Pib2);
                resultado2 = (Pib1 > Pib2) ? 1 : 0;
                break;
            case 4:
                printf("Quem tem mais pontos turisticos\n");
                printf("%s VS %s\n", cidade1, cidade2);
                printf("%d VS %d\n", pontosturisticos1, pontosturisticos2);
                resultado2 = (pontosturisticos1 > pontosturisticos2) ? 1 : 0;
                break;
            case 5:
                printf("Qual menor Densidade demográfica\n");
                printf("%s VS %s\n", cidade1, cidade2);
                printf("%.2f hab/km² VS %.2f hab/km²\n", densidadepopulacional1, densidadepopulacional2);
                resultado2 = (densidadepopulacional1 < densidadepopulacional2) ? 1 : 0;
                break;
        default:
            printf("Opção invalida!\n");
        }

        // resultado da segunda batalha

        resultado2 == 1 ? printf("Você venceu a segunda rodada!\n") : printf("Você perdeu a segunda rodada!\n");

        printf("*** Resultado da Balha de cartas ***\n");

        if(resultado1 == 1 && resultado2 == 1){
            printf("Parabéns, você venceu!!\n"); 
        }else if (resultado1 != resultado2){
            printf("Empatou!\n");
        }else{
            printf("Você perdeu!\n");
        }

        // resultado da batalha geral somando o resultado das batalhas anteriore incluso com metodo de empate caso corra
        
    }
    return 0;
}

