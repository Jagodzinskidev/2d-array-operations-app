#include <iostream>
#include "functions.h"

int main() {
    int numbers[ROWSIZE][COLSIZE];
    int choice = 0;
    int *choiceAddress = &choice;
    enterNumbers(numbers);
    do {
        menu();
        scanf("%d", choiceAddress);
        switch (choice) {
            case 1:
                printAllNumbers(numbers);
                break;
            case 2:
                printNumber(numbers);
                break;
            case 3:
                changeNumber(numbers);
                break;
            case 0:
                printf("Zakonczono program");
                break;
            default:
                printf("Nieprawidlowy wybor \n");
        }
    }while(choice != 0);
    return 0;
}
