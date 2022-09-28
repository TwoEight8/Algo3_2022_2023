#include <stdio.h>
#include <stdlib.h>

int main() {
    int notes[10], coefficients[10], i, max, min,note,note2;
    float moyenne = 0;
    for (i = 0; i < 10; i++) {
        printf("Entrer la note %d:\n ", i + 1);
        scanf("%d", &notes[i]);
        if (notes[i] < 0 || notes[i] > 20) {
            printf("La note doit etre entre 0 et 20\n");
            i--;
        }
        printf("Entrer le coefficient de la note %d:\n ", i + 1);
        scanf("%d", &coefficients[i]);
    }
    for (i = 0; i < 10; i++) {
        moyenne = moyenne + (notes[i] / coefficients[i]);
    }
    max = min = notes[9];
    for (i = 0; i < 10; i++) {
        if (notes[i] > max)
            max = notes[i];
        if (notes[i] < min)
            min = notes[i];
    }
    moyenne = moyenne / 10;
    printf("La moyenne est de %f\n ", moyenne);
    printf(" La note minimale est de %d\n", min);
    printf(" La note maximale est de %d\n ", max);
    printf("Entrer la note que vous voulez modifier:\n ");
    scanf("%d", &note);
    printf("Entrer la nouvelle note:\n ");
    scanf("%d", &note2);
    notes[note - 1] = note2;
    for (i = 0; i < 10; i++) {
        printf("La note %d est de %d et le coefficien de %d\n ", i + 1, notes[i],coefficients[i]);
    }
    for (i = 0; i < 10; i++) {
        moyenne = moyenne + (notes[i] * coefficients[i]);
    }
    moyenne = moyenne / 10;
    printf("La nouvelle moyenne est de %f\n ", moyenne);
        printf(" La nouvelle note minimale est de %d\n", min);
    printf(" La nouvelle note maximale est de %d\n ", max);
    return 0;
}
