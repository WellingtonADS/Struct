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

        printf("Digite a idade do aluno %d: ", i + 1); 
        scanf("%d", &alunos[i].idade); 

        printf("Digite a média do aluno %d: ", i + 1); 
        scanf("%f", &alunos[i].media); 
    }

    for (int i = 0; i < 10; i++) {

        printf("Idade do aluno %d: %d\n", i + 1, alunos[i].idade);
        printf("Média do aluno %d: %.2f\n", i + 1, alunos[i].media); 
    }

    return 0;
}

