#include <stdio.h>
#include <stdlib.h>

struct employe
{
    char nom[15];
    char prenom[15];
    int codeFonction;
    float salaire;
};

void affiche(){
    struct employe employe;
        printf("Entrez le nom de l'employe :\n ");
    scanf("%s", employe.nom);
    printf("Entrez le prenom de l'employe :\n ");
    scanf("%s", employe.prenom);
    printf("Entrez le code de fonction de l'employe :\n ");
    scanf("%d", &employe.codeFonction);
    printf("Entrez le salaire de l'employe :\n ");
    scanf("%f", &employe.salaire);
    printf("Nom : %s \t Prenom : %s\t  Code de fonction : %d\t  Salaire : %f\t ", employe.nom, employe.prenom, employe.codeFonction, employe.salaire);
}

int main()
{
    affiche();
    return 0;
}

