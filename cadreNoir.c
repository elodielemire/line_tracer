#include <stdio.h>
#include <stdlib.h>
#include "structures.h"
#include "cadreNoir.h"

void cadreNoir(Image* image, Data* data) {

    int longueurCadre;
    int hauteurCadre;
    int i;

    // trace un cadre noir à X% du bord de l'image
    longueurCadre = data->largeur - data->marge * data->largeur / 100;
    hauteurCadre = data->hauteur - data->marge * data->hauteur / 100;


    for (i = (data->hauteur - hauteurCadre) / 2; i < data->hauteur - (data->hauteur - hauteurCadre) / 2; i++) {
        // bord gauche
        image->pixels[i][(data->largeur - longueurCadre) / 2].redValue = 0;
        image->pixels[i][(data->largeur - longueurCadre) / 2].greenValue = 0;
        image->pixels[i][(data->largeur - longueurCadre) / 2].blueValue = 0;

        // bord droit
        image->pixels[i][data->largeur - (data->largeur - longueurCadre) / 2].redValue = 0;
        image->pixels[i][data->largeur - (data->largeur - longueurCadre) / 2].greenValue = 0;
        image->pixels[i][data->largeur - (data->largeur - longueurCadre) / 2].blueValue = 0;
    }


    for (i = (data->largeur - longueurCadre) / 2; i < data->largeur - (data->largeur - longueurCadre) / 2; i++) {
        // bord haut
        image->pixels[data->hauteur - (data->hauteur - hauteurCadre) / 2][i].redValue = 0;
        image->pixels[data->hauteur - (data->hauteur - hauteurCadre) / 2][i].greenValue = 0;
        image->pixels[data->hauteur - (data->hauteur - hauteurCadre) / 2][i].blueValue = 0;

        // bord bas
        image->pixels[(data->hauteur - hauteurCadre) / 2][i].redValue = 0;
        image->pixels[(data->hauteur - hauteurCadre) / 2][i].greenValue = 0;
        image->pixels[(data->hauteur - hauteurCadre) / 2][i].blueValue = 0;
    }
}


