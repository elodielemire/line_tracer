#include <stdio.h>
#include <stdlib.h>
#include "structures.h"
#include "triBulles.h"

void triBulles(Image* image, Point* point, Data* data) {

    int i, j, a;
    int test, abs, ord;

   /* // entrée des coordonnées
    for (a = 0; a < data->nombrePoints; a++) {

        printf("entrer l'abscisse du point %d :", a + 1);
        scanf("%d", &x);

        if (x < 0 || x > data->largeur) {
            printf("ERR entrer une abscisse entre 0 et %d. \n", data->largeur);
            printf("entrer l'abscisse du point %d :", a + 1);
            scanf("%d", &x);
        }

        printf("entrer l'ordonnee du point %d :", a + 1);
        scanf("%d", &y);

        if (y < 0 || y > data->hauteur) {
            printf("ERR entrer une ordonnee entre 0 et %d. \n", data->hauteur);
            printf("entrer l'ordonnee du point %d :", a + 1);
            scanf("%d", &y);
        }

        point->abs[a] = x;
        point->ord[a] = y;
        point->ord[a] = data->hauteur - point->ord[a]; // pour que l'origine de y soit en bas et non en haut
    }*/
    
    for (a = 0; a < data->nombrePoints; a++) {
    demandeAbscisse(point, data, a);
    demandeOrdonnee(point, data, a);
    }

    // tri des abscisses dans l'ordre croissant
    if (data->nombrePoints > 1) {
        for (j = 0; j < data->nombrePoints; j++) {
            for (i = 0; i < data->nombrePoints - j; i++) {
                if (point->abs[i] > point->abs[i + 1] && point->abs[i + 1] != 0) {

                    abs = point->abs[i + 1];
                    point->abs[i + 1] = point->abs[i];
                    point->abs[i] = abs;

                    ord = point->ord[i + 1];
                    point->ord[i + 1] = point->ord[i];
                    point->ord[i] = ord;
                    ;
                }
            }
        }
    }

    // verification du tri a bulle par affichage des abscisses 
    for (test = 0; test < data->nombrePoints; test++) {
        printf("(%d) ", point->abs[test]);
    }
}


void demandeAbscisse(Point* point, Data* data, int a) {
    
    int x;
    
    printf("entrer l'abscisse du point %d :", a + 1);
        scanf("%d", &x);

        if (x < 0 || x > data->largeur) {
            printf("ERR entrer une abscisse entre 0 et %d. \n", data->largeur);
            demandeAbscisse(point, data, a);
        }
         point->abs[a] = x;
}


void demandeOrdonnee(Point* point, Data* data, int a){

    int y;
        
        printf("entrer l'ordonnee du point %d :", a + 1);
        scanf("%d", &y);

        if (y < 0 || y > data->hauteur) {
            printf("ERR entrer une ordonnee entre 0 et %d. \n", data->hauteur);
            demandeOrdonnee(point, data, a);
        }
      
        point->ord[a] = data->hauteur - y; // pour que l'origine de y soit en bas et non en haut
}
