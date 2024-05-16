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


/*Este código em C++ define uma estrutura chamada Aluno e um programa principal que cria uma instância dessa estrutura, atribui valores a seus membros e, em seguida, imprime esses valores.

A estrutura Aluno é definida com dois membros: matricula, que é um número inteiro, e nota, que é um número de ponto flutuante. As estruturas em C++ são semelhantes às classes, mas todos os seus membros são publicamente acessíveis por padrão.

No programa principal, uma instância da estrutura Aluno chamada aluno1 é criada. Em seguida, os valores são atribuídos aos membros matricula e nota de aluno1. O valor 123 é atribuído a matricula e o valor 8.5 é atribuído a nota.

Finalmente, os valores dos membros matricula e nota de aluno1 são impressos na tela usando a função printf. A função printf é uma função de biblioteca padrão em C++ para a saída formatada. O especificador de formato %d é usado para imprimir um número inteiro e %.2f é usado para imprimir um número de ponto flutuante com duas casas decimais.

O programa retorna 0, que é uma convenção em C++ para indicar que o programa terminou com sucesso.*/