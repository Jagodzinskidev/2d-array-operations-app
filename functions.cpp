#include <iostream>
#define ROWSIZE 5
#define COLSIZE 2
FILE * fptr;

void enterNumbers(int numbers[ROWSIZE][COLSIZE]) {
    printf("Przypisz wartosci elementom tablicy: \n");
    for (int indexRow = 0; indexRow < ROWSIZE; indexRow++) {
        for (int indexCol = 0; indexCol < COLSIZE; indexCol++) {
            printf("Numbers[%d][%d] = ?\n", indexRow, indexCol);
            scanf("%d", &numbers[indexRow][indexCol]);
        }
    }
}

void menu(void) {
    printf("Wybierz opcje: \n");
    printf(" [0] Wyjdz \n");
}