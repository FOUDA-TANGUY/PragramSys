#ifndef __TYPE__H__
#define __TYPE__H__

    typedef struct matrice
    {
        int nb_ligne;
        int nb_colone;

        float **matrix;
    }matrice;

    // getteur
    int no_ligne(matrice*);
    int no_colone(matrice*);
    float** donnees(matrice*);

    // fonctionnaliter
    matrice creation(int, int, float**);
    matrice generation(int, int);
    matrice chargement(FILE*); // iclure le stdlib.h avant de inclure type.h dans source
    void afficher(matrice*);

    // utile
    float** construction(int, int);
    void destruction(float**, int);

    

#endif