#include <stdio.h>
#include <stdlib.h>
#include <type.h>
#include <matrix.h>

void set_alea(matrice*);
void trans_matrice(void);
void add_matrice(void);
void multi_scalair(void);
void multi_matrice(void);



int main(void)
{
    int option;

    do 
    {
        system("clear");
        printf("+----------------------------------------------+\n");
        printf("|-----------%25s----------|\n","MENU PRINCIPALE");
        printf("+----------------------------------------------+\n");

        printf("+----------------------------------------------+\n");
        printf("| 1 -> Transposer une matrice                  |\n");
        printf("| 2 -> addition de matrice                     |\n");
        printf("| 3 -> Produit par scalaire                    |\n");
        printf("| 4 -> Produit de matrice                      |\n");
        printf("| 0 -> Quitter                                 |\n");
        printf("+----------------------------------------------+\n");
        printf("Entrer votre choix :");
        scanf("%d",&option);
        switch (option)
        {
        case 1:
            trans_matrice();
            break;
        case 2:
            add_matrice();
            break;

        case 3:
            multi_scalair();
            break;
        case 4:
            multi_matrice();
            break;
        
        default:
            break;
        }
    }while(option);

    printf("MERCI ...\n");
    return 0;
}


void set_alea(matrice* mat)
{
    int ligne,colone;
    printf("Entrez le Nombre de Ligne :");
    scanf("%d",&ligne);
    printf("Entrez le Nombre de Colone :");
    scanf("%d",&colone);
    *mat = generation(ligne,colone);
    afficher(mat);
    return;
}

void trans_matrice(void)
{
    int choix;
    matrice mat,matS;
    do
    {
        system("clear");
        printf("+----------------------------------------------+\n");
        printf("|-----------%25s----------|\n","TRANSPOSITION");
        printf("+----------------------------------------------+\n");
        
        printf("Matrice A\n");
        set_alea(&mat);

        printf("Transposer A\n");
        matS = transposition(&mat);
        afficher(&matS);

        destruction(donnees(&mat),no_ligne(&mat));
        destruction(donnees(&matS),no_ligne(&matS));

        printf("Voulez vous ressaye (1)oui (0)non ?");
        scanf("%d",&choix);

    }while(choix);

    return;
}
void add_matrice(void)
{
    int choix;
    matrice matA,matB,matS;
    do
    {
        system("clear");
        printf("+----------------------------------------------+\n");
        printf("|-----------%25s----------|\n","ADDITION");
        printf("+----------------------------------------------+\n");
        printf("matrice A\n");
        set_alea(&matA);

        printf("matrice B\n");
        set_alea(&matB);

        printf("Matrice A + B\n");
        matS = addition(&matA,&matB);
        afficher(&matS);

        destruction(donnees(&matA),no_ligne(&matA));
        destruction(donnees(&matB),no_ligne(&matB));
        destruction(donnees(&matS),no_ligne(&matS));

        printf("Voulez vous ressaye (1)oui (0)non ?");
        scanf("%d",&choix);

    }while(choix);

    return;
}
void multi_scalair(void)
{
    int choix;
    float x;
    matrice mat,matS;
    do
    {
        system("clear");
        printf("+----------------------------------------------+\n");
        printf("|-----------%25s----------|\n","MUTIPLICATION-SCALE");
        printf("+----------------------------------------------+\n");

        set_alea(&mat);

        printf("Valeur du scalaire x:");
        scanf("%f",&x);

        printf("Matrcie A*x\n");
        matS = multiplicationScalaire(&mat,x);
        afficher(&matS);

        destruction(donnees(&mat),no_ligne(&mat));
        destruction(donnees(&matS),no_ligne(&matS));

        printf("Voulez vous ressaye (1)oui (0)non ?");
        scanf("%d",&choix);

    }while(choix);
    return;
}
void multi_matrice(void)
{
    int choix;
    matrice matA,matB,matS;
    do
    {
        system("clear");
        printf("+----------------------------------------------+\n");
        printf("|-----------%25s----------|\n","MUTIPLICATION");
        printf("+----------------------------------------------+\n");
        printf("matrice A\n");
        set_alea(&matA);

        printf("matrice B\n");
        set_alea(&matB);

        printf("Matrice A * B\n");
        matS = multiplication(&matA,&matB);
        afficher(&matS);

        destruction(donnees(&matA),no_ligne(&matA));
        destruction(donnees(&matB),no_ligne(&matB));
        destruction(donnees(&matS),no_ligne(&matS));

        printf("Voulez vous ressaye (1)oui (0)non ?");
        scanf("%d",&choix);

    }while(choix);

    return;    
}