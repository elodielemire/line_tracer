


typedef struct Pixel Pixel;
struct Pixel {
	unsigned char redValue;
	unsigned char greenValue;
	unsigned char blueValue;
};


typedef struct Image Image;
struct Image {
	int width;
	int height;
	Pixel **pixels;
};

typedef struct Point Point;
struct Point {  
    int abs[10];
    int ord[10];

};

typedef struct Data Data;
struct Data{
    int hauteur;
    int largeur;
    int redFond;
    int greenFond;
    int blueFond;
    int marge;
    int redCourbe;
    int greenCourbe;
    int blueCourbe;
    int redCarres;
    int greenCarres;
    int blueCarres;
    int tailleCarres;
    int nombrePoints;
};

#ifndef STRUCTURES_H
#define	STRUCTURES_H

#ifdef	__cplusplus
extern "C" {
#endif




#ifdef	__cplusplus
}
#endif

#endif	/* STRUCTURES_H */

