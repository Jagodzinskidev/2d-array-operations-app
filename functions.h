//
// Created by student on 31.03.2025.
//

#ifndef FUNCTIONS_H
#define FUNCTIONS_H
#define ROWSIZE 5
#define COLSIZE 2

void enterNumbers(int numbers[ROWSIZE][COLSIZE]);
void printAllNumbers(const int numbers[ROWSIZE][COLSIZE]);
void printNumber(const int numbers[ROWSIZE][COLSIZE]);
void changeNumber(int numbers[ROWSIZE][COLSIZE]);
float calculateAverage(const int numbers[ROWSIZE][COLSIZE]);
int findMaximum(const int numbers[ROWSIZE][COLSIZE]);
int findMinimum(const int numbers[ROWSIZE][COLSIZE]);
void printAllPointers(const int numbers[ROWSIZE][COLSIZE]);
void printPointer(const int numbers[ROWSIZE][COLSIZE]);
void saveToFile(const int numbers[ROWSIZE][COLSIZE]);
void openFromFile( int numbers[ROWSIZE][COLSIZE]);
void menu(void);

#endif //FUNCTIONS_H
