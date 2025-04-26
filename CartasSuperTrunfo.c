#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
// Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

     // Declaração das variáveis para a primeira carta
     char estado1;                   // Letra do estado (de A a H)
     char codigo1[4];                // Código da carta (ex: A01)
     char nomeCidade1[50];          // Nome da cidade
     int populacao1;                // Número de habitantes
     float area1;                   // Área da cidade em km²
     float pib1;                    // PIB da cidade
     int pontosTuristicos1;        // Número de pontos turísticos
 
     // Declaração das variáveis para a segunda carta
     char estado2;
     char codigo2[4];
     char nomeCidade2[50];
     int populacao2;
     float area2;
     float pib2;
     int pontosTuristicos2;
 
     // Coleta de dados da primeira carta
 
     printf("Cadastro da carta 1: \n");
     
     printf("Informe o estado (A-H): ");
     scanf(" %c", &estado1);
 
     printf("Informe o codigo da carta (ex: A01): ");
     scanf("%s", &codigo1);
 
     printf("Informe o nome da cidade: ");
     scanf("%s", &nomeCidade1);
 
     printf("Informe a população: ");
     scanf("%d", &populacao1);
 
     printf("Informe a area em KM2: ");
     scanf("%f", &area1);
 
     printf("Informe o PIB (Em bilhoões de reais): ");
     scanf("%f", &pib1);
 
     printf("Informe a quantidade de pontos turisticos: ");
     scanf("%d", &pontosTuristicos1);
 
     // Coleta de dados da segunda carta
 
     printf("Cadastro da carta 2: \n");
     
     printf("Informe o estado (A-H): ");
     scanf(" %c", &estado2);
 
     printf("Informe o codigo da carta (ex: B01): ");
     scanf("%s", &codigo2);
 
     printf("Informe o nome da cidade: ");
     scanf("%s", &nomeCidade2);
 
     printf("Informe a população: ");
     scanf("%d", &populacao2);
 
     printf("Informe a area em KM2: ");
     scanf("%f", &area2);
 
     printf("Informe o PIB (Em bilhoões de reais): ");
     scanf("%f", &pib2);
 
     printf("Informe a quantidade de pontos turisticos: ");
     scanf("%d", &pontosTuristicos2);
 
     // Exibição das informações cadastradas
     printf("\n\n=== Carta 1 ===\n");
     printf("Estado: %c\n", estado1);
     printf("Código: %s\n", codigo1);
     printf("Nome da Cidade: %s\n", nomeCidade1);
     printf("População: %d\n", populacao1);
     printf("Área: %.2f km²\n", area1);
     printf("PIB: %.2f bilhões de reais\n", pib1);
     printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);
 
     printf("\n\n=== Carta 2 ===\n");
     printf("Estado: %c\n", estado2);
     printf("Código: %s\n", codigo2);
     printf("Nome da Cidade: %s\n", nomeCidade2);
     printf("População: %d\n", populacao2);
     printf("Área: %.2f km²\n", area2);
     printf("PIB: %.2f bilhões de reais\n", pib2);
     printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);
 

    return 0;
}


