#include <stdio.h>
#include <stdlib.h>
#include "structures.h"
#include "tableauDynamique.h"

void tableauDynamique(Image* image, Data *data) {
    int i;

    image->height = data->hauteur;
    image->width = data->largeur;
    
    image->pixels = malloc(image->height * sizeof(Pixel*));
    for (i = 0 ; i < image->height ; i++) {
        image->pixels[i] = malloc(image->width * sizeof(Pixel));
    }
}
