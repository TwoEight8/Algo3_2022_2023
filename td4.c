#include <stdio.h>
#include <stdlib.h>


int dicho(int t[], int c, int g, int d)
{
    int m = (g + d) / 2;
    if (g > d)
        return -1;
    if (t[m] == c)
        return m;
    if (t[m] > c)
        return dicho(t, c, g, m - 1);
    return dicho(t, c, m + 1, d);
}

int main()
{
    int t[10];
    int i, c, g, d;
    srand(time(NULL));
    for (i = 0; i < 10; i++)
        t[i] = rand() % 10;
    for (i = 0; i < 10; i++)
        printf("%d ", t[i]);
    printf("");

    printf("Entrez un nombre : ");
    scanf("%d", &c);
    g = 0;
    d = 9;
    printf("Le nombre %d est a l'indice %d", c, dicho(t, c, g, d));
    return 0;
}
