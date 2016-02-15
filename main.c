#include <stdio.h>
#include <stdlib.h>
#include "structures.h"
#include "fondBleu.h"
#include "cadreNoir.h"
#include "carresRouges.h"
#include "triBulles.h"
#include "droitesVertes.h"
#include "chargerImage.h"
#include "fichierEntree.h"
#include "tableauDynamique.h"

int main(int argc, char** argv) {

    Image *image = malloc(sizeof(*image));
    Point *point = malloc(sizeof(*point));
    Data *data = malloc(sizeof(*data));

    fichierEntree("fichierEntree.txt", data);
        
    demandeParametres(data);
    
    tableauDynamique(image, data);
    
    fondBleu(image, data);

    cadreNoir(image, data);
    
    triBulles(image, point, data);

    carresRouges(image, point, data);
    
    droitesVertes(image, point, data);

    chargerImage(image, "eval.ppm");

    free(image);
    free(point);
    free(data);
  
    return (EXIT_SUCCESS);
}

void demandeParametres(Data* data){
    
    demandeLargeur(data);
    demandeHauteur(data);
    demandeNombrePoints(data);      
    
}

void demandeLargeur(Data* data){

    printf("entrer la largeur de l'image : \n");
    scanf("%d", &data->largeur);
    
    if(data->largeur < 100 || data->largeur > 1000)
    {
    printf("ERR entrez une taille comprise entre 100 et 1000. \n");
    demandeLargeur(data);
    }
}

void demandeHauteur(Data* data){
    
    // hauteur image
    printf("entrer la hauteur de l'image : \n");
    scanf("%d", &data->hauteur);
    
    if(data->hauteur < 100 || data->hauteur > 1000)
    {
    printf("ERR entrez une taille comprise entre 100 et 1000. \n");
    demandeHauteur(data);
    }
}

void demandeNombrePoints(Data* data){
   
    // nombre de points
    printf("entrer un nombre de points entre 1 et 10 : \n");
    scanf("%d", &data->nombrePoints);
    
    if (1 > &data->nombrePoints > 10)
    {
    printf("ERR entrer un nombre de points entre 1 et 10 : \n");
    scanf("%d", &data->nombrePoints);
    }
}

/* tests unitaires 
 allocations dynamiques
 taille de l'image entrée dynamiquement
 trier les abscisses des points pour les remettre dans l'ordre croissant
 prendre les informations d'un fichier d'entrée
 adapter l'échelle de l'image
 */
