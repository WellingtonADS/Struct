/*6) Crie uma estrutura representando os alunos de um determinado curso. A estrutura deve conter a matrícula do aluno, nome, nota da primeira prova, nota da segunda prova e nota da terceira prova. 
(a) Permita ao usuario entrar com os dados de 5 alunos.
(b) Encontre o aluno com maior nota da primeira prova. 
(c)  Encontre o aluno com maior media geral.
(d)  Encontre o aluno com menor media geral 
(e) Para cada aluno diga se ele foi aprovado ou reprovado, considerando o valor 6 para aprovação.*/

#include <stdio.h>

struct Aluno {
    int matricula;
    char nome[50];
    float nota1;
    float nota2;
    float nota3;
    float media;
};

int main() {

    Aluno alunos[5]; 
    float maiorNota1 = 0; 
    float maiorMedia = 0; 
    float menorMedia = 30; 

    for (int i = 0; i < 5; i++) {

        printf("Digite a matrícula %d: ", i + 1);
        scanf("%d", &alunos[i].matricula);

        printf("Digite o nome %d: ", i + 1);
        scanf("%s", alunos[i].nome);

        printf("Digite a nota 1 %d: ", i + 1);
        scanf("%f", &alunos[i].nota1);

        printf("Digite a nota 2 %d: ", i + 1);
        scanf("%f", &alunos[i].nota2);

        printf("Digite a nota 3 %d: ", i + 1);
        scanf("%f", &alunos[i].nota3);

        alunos[i].media = (alunos[i].nota1 + alunos[i].nota2 + alunos[i].nota3) / 3; 

        if (alunos[i].nota1 > maiorNota1) {
            maiorNota1 = alunos[i].nota1; 
        }

        if (alunos[i].media > maiorMedia) {
            maiorMedia = alunos[i].media; 
        }

        if (alunos[i].media < menorMedia) {
            menorMedia = alunos[i].media; 
        }
    }

    printf("Aluno maior nota na primeira prova: ");
    for (int i = 0; i < 5; i++) {
        if (alunos[i].nota1 == maiorNota1) {
            printf("%s\n", alunos[i].nome);
    }

    printf("Aluno maior média geral: ");
    for (int i = 0; i < 5; i++) {
        if (alunos[i].media == maiorMedia) {
            printf("%s\n", alunos[i].nome); 
        }
    }

    printf("Aluno menor média geral: ");
    for (int i = 0; i < 5; i++) {
        if (alunos[i].media == menorMedia) {
            printf("%s\n", alunos[i].nome); 
        }
    }

    for (int i = 0; i < 5; i++) {
        if (alunos[i].media >= 6) {
            printf("Aluno %s aprovado\n", alunos[i].nome); 
        } else {
            printf("Aluno %s reprovado\n", alunos[i].nome); 
        }
    }   

    return 0;
}

