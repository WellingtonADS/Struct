/*7) Faça um programa que realize a leitura dos seguintes dados relativos a um conjunto de alunos: 
Matricula, Nome, Codigo da Disciplina, Nota1 e Nota2. Considere uma turma de até 10 alunos. 
Após ler todos os dados digitados, e depois de armazená-los em um vetor de estrutura, 
exibir na tela a listagem final dos alunos com as suas respectivas medias finais 
(use uma media ponderada: Nota1 com peso=1.0 e Nota2 com peso=2.0).*/


#include <stdio.h>

struct DadosAluno {
    int matricula; // Matrícula do aluno
    char nome[50]; // Nome do aluno
    int codigoDisciplina; // Código da disciplina do aluno
    float nota1; // Nota 1 do aluno
    float nota2; // Nota 2 do aluno
    float media; // Média do aluno
};

int main() {

    DadosAluno alunos[10];

    for (int i = 0; i < 10; i++) {

        // Solicita a matrícula do aluno
        printf("Digite a matrícula do aluno %d: ", i + 1);
        scanf("%d", &alunos[i].matricula);

        // Solicita o nome do aluno
        printf("Digite o nome do aluno %d: ", i + 1);
        scanf("%s", alunos[i].nome);

        // Solicita o código da disciplina do aluno
        printf("Digite o código da disciplina do aluno %d: ", i + 1);
        scanf("%d", &alunos[i].codigoDisciplina);

        // Solicita a nota 1 do aluno
        printf("Digite a nota 1 do aluno %d: ", i + 1);
        scanf("%f", &alunos[i].nota1);

        // Solicita a nota 2 do aluno
        printf("Digite a nota 2 do aluno %d: ", i + 1);
        scanf("%f", &alunos[i].nota2);

        // Calcula a média ponderada do aluno
        alunos[i].media = (alunos[i].nota1 + 2 * alunos[i].nota2) / 3;
    }

    for (int i = 0; i < 10; i++) {

        // Exibe os dados do aluno
        printf("Matrícula do aluno %d: %d\n", i + 1, alunos[i].matricula);
        printf("Nome do aluno %d: %s\n", i + 1, alunos[i].nome);
        printf("Código da disciplina do aluno %d: %d\n", i + 1, alunos[i].codigoDisciplina);
        printf("Nota 1 do aluno %d: %.2f\n", i + 1, alunos[i].nota1);
        printf("Nota 2 do aluno %d: %.2f\n", i + 1, alunos[i].nota2);
        printf("Média do aluno %d: %.2f\n", i + 1, alunos[i].media);
    }

    return 0;
}

/*Este código em C++ define uma estrutura chamada DadosAluno e um programa principal que cria um array de DadosAluno, lê os dados de cada aluno e calcula a média ponderada das notas de cada aluno.

A estrutura DadosAluno é definida com seis membros: matricula, que é um número inteiro, nome, que é uma matriz de caracteres, codigoDisciplina, que é um número inteiro, nota1 e nota2, que são números de ponto flutuante, e media, que também é um número de ponto flutuante. Esses membros são usados para armazenar informações sobre um aluno.

No programa principal, um array de DadosAluno chamado alunos é criado. Este array pode armazenar informações de até 10 alunos.

Em seguida, um loop for é usado para ler os dados de cada aluno. Para cada aluno, o programa pede ao usuário para digitar a matrícula, o nome, o código da disciplina e as notas das duas provas. A média ponderada das notas de cada aluno é calculada usando a fórmula (nota1 + 2 * nota2) / 3 e armazenada no membro media da estrutura DadosAluno.

Depois que todos os dados dos alunos foram lidos e as médias foram calculadas, o programa imprime os dados de cada aluno, incluindo a matrícula, o nome, o código da disciplina, as notas e a média.

Finalmente, o programa retorna 0, que é uma convenção em C++ para indicar que o programa terminou com sucesso.*/