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

    Aluno alunos[5]; // Array de alunos para armazenar os dados dos alunos
    float maiorNota1 = 0; // Variável para armazenar a maior nota da primeira prova
    float maiorMedia = 0; // Variável para armazenar a maior média geral
    float menorMedia = 30; // Variável para armazenar a menor média geral

    for (int i = 0; i < 5; i++) {

        printf("Digite a matrícula do aluno %d: ", i + 1);
        scanf("%d", &alunos[i].matricula);

        printf("Digite o nome do aluno %d: ", i + 1);
        scanf("%s", alunos[i].nome);

        printf("Digite a nota da primeira prova do aluno %d: ", i + 1);
        scanf("%f", &alunos[i].nota1);

        printf("Digite a nota da segunda prova do aluno %d: ", i + 1);
        scanf("%f", &alunos[i].nota2);

        printf("Digite a nota da terceira prova do aluno %d: ", i + 1);
        scanf("%f", &alunos[i].nota3);

        alunos[i].media = (alunos[i].nota1 + alunos[i].nota2 + alunos[i].nota3) / 3; // Calcula a média do aluno

        if (alunos[i].nota1 > maiorNota1) {
            maiorNota1 = alunos[i].nota1; // Atualiza a maior nota da primeira prova
        }

        if (alunos[i].media > maiorMedia) {
            maiorMedia = alunos[i].media; // Atualiza a maior média geral
        }

        if (alunos[i].media < menorMedia) {
            menorMedia = alunos[i].media; // Atualiza a menor média geral
        }
    }

    printf("Aluno com maior nota na primeira prova: ");
    for (int i = 0; i < 5; i++) {
        if (alunos[i].nota1 == maiorNota1) {
            printf("%s\n", alunos[i].nome); // Imprime o nome do aluno com a maior nota da primeira prova
        }
    }

    printf("Aluno com maior média geral: ");
    for (int i = 0; i < 5; i++) {
        if (alunos[i].media == maiorMedia) {
            printf("%s\n", alunos[i].nome); // Imprime o nome do aluno com a maior média geral
        }
    }

    printf("Aluno com menor média geral: ");
    for (int i = 0; i < 5; i++) {
        if (alunos[i].media == menorMedia) {
            printf("%s\n", alunos[i].nome); // Imprime o nome do aluno com a menor média geral
        }
    }

    for (int i = 0; i < 5; i++) {
        if (alunos[i].media >= 6) {
            printf("Aluno %s aprovado\n", alunos[i].nome); // Imprime se o aluno foi aprovado
        } else {
            printf("Aluno %s reprovado\n", alunos[i].nome); // Imprime se o aluno foi reprovado
        }
    }   

    return 0;
}

/*Este código em C++ define uma estrutura chamada Aluno e um programa principal que cria um array de Aluno, lê os dados de cada aluno, calcula a média das notas de cada aluno e realiza algumas análises sobre as notas dos alunos.

A estrutura Aluno é definida com cinco membros: matricula, que é um número inteiro, nome, que é uma matriz de caracteres, nota1, nota2 e nota3, que são números de ponto flutuante, e media, que também é um número de ponto flutuante. Esses membros são usados para armazenar informações sobre um aluno.

No programa principal, um array de Aluno chamado alunos é criado. Este array pode armazenar informações de 5 alunos. Três variáveis adicionais são criadas para armazenar a maior nota da primeira prova (maiorNota1), a maior média geral (maiorMedia) e a menor média geral (menorMedia).

Em seguida, um loop for é usado para ler os dados de cada aluno. Para cada aluno, o programa pede ao usuário para digitar a matrícula, o nome e as notas das três provas. A média das notas de cada aluno é calculada e armazenada no membro media da estrutura Aluno. Se a nota da primeira prova ou a média de um aluno é maior do que as maiores notas ou médias já registradas, as variáveis maiorNota1 e maiorMedia são atualizadas. Se a média de um aluno é menor do que a menor média já registrada, a variável menorMedia é atualizada.

Depois que todos os dados dos alunos foram lidos e as médias foram calculadas, o programa imprime o nome do aluno com a maior nota da primeira prova, o nome do aluno com a maior média geral e o nome do aluno com a menor média geral. O programa também imprime se cada aluno foi aprovado ou reprovado, considerando o valor 6 para aprovação.

Finalmente, o programa retorna 0, que é uma convenção em C++ para indicar que o programa terminou com sucesso.*/