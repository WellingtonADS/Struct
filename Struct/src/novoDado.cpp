/*05 Escreva um trecho de codigo para fazer a criação dos novos tipos de dados conforme solicitado abaixo: 
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

