#include <stdio.h>

// Desafio Batalha Naval - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de Batalha Naval.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Nível Novato - Posicionamento dos Navios
    // Sugestão: Declare uma matriz bidimensional para representar o tabuleiro (Ex: int tabuleiro[5][5];).
    // Sugestão: Posicione dois navios no tabuleiro, um verticalmente e outro horizontalmente.
    // Sugestão: Utilize `printf` para exibir as coordenadas de cada parte dos navios.

     // Nível Aventureiro - Expansão do Tabuleiro e Posicionamento Diagonal
    // Sugestão: Expanda o tabuleiro para uma matriz 10x10.
    // Sugestão: Posicione quatro navios no tabuleiro, incluindo dois na diagonal.
    // Sugestão: Exiba o tabuleiro completo no console, mostrando 0 para posições vazias e 3 para posições ocupadas.
    
    int matriz[10][10] = {  //matriz com o tabuleiro e localização dos navios
       {0,0,0,0,3,0,0,0,0,0}
      ,{0,3,0,0,0,3,0,0,0,0}
      ,{0,3,0,0,0,0,3,0,0,0}
      ,{0,3,0,0,0,0,0,0,0,0}
      ,{0,0,0,0,0,3,3,3,0,0}
      ,{0,0,0,0,0,0,0,0,0,0}
      ,{0,0,0,0,3,0,0,0,0,0}
      ,{0,0,0,3,0,0,0,0,0,0}
      ,{0,0,3,0,0,0,0,0,0,0}
      ,{0,3,0,0,0,0,0,0,0,0}
    }, i,j;

    printf("\n###################Tabuleiro de batalha naval###################\n");  // decoração para reprara o tabuleiro do indice superior, tornando o código mais limpot.
    
    for ( i = 0; i < 10; i++){ //laço externo para linhas
      for ( j = 0; j < 10; j++){  // laço interno para colunas
        printf("%d ",matriz[i][j]); // aqui ele vai imprimir a tabela com as matrizes.
      }
      printf("\n"); //aqui é incluso o \n para pular uma linha e ficar mais limpo.
    }

    printf("###############################################################\n"); 

    if (i <= 10 && j <= 10){ // aqui ele verifica se a posição [0][0] é igual a 3, ou seja, se tem navio.
      printf("Navios dentro da posição estipulada\n"); // aqui ele imprime que o navio foi encontrado na posição [0][0].
    }
     else 
    {
      printf("Navios fora da posição estipulada\n"); // aqui ele imprime que o navio não foi encontrado na posição [0][0].    
    }
    

   
    // Nível Mestre - Habilidades Especiais com Matrizes
    // Sugestão: Crie matrizes para representar habilidades especiais como cone, cruz, e octaedro.
    // Sugestão: Utilize estruturas de repetição aninhadas para preencher as áreas afetadas por essas habilidades no tabuleiro.
    // Sugestão: Exiba o tabuleiro com as áreas afetadas, utilizando 0 para áreas não afetadas e 1 para áreas atingidas.

    // Exemplos de exibição das habilidades:
    // Exemplo para habilidade em cone:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 1 1 1 1 1
    
    // Exemplo para habilidade em octaedro:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 0 0 1 0 0

    // Exemplo para habilidade em cruz:
    // 0 0 1 0 0
    // 1 1 1 1 1
    // 0 0 1 0 0

    return 0;
}
