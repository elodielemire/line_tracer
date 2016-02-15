#include <stdio.h>
#include <stdlib.h>
#include "structures.h"
#include "droitesVertes.h"

void droitesVertes(Image* image, Point* point, Data* data) {


    int a, b; // numéro du point
    int i, j; // indices pour parcourir le tableau de pixels
    float x[10], y[10];
    int epaisseurDroite, eq;

    epaisseurDroite = 5;

    for (a = 0; a < data->nombrePoints; a++) {
        x[a] = point->abs[a];
        y[a] = point->ord[a];
    }

    for (b = 0; b < data->nombrePoints; b++) {

        for (i = x[b]; i < x[b + 1]; i++) {

            eq = (y[b + 1] - y[b + 0]) / (x[b + 1] - x[b + 0]) * i + y[b + 0]-(y[b + 1] - y[b + 0]) / (x[b + 1] - x[b + 0]) * x[b + 0];

            for (j = eq; j < eq + epaisseurDroite; j++) {
                image->pixels[j][i].redValue = data->redCourbe;
                image->pixels[j][i].greenValue = data->greenCourbe;
                image->pixels[j][i].blueValue = data->blueCourbe;
            }
        }
    }
}
