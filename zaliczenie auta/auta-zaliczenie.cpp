#include <cstdio>
#include <cstring>

#define MAX_CARS 20
#define MAX_INFO 200

struct Car {
    char description[MAX_INFO];
};

void Menu() {
    printf("\nRejestr aut\n");
    printf("1. Dodaj samochod \n");
    printf("2. Wyswietl informacje o samochodach\n");
    printf("3. Dodaj informacje o samochodzie\n");
    printf("4. Zapisz auta w pliku\n");
    printf("5. Wczytaj auta z pliku\n");
    printf("0. Wyjdz\n");
    printf("Wybierz opcje: ");
}

void Cars(Car cars[], int count) {
    if (count == 0) {
        printf("Brak zarejestrowanych samochodow.\n");
        return;
    }
    for (int i = 0; i < count; ++i) {
        printf("%d. %s\n", i + 1, cars[i].description);
    }
}

void AddInfo(Car& car) {
    char extraInfo[100];
    printf("Wpisz dodatkowe informacje: ");
    fgets(extraInfo, sizeof(extraInfo), stdin);
    size_t len = strlen(extraInfo);
    if (len > 0 && extraInfo[len - 1] == '\n') {
        extraInfo[len - 1] = '\0';
    }
    strncat(car.description, " | ", MAX_INFO - strlen(car.description) - 1);
    strncat(car.description, extraInfo, MAX_INFO - strlen(car.description) - 1);
    }


int savecartofile(Car cars[], int count) {
    FILE *fptr = fopen("C:\\auta\\auta.txt", "w");
    if (fptr == NULL) {
        return 1;
    }
    for (int i = 0; i < count; ++i) {
        fprintf(fptr, "%s", cars[i].description);
    }
    fclose(fptr);
    return 0;
}

int restorecarfromfile(Car cars[], int* count) {
    FILE *fptr = fopen("C:\\auta\\auta.txt", "r");
    if (fptr == NULL) {
        return 1;
    }

    int i = 0;
    while (i < MAX_CARS && fgets(cars[i].description, MAX_INFO, fptr)) {
        size_t len = strlen(cars[i].description);
        if (len > 0 && cars[i].description[len - 1] != '\n') {
            strcat(cars[i].description, "\n");
        }
        i++;
    }

    *count = i;
    fclose(fptr);
    return 0;
}

int main() {
    Car cars[MAX_CARS];
    int carCount = 0;
    int option = 0;

    do {
        Menu();
        scanf("%d", &option);
        getchar();
        int errorcode = 0;
        switch (option) {
            case 1:
                if (carCount >= MAX_CARS) {
                    printf("Osiągnieto maksymalną liczbę samochodow!\n");
                } else {
                    printf("Podaj marke i model samochodu: ");
                    fgets(cars[carCount].description, MAX_INFO, stdin);
                    size_t len = strlen(cars[carCount].description);
                    if (len > 0 && cars[carCount].description[len - 1] == '\n') {
                        cars[carCount].description[len - 1] = '\0';
                    }
                    carCount++;
                    printf("Samochod dodany.\n");
                }
                break;

            case 2:
                Cars(cars, carCount);
                break;

            case 3:
                Cars(cars, carCount);
                if (carCount == 0) break;
                printf("Podaj numer samochodu, do ktorego chcesz dodac informacje: ");
                int index;
                scanf("%d", &index);
                printf("Podaj jaka informacje chcesz dodac: ");

                getchar();
                if (index >= 1 && index <= carCount) {
                    AddInfo(cars[index - 1]);
                    printf("Informacja dodana.\n");
                } else {
                    printf("Niepoprawny numer samochodu.\n");
                }
                break;
            case 4:
                printf("Zapisuje auta do pliku\n\n");
                errorcode = savecartofile(cars, carCount);
                if (!errorcode) {
                    printf("Auta zapisane\n\n");
                } else {
                    printf("Auta nie zapisane\n\n");
                }
                break;
            case 5:
                printf("Wczytuje auta z pliku\n\n");
                errorcode = restorecarfromfile(cars, &carCount);
                if (!errorcode) {
                    printf("Auta wczytane\n\n");
                } else {
                    printf("Auta nie wczytane\n\n");
                }
                break;
            case 0:
                printf("Zamykanie programu...\n");
                break;
            default:
                printf("Niepoprawna opcja!\n");
        }

    } while (option != 0);

    return 0;
}

