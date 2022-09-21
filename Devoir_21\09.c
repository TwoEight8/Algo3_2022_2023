#include <stdio.h> 
#include <stdlib.h>
//question1
 int main (int argc, char **argv)
{
    int a;
    int * p;
     p = &a;
        printf("Entrez votre valeur :");
        scanf("%d",&a);
        printf("\n Valeur %d \n",a);
        printf("\n Addresse de la valeur %d \n",&p);
    return 0;
}


//Question 2

/int main (int argc, char **argv)
{
    char a;
    int * p;
     p = &a;
        printf("Entrez un caractère :");
        scanf("%c",&a);
        printf("\n Valeur : %c \n",a);
        printf("\n Addresse : %d \n",&p);
    return 0;
}

//question 3 permuter
void permuter_nombre(nombreA,nombreB)
{

   int  temporaire = 0;
printf("FONC AVANT: A = %d et B = %d\n", nombreA, nombreB);
   temporaire =nombreB;
   nombreB = nombreA;
   nombreA = temporaire;
printf("FONC APRES: A = %d et B = %d\n", nombreA, nombreB);
}

int main(void)
{
    int nombreA = 15;
    int nombreB =28;
//printf("AVANT: A = %d et B = %d\n", nombreA, nombreB);
    permuter_nombre(nombreA, nombreB);
   // printf("APRES: A = %d et B = %d\n", nombreA, nombreB);
    return 0 ;
}


//question 4

 void retourne(int *i, int *o, int *p, int *max, int *min)
{
* max = *i;
* min = *i;
    if(* max < *o && *o > *p)
        * max = *o;
    else if(* max > *p)
        * max = *i;
    else * max = *p;
    if(* min > *o && *o < *p)
        * min = *o;
    else if(* min < *p)
        * min = *i;
    else * min = *p;
}
void main()
{
    int i=50, o=20, p=350;
    int max = 0;
    int min = 0;
    printf("\n i = %d o = %d p = %d \n",i,o,p);
    retourne(&i, &o, &p, &max, &min);
    printf("\n Valeur la plus grande = %d \n Valeur la plus petite = %d",max,min);
}
