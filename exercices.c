//
// Created by User on 29/09/2021.
//
#include "stdio.h"
#include "exercices.h"
#include "fonctions.h"
void Exercice1(){
    int entier1;
    int entier2;
    printf("Saisissez vos deux valeurs.\n");
    scanf("%d %d",&entier1, &entier2);
    getMax(entier1 , entier2);
    printf("Le maximum est %d.\n",getMax(entier1 , entier2));
}
void Exercice2(){
    printf("L'entier saisi est %d.\n", saisirEntier);
}
void Exercice3(){
    int largeur;
    int longueur;
    largeur= saisirEntier();
    longueur= saisirEntier();
    printf("Le perimetre est :%d\n", calculPerimetre(largeur,longueur));
    printf("L'aire est :%d\n", calculAire(largeur,longueur));
}
void Exercice4(){
    int valeur1;
    const int valeur2=3;
    valeur1=saisirEntier();
    if(multiple(valeur1,valeur2) && valeur1>=10){
        printf("L'entier est multiple de 3 et est supérieur à 10.\n");
    }
    else {
        printf("L'entier n'est pas multiple de 3 et supérieur à 10.\n");
    }
}
void Exercice5(){
    float note1=0;
    float note2=0;
    float note3=0;
    printf("Saisissez votre premiere note.\n");
    scanf("%f",&note1);
    printf("Saisissez votre deuxième note.\n");
    scanf("%f",&note2);
    printf("Saisissez votre troisième note.\n");
    scanf("%f",&note3);
    printf("Votre moyenne est :%f.\n", moyenne(note1,note2,note3));
}
