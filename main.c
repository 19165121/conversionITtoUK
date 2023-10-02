#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float vot, ris, ris1, uk, it;
    int a;

    system("clear");
    printf("Inserisci il voto: ");
    scanf("%f", &vot);
    system("clear");

    printf("Il voto inserito è:\n1) UK\n2) IT\n\n");
    scanf("%d", &a);
    system("clear");

    if (a == 1) {
        ris = (vot - 50);
        ris1 = (ris * 0.00896) + 2.77778;
        uk = vot / ris1;
        
        int uk_intero = (int) round(uk * 10); // Moltiplica per 10 e arrotonda
        int uk_decine = uk_intero % 10; // Ottieni la cifra delle decine
        int uk_approssimato = uk_intero / 10; // Ottieni l'intero privato dei decimali
        
        if (uk_decine >= 5) {
            uk_approssimato++; // Approssima per eccesso
        }

        printf("Il voto è %d\nIl valore non approssimato è %f\n\n\n\n\n", uk_approssimato,uk);
    } else if (a == 2) {
        ris = (vot - 18);
        ris1 = (ris * 0.03447846) + 2.77778;
        it = vot * ris1;

        int it_intero = (int) round(it * 10); // Moltiplica per 10 e arrotonda
        int it_decine = it_intero % 10; // Ottieni la cifra delle decine
        int it_approssimato = it_intero / 10; // Ottieni l'intero privato dei decimali
        
        if (it_decine >= 5) {
            it_approssimato++; // Approssima per eccesso
        }

        printf("Il voto è %d\nIl valore non approssimato è %f\n\n\n\n", it_approssimato,it);
    } else {
        printf("Inserimento non valido\n");
    }

    
    return 0;
}
