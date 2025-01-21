#include <stdio.h>

    // Desafio Super Trunfo - Países
    // Tema 1 - Cadastro das Cartas
    // Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
    // Siga os comentários para implementar cada parte do desafio.
    //Teste larissa

int main() {

    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    //Aqui estamos declarando as variáveis

// Declarar as variáveis
    char codigoCarta[5];
    char estado[50]; 
    char cidade[50]; 
    int populacao;
    float area;
    float pib;
    int pontosTuristicos;
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
// Mensagem de introdução para o usuário
printf("Olá, seja bem-vindo ao cadastro de cartas do Jogo Super Trunfo!\n");

// Utilização da função printf para saída de dados, e scanf para entrada de dados do usuário.
printf("Digite o código da carta: ");
scanf(" %s", &codigoCarta);

/* o especificador para o tipo de dado string é %s, porém, esse especificador não leva em consideração espaços, ignorando
as palavras compostas (exemplo: Rio de Janeiro). 
Por esse motivo foi necessário substituir por %[^\n], assim, ele leva em consideração todos os 
caracteres, até o limite definido pelo array, que nesse caso seriam 49 caracteres + o nulo.*/
printf("Digite o nome do estado: ");
scanf(" %[^\n]", &estado);

printf("Digite o nome da cidade: ");
scanf(" %[^\n]", &cidade);

printf("Digite a quantidade da população: ");
scanf(" %i", &populacao);

printf("Digite a área da cidade: ");
scanf(" %f", &area);

printf("Digite o PIB da cidade: ");
scanf(" %f", &pib);

printf("Digite a quantidade de pontos turísticos que existem na cidade: ");
scanf("%i", &pontosTuristicos);

    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

// Após o usuário inserir os dados solicitados, eles são apresentados na tela de maneira organizada.
printf("Código da carta: %s\n", codigoCarta);
printf("Estado: %s \n", estado);
printf("Cidade: %s \n", cidade);
printf("População da cidade: %i\n", populacao);
printf("Área da cidade em km²: %.2f\n", area);
printf("PIB da cidade: %.2f\n", pib);
printf("Quantidade de pontos turísticos: %i\n", pontosTuristicos);


    return 0;
    
}
