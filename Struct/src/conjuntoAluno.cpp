/*7) Faça um programa que realize a leitura dos seguintes dados relativos a um conjunto de alunos: 
Matricula, Nome, Codigo da Disciplina, Nota1 e Nota2. Considere uma turma de até 10 alunos. 
Após ler todos os dados digitados, e depois de armazená-los em um vetor de estrutura, 
exibir na tela a listagem final dos alunos com as suas respectivas medias finais 
(use uma media ponderada: Nota1 com peso=1.0 e Nota2 com peso=2.0).*/


#include <stdio.h>

struct DadosAluno {
    int matricula; 
    char nome[50]; 
    int codDisciplina; 
    float nota1; 
    float nota2; 
    float media; 
};

int main() {

    DadosAluno alunos[10];

    for (int i = 0; i < 10; i++) {

        
        printf("Digite a matrícula %d: ", i + 1);
        scanf("%d", &alunos[i].matricula);

        
        printf("Digite o nome %d: ", i + 1);
        scanf("%s", alunos[i].nome);

        
        printf("Digite o código da disciplina %d: ", i + 1);
        scanf("%d", &alunos[i].codigoDisciplina);

        
        printf("Digite a nota 1 %d: ", i + 1);
        scanf("%f", &alunos[i].nota1);

        
        printf("Digite a nota 2 %d: ", i + 1);
        scanf("%f", &alunos[i].nota2);

        
        alunos[i].media = (alunos[i].nota1 + 2 * alunos[i].nota2) / 3;
    }

    for (int i = 0; i < 10; i++) {

       
        printf("Matrícula do aluno %d: %d\n", i + 1, alunos[i].matricula);
        printf("Nome do aluno %d: %s\n", i + 1, alunos[i].nome);
        printf("Código da disciplina do aluno %d: %d\n", i + 1, alunos[i].codigoDisciplina);
        printf("Nota 1 do aluno %d: %.2f\n", i + 1, alunos[i].nota1);
        printf("Nota 2 do aluno %d: %.2f\n", i + 1, alunos[i].nota2);
        printf("Média do aluno %d: %.2f\n", i + 1, alunos[i].media);
    }

    return 0;
}

