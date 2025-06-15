#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main() {
    time_t t;
    srand(time(&t));
    int losowa = rand() % 20 + 1;
    int ilosc = 1;
    printf("Wylosowano liczbe \n");
    printf("Podaj liczbe od 1 do 20 \n");
    int liczba;
    scanf("%d", &liczba);

    while (losowa !=liczba){
        if(losowa > liczba){
        printf("Podana liczba jest mniejsza od szukanej \n");
        ilosc++;
        }
        else if(losowa < liczba) {
        printf ("Podana liczba jest wieksza od szukanej \n");
        ilosc++;
        }
        printf("Wprowadz ponownie liczbe \n");
        scanf("%d", &liczba);
    }
        if (losowa == liczba);
        {
            printf("Zgadles w %d probach", ilosc);
        }

}

