/* 2) Considerando o exercício 1, criar uma variável que é um vetor da estrutura DadosAluno. 
O programa deve obter a média e a idade de 10 alunos. Depois, estes dados devem ser exibidos*/

#include <stdio.h>

struct DadosAluno {

    int idade;
    float media;
};

int main() {

    DadosAluno alunos[10];

    for (int i = 0; i < 10; i++) {

        printf("Digite a idade do aluno %d: ", i + 1); // Solicita a idade do aluno
        scanf("%d", &alunos[i].idade); // Lê a idade do aluno

        printf("Digite a média do aluno %d: ", i + 1); // Solicita a média do aluno
        scanf("%f", &alunos[i].media); // Lê a média do aluno
    }

    for (int i = 0; i < 10; i++) {

        printf("Idade do aluno %d: %d\n", i + 1, alunos[i].idade); // Exibe a idade do aluno
        printf("Média do aluno %d: %.2f\n", i + 1, alunos[i].media); // Exibe a média do aluno
    }

    return 0;
}

/*Este código em C++ define uma estrutura chamada DadosAluno. As estruturas em C++ são tipos de dados compostos que podem conter membros com diferentes tipos de dados. Neste caso, a estrutura DadosAluno tem dois membros: idade, que é um número inteiro, e media, que é um número de ponto flutuante.

O membro idade é provavelmente usado para armazenar a idade de um aluno. O membro media pode ser usado para armazenar a média de notas de um aluno.

Note que, em C++, os membros de uma estrutura são publicamente acessíveis por padrão. Isso significa que, após a criação de uma instância de DadosAluno, você pode acessar e modificar os membros idade e media diretamente.

Por exemplo, se você criar uma instância aluno de DadosAluno, você pode definir a idade do aluno para 20 e a média para 8.5 usando o código aluno.idade = 20; aluno.media = 8.5;.*/