/*03 Fazer um programa que cria uma estrutura livro, 
que contém os elementos título, ano de edição, 
número de páginas e preço. 
Criar uma variável desta estrutura que é um vetor de 5 elementos. 
Ler os valores para a estrutura e imprimir a média do número de páginas do livros.
*/

#include <stdio.h>

struct Livro {
    char titulo[50]; // Título do livro
    int anoEdicao; // Ano de edição do livro
    int numPaginas; // Número de páginas do livro
    float preco; // Preço do livro
};

int main() {

    Livro livros[5]; // Vetor de livros
    int somaPaginas = 0; // Variável para armazenar a soma das páginas dos livros

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


/*Este código em C++ define uma estrutura chamada Livro e um programa principal que cria um vetor de Livro, lê os valores para cada livro e calcula a média do número de páginas dos livros.

A estrutura Livro é definida com quatro membros: titulo, que é uma matriz de caracteres, anoEdicao, que é um número inteiro, numPaginas, que também é um número inteiro, e preco, que é um número de ponto flutuante. Esses membros são usados para armazenar informações sobre um livro.

No programa principal, um vetor de Livro chamado livros é criado. Este vetor pode armazenar cinco livros. Uma variável somaPaginas também é criada para armazenar a soma do número de páginas dos livros.

Em seguida, um loop for é usado para ler os valores para cada livro. Para cada livro, o programa pede ao usuário para digitar o título, o ano de edição, o número de páginas e o preço. O número de páginas de cada livro é adicionado à somaPaginas.

Depois que todos os livros foram lidos, o programa calcula a média do número de páginas dos livros dividindo a somaPaginas por 5. Esta média é então impressa na tela com duas casas decimais.

Finalmente, o programa retorna 0, que é uma convenção em C++ para indicar que o programa terminou com sucesso.*/