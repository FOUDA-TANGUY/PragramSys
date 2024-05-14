#include <stdio.h>
#include <type.h>
#include <matrix.h>

matrice transposition(matrice* matA)
{
    matrice matB;
    matB = creation(no_colone(matA),no_ligne(matA),construction(no_colone(matA),no_ligne(matA)));
    int i,j;

    for(i = 0; i < no_ligne(matA); i++)
        for(j = 0; j < no_colone(matA); j++)
        donnees(&matB)[j][i] = donnees(matA)[i][j];
    return matB;
}

matrice addition(matrice* matA, matrice* matB)
{
    matrice matC;
    matC = creation(no_ligne(matA),no_colone(matA),construction(no_ligne(matA),no_colone(matA)));
    int i,j;
    for(i = 0; i < no_ligne(matA); i++)
        for(j = 0; j < no_colone(matA); j++)
            donnees(&matC)[i][j] = donnees(matA)[i][j] + donnees(matB)[i][j];

    return matC;
}

matrice multiplicationScalaire(matrice* matA, float x)
{
    matrice matC;
    matC = creation(no_ligne(matA),no_colone(matA),construction(no_ligne(matA),no_colone(matA)));

    int i,j;
    for(i = 0; i < no_ligne(matA); i++)
        for(j = 0; j < no_colone(matA); j++)
            donnees(&matC)[i][j] = donnees(matA)[i][j] * x;;

    return matC;
}

matrice multiplication(matrice* matA,matrice* matB)
{
    matrice matC;
    matC = creation(no_ligne(matA),no_colone(matB),construction(no_ligne(matA),no_colone(matB)));

    int i,j,k;
    for(i = 0; i < no_ligne(&matC); i++)
    {
        for(j = 0; j < no_colone(&matC); j++)
        {
            donnees(&matC)[i][j] = 0;
            for(k = 0; k < no_colone(matA); k++)
                donnees(&matC)[i][j] += donnees(matA)[i][k]*donnees(matB)[k][j];
        }
    }
    return matC;
}