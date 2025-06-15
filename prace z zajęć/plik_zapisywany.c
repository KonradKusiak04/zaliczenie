#include <iostream>
#define SIZE 10



void printarray(int array[], int size) {
    for (int i = 0; i < size; ++i) {
        printf("array[%d] = %d\n", i, array[i]);
    }
}
void menu(void) {
    printf("1. Wyswietl liczby z tablicy\n");
    printf("2. Wyswietl najnizszom wartosc\n");
    printf("3. Wyswietl najwyszom wartosc\n");
    printf("4. Wyswietl sredniom wartosc\n");
    printf("5. Zapisz wartosci tablicy do pliku\n");
    printf("6. Cofnij wartosci tablicy z pliku\n");
    printf("0. Zakoncz\n");
    printf("Wybierz opcje\n");
}

int findminimum (int array[], int size) {
    int minimum = array[0];
    for (int i = 0; i < size; ++i) {
        if (array[i] < minimum) {
            minimum = array[i];
        }
    }
    return minimum;
}
int findmaximum (int array[], int size) {
    int maximum = array[0];
    for (int i = 0; i < size; ++i) {
        if (array[i] > maximum) {
            maximum = array[i];
        }
    }
    return maximum;
}
float calculateAverage (int array[], int size) {
    int sum = 0;
    for (int i = 0; i < size; ++i) {
        sum += array[i];
    }
    return (float) sum / size;
}
int savearraytofile(int array[]) {
    FILE *fptr = NULL;
    fptr = fopen("C:\\pliki\\plik.txt", "a");
    if (fptr == NULL) {
        return 1;
    }
    for (int i = 0; i < SIZE; ++i) {
        fprintf(fptr, "%d\n", array[i]);
    }
    fclose(fptr);
    return 0;
    }

int restorearrayfromfile(int array[]) {
    FILE *fptr = NULL;
    fptr = fopen("C:\\pliki\\plik.txt", "r");
    if (fptr == NULL) {
        return 1;
    }
    int i = 0;
    while (i < SIZE && fscanf(fptr, "%d", &array[i]) == 1) {
        i++;
    }

    fclose(fptr);
    return 0;
}


int main() {
    int array[SIZE] {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int option = 0;
    int errorcode = 0;
    printf("Tablica\n\n");

    do {
        menu();
        scanf("%d", &option);
        switch (option) {
            case 0:
                break;
            case 1:
                printarray(array, SIZE);
                break;
            case 2:
                printf("Najnizsza wartosc: %d\n\n", findminimum(array, SIZE));
                break;
            case 3:
                printf("Najwieksza wartosc: %d\n\n", findmaximum(array, SIZE));
                break;
            case 4:
                printf("Srednia wartosc: %f\n\n", calculateAverage(array, SIZE));
                break;
            case 5:
                printf("Zapisuje dane do pliku\n\n");
                errorcode = savearraytofile(array);
                if (!errorcode) {
                    printf("Tablica zapisana\n\n");
                } else {
                    printf("Tablica nie zapisana\n\n");
                }
                break;
            case 6:
                printf("Wczytuje dane z pliku\n\n");
                errorcode = restorearrayfromfile(array);
                if (!errorcode) {
                    printf("Tablica wczytana\n\n");
                } else {
                    printf("Tablica nie wczytana\n\n");
                }
                break;
                default:
                printf("Wybierz poprawna opcje\n\n");
        }

    } while (option != 0);

    printf("koniec\n");

    return 0;
}

