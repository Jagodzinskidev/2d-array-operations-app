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
            case 4:
                printf("Srednia wszystkich elementow tablicy wynosi %.2f \n",calculateAverage(numbers));
                break;
            case 5:
                printf("Najwieksza wartosc z wszystkich elementow tablicy wynosi %d \n",findMaximum(numbers));
                break;
            case 6:
                printf("Najmniejsza wartosc z wszystkich elementow tablicy wynosi %d \n",findMinimum(numbers));
                break;
            case 7:
                printAllPointers(numbers);
                break;
            default:
                printf("Nieprawidlowy wybor \n");
        }
    }while(choice != 0);
    return 0;
}
