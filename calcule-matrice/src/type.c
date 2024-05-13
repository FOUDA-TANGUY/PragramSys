#include <stdio.h>
#include <stdlib.h>
#include <type.h>

// setteur
int no_ligne(matrice* mat)
{
    return mat->nb_ligne;
}

int no_colone(matrice* mat)
{
    return mat->nb_colone;
}

float** donnees(matrice* mat)
{
    return mat->matrix;
}


// fonctionnaliter
matrice creation(int nb_ligne, int nb_colone, float** matrix)
{
    matrice resulta;
    // implementation ici
    return resulta;
}
matrice generation(int nb_ligne, int nb_colone)
{
    matrice resulta;
    // implementation ici
    return resulta;
}
matrice chargement(FILE* file) // iclure le stdlib.h avant de inclure type.h dans source
{
    matrice resulta;
    // implementation ici
    return resulta;
}
void afficher(matrice* mat)
{
    // implementation ici

    return;
}

// utile
float** construction(int nb_ligne, int nb_colone)
{
    float** matrix;
    // implementation ici
    return matrix;
}
void destruction(float**, int, int)
{

    return;
}