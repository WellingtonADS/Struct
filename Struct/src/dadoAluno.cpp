/*01 - Criar uma estrutura chamada DadosAluno, que armazena​
a média e idade de um aluno.
Na função main: criar uma variável que é uma estrutura DadosAluno;
ler a média e a idade de um aluno e armazenar na variável criada; exibir na tela a média e a idade do aluno.​*/


#include <stdio.h>

struct Aluno {

    int matricula;
    float nota;
};

int main() {

    Aluno aluno1;
    aluno1.matricula = 123;
    aluno1.nota = 8.5;

    printf("Matricula: %d\n", aluno1.matricula);
    printf("Nota: %.2f\n", aluno1.nota);

    return 0;
}


