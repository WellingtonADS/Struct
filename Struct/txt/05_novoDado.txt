/*Escreva um trecho de codigo para fazer a criação dos novos tipos de dados conforme solicitado abaixo: 
• Horario: composto de hora, minutos e segundos. 
• Data: composto de dia, mes e ano. 
• Compromisso: composto de uma data, horario e texto que descreve o compromisso.
*/

#include <stdio.h>     

struct Horario {
    int hora;
    int minutos;
    int segundos;
};

struct Data {
    int dia;
    int mes;
    int ano;
};

struct Compromisso {
    Data data;
    Horario horario;
    char texto[100];
};

int main() {
    Horario horario;
    Data data;
    Compromisso compromisso;

    return 0;
}

/*Este código em C++ define três estruturas: Horario, Data e Compromisso. As estruturas em C++ são tipos de dados compostos que podem conter membros com diferentes tipos de dados.

A estrutura Horario tem três membros: hora, minutos e segundos, todos do tipo inteiro. Essa estrutura pode ser usada para armazenar um horário específico.

A estrutura Data tem três membros: dia, mes e ano, todos do tipo inteiro. Essa estrutura pode ser usada para armazenar uma data específica.

A estrutura Compromisso tem três membros: data, que é do tipo Data, horario, que é do tipo Horario, e texto, que é uma matriz de caracteres. Essa estrutura pode ser usada para armazenar um compromisso, que inclui a data e o horário do compromisso, bem como um texto que descreve o compromisso.

No programa principal, uma instância de cada uma dessas estruturas é criada: horario, data e compromisso. Essas instâncias podem ser usadas para armazenar um horário, uma data e um compromisso, respectivamente.

O programa retorna 0, que é uma convenção em C++ para indicar que o programa terminou com sucesso.*/
