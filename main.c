#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>
#include <windows.h>

int main() {
    // int = %d (4 bytes)
    // float = %f ou %.1f (4 bytes)
    // double = %lf ou %.15lf (8 bytes)
    // char = %c (1 byte)
    // char[] array = %s (tamanho variado)
    // bool = %d (1 bytes, precisa de <stdbool.h>)

    int number;
    char comand[100], nameProcess[150], raiz[150];

    system("Title Gerenciador de Tarefas 1.2");

    printf(" Digite 1 para abrir o menu:\n-> ");
    scanf("%d", &number);
    system("cls");

    if (number == 1) {

        printf("Digite:\n1) para abrir a lista de processos\n2) para informar o processo a ser fechado\n3) para abrir um novo processo\n-> ");
        scanf("%d", &number);
        system("cls");

        if(number == 1) {
            system("tasklist");

            getch();
        }else if(number == 2) {

            strcpy(comand, "taskkill /IM ");
            printf("Digite aqui o nome do processo a ser excluido:\n-> ");
            scanf("%s", nameProcess);
            strcat(nameProcess, ".exe");
            strcat(comand, nameProcess);
            system(comand);

        } else if (number == 3) {
            strcpy(comand, "start ");
            printf("Digite a raiz do arquivo:\n-> ");
            scanf("%s", raiz);
            printf("Digite o nome do arquvio que deseja abrir:\n-> ");
            scanf("%s", nameProcess);

            strcat(comand, raiz);
            strcat(comand, nameProcess);

            system(comand);
        } else {
            printf("Digite algo valido");
            getch();
        }

    } else {
        printf("Tchau");
        getch();
    }

    getchar();
    return 0;
}