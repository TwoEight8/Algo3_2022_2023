
#include <stdio.h>
#include <stdlib.h>

typedef char Chaine[15];

typedef struct employe
{
    Chaine nom;
    Chaine prenom;
    int codeFonction;
    float salaire;
} Employe;

Employe saisieEmploye()
{
    Employe employe;
    printf("Entrez le nom de l'employe : ");
    scanf("%s", employe.nom);
    printf("Entrez le prenom de l'employe : ");
    scanf("%s", employe.prenom);
    printf("Entrez le code de fonction de l'employe : ");
    scanf("%d", &employe.codeFonction);
    printf("Entrez le salaire de l'employe : ");
    scanf("%f", &employe.salaire);
    return employe;
}

void afficheEmploye(Employe employe)
{
    printf("Nom : %s Prenom : %s Code de fonction : %d Salaire : %f", employe.nom, employe.prenom, employe.codeFonction, employe.salaire);
}

void modifEmploye(Employe *employe)
{
    printf("Entrez le nom de l'employe : ");
    scanf("%s", employe->nom);
    printf("Entrez le prenom de l'employe : ");
    scanf("%s", employe->prenom);
    printf("Entrez le code de fonction de l'employe : ");
    scanf("%d", &employe->codeFonction);
    printf("Entrez le salaire de l'employe : ");
    scanf("%f", &employe->salaire);
}

int main()
{
    Employe employe = saisieEmploye();
    afficheEmploye(employe);
    modifEmploye(&employe);
    afficheEmploye(employe);
    return 0;
}

