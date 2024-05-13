#include <stdio.h>
#include <stdlib.h>
#include <time.h>
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
    resulta.matrix = matrix;
    resulta.nb_ligne =nb_ligne;
    resulta.nb_colone = nb_colone;

    return resulta;
}
matrice generation(int nb_ligne, int nb_colone)
{
    matrice resulta;
    int i,j;
    
    resulta = creation(nb_ligne,nb_colone,construction(nb_ligne,nb_colone));
    srand((unsigned int)time(NULL));

    for(i = 0; i < nb_ligne; i++)
        for(j = 0; j < nb_colone; j++)
            resulta.matrix[i][j] = (float)rand();

    return resulta;
}
matrice chargement(FILE* file) // inclure le stdlib.h avant de inclure type.h dans source
{
    matrice resulta;
    // implementation ici
    return resulta;
}
void afficher(matrice* mat)
{
    int i,j;
    printf("+-----------------+\n");
    for(i = 0; i < mat->nb_ligne; i++)
    {
        printf("[");
        for(j = 0; j < mat->nb_colone; j++)
            printf("%6.2f",mat->matrix[i][j]);

        printf("]\n");
    }
    printf("+-----------------+\n");
    return;
}

// utile
float** construction(int nb_ligne, int nb_colone)
{
    float** matrix  = NULL;
    int i;
    matrix = (float**)malloc(sizeof(float*)*nb_ligne);

    for( i = 0; i < nb_ligne; i++)
        matrix[i] = (float*)malloc(sizeof(float)*nb_colone);

    return matrix;
}
void destruction(float** matrix, int nb_ligne, int nb_colone) 
{
    int i;
    for(i = 0 ; i < nb_ligne; i++)
        free(matrix[i]);

    free(matrix);

    return;
}