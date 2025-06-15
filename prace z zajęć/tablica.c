
main.cpp

#include <iostream>
#define SIZE 10

        void printarray(int array[], int size) {
            for (int i = 0; i < size; ++i) {
                printf("array[%d] = %d\n", i, array[i]);
            }
        }
void menu(void) {
    printf("1. Wygeneruj liczby w tablicy\n");
    printf("2. Wyswietl liczby z tablicy\n");
    printf("3. Wyswietl najnizszom wartosc\n");
    printf("4. Wyswietl najwyszom wartosc\n");
    printf("5. Wyswietl sredniom wartosc\n");
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


int main() {
    int array[SIZE] {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int option = 0;

    printf("Tablica\n\n");

    do {
        menu();
        scanf("%d", &option);

        switch (option) {
            case 0:
                break;
            case 1:
                printf("cos\n\n");
                break;
            case 2:
                printarray(array, SIZE);
                break;
            case 3:
                printf("Najnizsza wartosc: %d\n\n", findminimum(array, SIZE));
                break;
            case 4:
                printf("Najwieksza wartosc: %d\n\n", findmaximum(array, SIZE));
                break;
            case 5:
                printf("Srednia wartosc: %f\n\n", calculateAverage(array, SIZE));
                break;
            default:
                printf("Wybierz poprawna opcje\n\n");
        }

    } while (option != 0);

    printf("koniec\n");

    return 0;
}

