/*04 Foi realizada uma pesquisa entre 500 habitantes de uma certa região. 
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
        printf("Digite a idade %d: ", i + 1);
        scanf("%d", &habitantes[i].idade);

        printf("Digite o sexo %d (M/F): ", i + 1);
        scanf(" %c", &habitantes[i].sexo);

        printf("Digite o salário %d: ", i + 1);
        scanf("%f", &habitantes[i].salario);
        somaSalarios += habitantes[i].salario;

        printf("Digite Qtd de filhos %d: ", i + 1);
        scanf("%d", &habitantes[i].numFilhos);
    }

    printf("Média salário: %.2f\n", somaSalarios / 500);

    return 0;
}


