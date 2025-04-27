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

void printAllNumbers(const int numbers[ROWSIZE][COLSIZE]){
    for (int indexRow = 0; indexRow < ROWSIZE; indexRow++) {
        for (int indexCol = 0; indexCol < COLSIZE; indexCol++) {
            printf("Numbers[%d][%d] = %d\n", indexRow, indexCol , numbers[indexRow][indexCol]);
        }
    }
}

void printNumber(const int numbers[ROWSIZE][COLSIZE]){
    int row;
    int col;

    printf("W jakim rzedzie znajduje sie element tablicy ktory chcesz sprawdzic? \n");
    scanf("%d", &row);
    printf("W jakiej kolumnie znajduje sie element tablicy ktory chcesz sprawdzic? \n");
    scanf("%d", &col);
    printf("Numbers[%d][%d] = %d\n", row, col,  numbers[row][col]);
}

void changeNumber(int numbers[ROWSIZE][COLSIZE]) {
    int row;
    int col;
    int change;

    printf("W jakim rzedzie znajduje sie element tablicy ktory chcesz zmienic? \n");
    scanf("%d", &row);
    printf("W jakiej kolumnie znajduje sie element tablicy ktory chcesz zmienic? \n");
    scanf("%d", &col);
    printf("Wpisz numer: \n");
    scanf("%d", &change);
    numbers[row][col] = change;
}

float calculateAverage(const int numbers[ROWSIZE][COLSIZE]) {
    int sum = 0;

    for (int indexRow = 0; indexRow < ROWSIZE; indexRow++) {
        for (int indexCol = 0; indexCol < COLSIZE; indexCol++) {
            sum += numbers[indexRow][indexCol];
        }
    }
    return (float) sum / (ROWSIZE*COLSIZE);
}

int findMaximum(const int numbers[ROWSIZE][COLSIZE]) {
    int temp = numbers[0][0];

    for (int indexRow = 0; indexRow < ROWSIZE; indexRow++) {
        for (int indexCol = 0; indexCol < COLSIZE; indexCol++) {
            if (numbers[indexRow][indexCol] > temp) {
                temp = numbers[indexRow][indexCol];
            }
        }
    }
    return temp;
}

int findMinimum(const int numbers[ROWSIZE][COLSIZE]) {
    int temp = numbers[0][0];
    for (int indexRow = 0; indexRow < ROWSIZE; indexRow++) {
        for (int indexCol = 0; indexCol < COLSIZE; indexCol++) {
            if (numbers[indexRow][indexCol] < temp) {
                temp = numbers[indexRow][indexCol];
            }
        }
    }
    return temp;
}

void printAllPointers(const int numbers[ROWSIZE][COLSIZE]){
    for (int indexRow = 0; indexRow < ROWSIZE; indexRow++) {
        for (int indexCol = 0; indexCol < COLSIZE; indexCol++) {
            printf("&Numbers[%d][%d] = %p\n", indexRow, indexCol , &numbers[indexRow][indexCol]);
        }
    }
}

void printPointer(const int numbers[ROWSIZE][COLSIZE]){
    int row;
    int col;

    printf("W jakim rzedzie znajduje sie element tablicy ktory chcesz sprawdzic? \n");
    scanf("%d", &row);
    printf("W jakiej kolumnie znajduje sie element tablicy ktory chcesz sprawdzic? \n");
    scanf("%d", &col);
    printf("&Numbers[%d][%d] = %p\n", row, col,  &numbers[row][col]);
}

void saveToFile(const int numbers[ROWSIZE][COLSIZE]) {
    fptr = fopen("data.txt", "w");
    if (fptr == 0)
    {
        printf("Blad otwierania pliku!\n");
        exit(1);
    }
    for (int indexRow = 0; indexRow < ROWSIZE; indexRow++) {
        for (int indexCol = 0; indexCol < COLSIZE; indexCol++) {
            fprintf(fptr, "%d\n", numbers[indexRow][indexCol]);
        }
    }
    fclose(fptr);
    printf("Poprawnie zapisano tablice do pliku.\n");
}

void openFromFile(int numbers[ROWSIZE][COLSIZE]) {
    fptr = fopen("data.txt", "r");
    int numberArray[ROWSIZE][COLSIZE];
    if (fptr == 0) {
        printf("Blad otwierania pliku!\n");
        exit(1);
    }
    for (int indexRow = 0; indexRow < ROWSIZE; indexRow++) {
        for (int indexCol = 0; indexCol < COLSIZE; indexCol++) {
            fscanf(fptr, "%d", &numberArray[indexRow][indexCol]);
            numbers[indexRow][indexCol] = numberArray[indexRow][indexCol];
        }
    }
    fclose(fptr);
    printf("Poprawnie odczytano tablice z pliku.\n");
}

void menu(void) {
    printf("Wybierz opcje: \n");
    printf(" [1] Wydrukuj cala tablice \n");
    printf(" [2] Wydrukuj jeden element tablicy \n");
    printf(" [3] Zmien element tablicy \n");
    printf(" [4] Oblicz srednia \n");
    printf(" [5] Znajdz maksimum \n");
    printf(" [6] Znajdz minimum \n");
    printf(" [7] Wydrukuj wszystkie adresy tablicy \n");
    printf(" [8] Wydrukuj adres elementu  \n");
    printf(" [9] Zapisz tablice w pliku  \n");
    printf( "[10] Odczytaj tablice z pliku \n");
    printf(" [0] Wyjdz \n");
}