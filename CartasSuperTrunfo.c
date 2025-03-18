#include <stdio.h>

    // Desafio Super Trunfo - Países
    // Tema 1 - Cadastro das Cartas

int main() {


// Declarar as variáveis da carta 1
    char codigoCarta1[5];
    char estado1[50]; 
    char cidade1[50]; 
    int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;
    
    // Declarar as variáveis da carta 2
    char codigoCarta2[5];
    char estado2[50]; 
    char cidade2[50]; 
    int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;


// Mensagem de introdução para o usuário
printf("Olá, seja bem-vindo ao cadastro de cartas do Jogo Super Trunfo!\n");
printf("Você irá cadastrar 2 cartas. Primeiro cadastre a carta 1, depois a carta 2.\n");
printf("Cadastre a carta1:\n");

// Utilização da função printf para saída de dados, e scanf para entrada de dados do usuário.

printf("Estado: Uma letra de 'A' a 'H' representando um dos oito estados. (Ex:A): ");
scanf(" %s", &estado1);


printf("Código da carta: A letra do estado seguida de um número de 01 a 04 (Ex:A01): ");
scanf(" %s", &codigoCarta1);

/* o especificador para o tipo de dado string é %s, porém, esse especificador não leva em consideração espaços, ignorando
as palavras compostas (exemplo: Rio de Janeiro). 
Por esse motivo foi necessário substituir por %[^\n], assim, ele leva em consideração todos os 
caracteres, até o limite definido pelo array, que nesse caso seriam 49 caracteres + o nulo.*/
printf("Nome da cidade: ");
scanf(" %[^\n]", &cidade1);

printf("População: O número de habitantes da cidade: ");
scanf(" %i", &populacao1);

printf("Área (em km²): ");
scanf(" %f", &area1);

printf("PIB: ");
scanf(" %f", &pib1);

printf("Número de pontos turísticos: A quantidade de pontos turísticos na cidade:\n ");
scanf("%i", &pontosTuristicos1);

printf("Muito bem! Você cadastrou a carta 1.");
printf("Por favor, cadastre a carta 2:\n");
//-----------------------------------------------------------//

// Agora o usuário cadastra os dados da carta 2:
// O cadastro da carta 2 se dá da mesma maneira e com as mesmas especificações do cadastro da carta 1, mudando apenas as variáveis.

printf("Estado: Uma letra de 'A' a 'H' representando um dos oito estados. (Ex:B). ");
scanf(" %s", &estado2);


printf("Código da carta: A letra do estado seguida de um número de 01 a 04 (Ex:B02). ");
scanf(" %s", &codigoCarta2);

printf("Nome da cidade: ");
scanf(" %[^\n]", &cidade2);

printf("População: O número de habitantes da cidade. ");
scanf(" %i", &populacao2);

printf("Área (em km²): ");
scanf(" %f", &area2);

printf("PIB: ");
scanf(" %f", &pib2);

printf("Número de pontos turísticos: A quantidade de pontos turísticos na cidade: ");
scanf("%i", &pontosTuristicos2);

printf("Muito bem! Você cadastro a carta2.\n");


    // Exibição dos Dados das Cartas:

// Após o usuário inserir os dados solicitados, eles são apresentados na tela de maneira organizada.
//carta 1:
printf("Carta 1:\n");
printf("Estado: %s \n", estado1);
printf("Código: %s\n", codigoCarta1);
printf("Nome da Cidade: %s \n", cidade1);
printf("População: %i\n", populacao1);
printf("Área: %.2f\n", area1);
printf("PIB: %.2f\n", pib1);
printf("Número de Pontos Turísticos: %i\n", pontosTuristicos1);

//carta 2:
printf("Carta2:\n");
printf("Estado: %s \n", estado2);
printf("Código: %s\n", codigoCarta2);
printf("Nome da Cidade: %s \n", cidade2);
printf("População: %i\n", populacao2);
printf("Área: %.2f\n", area2);
printf("PIB: %.2f\n", pib2);
printf("Número de Pontos Turísticos: %i\n", pontosTuristicos2);
    return 0;
    
}
