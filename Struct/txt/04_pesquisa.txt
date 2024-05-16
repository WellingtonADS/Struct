/*Foi realizada uma pesquisa entre 500 habitantes de uma certa região. 
De cada habitante foram coletados os dados: idade, sexo, salário e número de filhos. 
Crie a estrutura de dados adequada para armazenar estas informações e faça 
uma função que armazene as informações digitadas pelo usuário na estrutura de dados criada. 
Faça também uma função que calcula a média do salário dos habitantes*/

#include <stdio.h>  

struct DadosHabitante {
    int idade;
    char sexo;
    float salario;
    int numFilhos;
};

int main() {
    DadosHabitante habitantes[500];
    float somaSalarios = 0;

    for (int i = 0; i < 500; i++) {
        printf("Digite a idade do habitante %d: ", i + 1);
        scanf("%d", &habitantes[i].idade);

        printf("Digite o sexo do habitante %d (M/F): ", i + 1);
        scanf(" %c", &habitantes[i].sexo);

        printf("Digite o salário do habitante %d: ", i + 1);
        scanf("%f", &habitantes[i].salario);
        somaSalarios += habitantes[i].salario;

        printf("Digite o número de filhos do habitante %d: ", i + 1);
        scanf("%d", &habitantes[i].numFilhos);
    }

    printf("Média do salário dos habitantes: %.2f\n", somaSalarios / 500);

    return 0;
}


/*Este código em C++ define uma estrutura chamada DadosHabitante e um programa principal que cria um vetor de DadosHabitante, lê os dados de cada habitante e calcula a média dos salários dos habitantes.

A estrutura DadosHabitante é definida com quatro membros: idade, que é um número inteiro, sexo, que é um caractere, salario, que é um número de ponto flutuante, e numFilhos, que é um número inteiro. Esses membros são usados para armazenar informações sobre um habitante.

No programa principal, um vetor de DadosHabitante chamado habitantes é criado. Este vetor pode armazenar informações de 500 habitantes. Uma variável somaSalarios também é criada para armazenar a soma dos salários dos habitantes.

Em seguida, um loop for é usado para ler os dados de cada habitante. Para cada habitante, o programa pede ao usuário para digitar a idade, o sexo, o salário e o número de filhos. O salário de cada habitante é adicionado à somaSalarios.

Depois que todos os dados dos habitantes foram lidos, o programa calcula a média dos salários dos habitantes dividindo a somaSalarios por 500. Esta média é então impressa na tela com duas casas decimais.

Finalmente, o programa retorna 0, que é uma convenção em C++ para indicar que o programa terminou com sucesso.*/