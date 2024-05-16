/*03 Fazer um programa que cria uma estrutura livro, 
que contém os elementos título, ano de edição, 
número de páginas e preço. 
Criar uma variável desta estrutura que é um vetor de 5 elementos. 
Ler os valores para a estrutura e imprimir a média do número de páginas do livros.
*/

#include <stdio.h>

struct Livro {
    char titulo[50];
    int anoEdicao; 
    int numPaginas; 
    float preco; 
};

int main() {

    Livro livros[5]; 
    int somaPaginas = 0; 
    for (int i = 0; i < 5; i++) {

        printf("Digite o título do livro %d: ", i + 1);
        scanf("%s", livros[i].titulo);

        printf("Digite o ano de edição do livro %d: ", i + 1);
        scanf("%d", &livros[i].anoEdicao);

        printf("Digite o número de páginas do livro %d: ", i + 1);
        scanf("%d", &livros[i].numPaginas);
        somaPaginas += livros[i].numPaginas;

        printf("Digite o preço do livro %d: ", i + 1);
        scanf("%f", &livros[i].preco);
    }

    printf("Média do número de páginas dos livros: %.2f\n", (float)somaPaginas / 5);

    return 0;
}


