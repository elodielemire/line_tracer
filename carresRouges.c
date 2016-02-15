#include <stdio.h>
#include <stdlib.h>
#include "structures.h"
#include "carresRouges.h"

void carresRouges(Image* image, Point* point, Data* data){

int i,j; // indices pour parcourir le tableau de pixels
int x, y; // abscisse et ordonnée
int a; // numero du point a placer

for (a = 0; a < data->nombrePoints; a++) {
                
        x=point->abs[a];
        y=point->ord[a];

        // coloriage du carré en rouge 
        for(i=x-data->tailleCarres; i<x+data->tailleCarres+1; i++){
            for(j=y-data->tailleCarres; j<y+data->tailleCarres+1; j++){
        image->pixels[j][i].redValue = data->redCarres;
        image->pixels[j][i].greenValue = data->greenCarres;
        image->pixels[j][i].blueValue = data->blueCarres;
            }
        }
}
/*
int xmin, xmax, ymin, ymax;
int pointXmin, pointXmax, pointYmin, pointYmax;
int coeffX, coeffY;

int longueurCadre;
int hauteurCadre;

// xmin et xmax déjà trouvés grâce au tri à bulles
xmin = point->abs[0];
pointXmin = 0;

xmax = point->abs[data->nombrePoints -1];
pointXmax = data->nombrePoints -1;
        
// recherche de ymin
    ymin = point->ord[0];
    pointYmin = 0;
        for (i = 1 ; i < data->nombrePoints ; i++) {
        if (point->ord[i] < ymin) {
            ymin = point->ord[i];
            pointYmin = i;}}

// recherche de ymax
    ymax = point->ord[0];
    pointYmax = 0;
        for (i = 1 ; i < data->nombrePoints ; i++) {
        if (point->ord[i] > ymax) {
            ymax = point->ord[i];
            pointYmax = i;}}
 
// determination des coefficients    
coeffX = 100*(data->largeur - longueurCadre)/(xmax - xmin);
coeffY = 100*(data->hauteur - hauteurCadre)/(ymax - ymin);

// affichage du point qui a l'abscisse minimale
image->pixels[(point->abs[pointXmin] - ymin)*coeffY/100][origineX].redValue = 0;
image->pixels[(point->abs[pointXmin] - ymin)*coeffY/100][origineX].greenValue = 0;
image->pixels[(point->abs[pointXmin] - ymin)*coeffY/100][origineX].blueValue = 255;

*/
}

