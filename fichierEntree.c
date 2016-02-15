#include <stdio.h>
#include <stdlib.h>
#include "structures.h"
#include "fichierEntree.h"

void fichierEntree(char* fileName, Data* data) {
   
    int i;
    
    FILE *inputFile = NULL;
    inputFile = fopen(fileName, "r");
    
    if(inputFile == NULL) {
        exit(EXIT_FAILURE);
    }
    
   // fscanf(inputFile, "%d %d", &data->hauteur, &data->largeur); DYNAMIQUE
   // printf("la hauteur de l'image est de %d et sa largeur est de %d \n", data->hauteur, data->largeur);
    
   
    fscanf(inputFile, "%d %d %d", &data->redFond, &data->greenFond, &data->blueFond);
   // printf("les composantes RVB du fond sont : %d %d %d\n", data->redFond, data->greenFond, data->blueFond);
    
    fscanf(inputFile, "%d", &data->marge);
   // printf("la taille de la marge est en pourcentage : %d \n", data->marge);
    
    fscanf(inputFile, "%d %d %d", &data->redCourbe, &data->greenCourbe, &data->blueCourbe);
   // printf("les composantes RVB de la courbe sont : %d %d %d\n", data->redCourbe, data->greenCourbe, data->blueCourbe);
    
    fscanf(inputFile, "%d %d %d", &data->redCarres, &data->greenCarres, &data->blueCarres);
   // printf("les composantes RVB des carrés sont : %d %d %d\n", data->redCarres, data->greenCarres, data->blueCarres);
    
    fscanf(inputFile, "%d", &data->tailleCarres);
  //  printf("la taille des carrés est : %d\n", data->tailleCarres);
    
   // fscanf(inputFile, "%d", &data->nombrePoints); DYNAMIQUE
  //  printf("le nombre de points est :  %d\n", data->nombrePoints);
            
    fclose(inputFile);
}

