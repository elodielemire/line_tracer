#include <stdio.h>
#include <stdlib.h>
#include "structures.h"
#include "fondBleu.h"

void fondBleu(Image* image, Data* data) {

    int line, column;

    for (line = 0; line < image->height; line++) {
        for (column = 0; column < image->width; column++) {
            image->pixels[line][column].redValue = data->redFond;
            image->pixels[line][column].greenValue = data->greenFond;
            image->pixels[line][column].blueValue = data->blueFond;
        }
    }
}
