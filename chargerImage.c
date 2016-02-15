#include <stdio.h>
#include <stdlib.h>
#include "structures.h"
#include "chargerImage.h"

void chargerImage(Image* image, char* fenetre) {
    
    int line;
    int column;
 
	FILE* monImage = fopen(fenetre, "w");
	if (monImage == NULL) {
		printf("Error: cannot open file.\n");
		exit(1);
	}

        // 3 premières lignes
	fprintf(monImage, "P3\n");
	fprintf(monImage, "%d %d\n", image->width, image->height);
	fprintf(monImage, "255\n");
        
	for (line= 0;line< image->height; line++) {
		for (column = 0; column< image->width; column++) {
			fprintf(monImage, "%d %d %d\n",                                
                          image->pixels[line][column].redValue,
          	          image->pixels[line][column].greenValue,
                	  image->pixels[line][column].blueValue) ;
		}
	} 
}
