//
// Created by User on 29/09/2021.
//

#include "fonctions.h"
#include "stdio.h"
int getMax(int entier1 , int entier2){
    int maximum=0;
    maximum=(entier1>entier2)?entier1:entier2;
    return maximum;
}
int saisirEntier(){
    int entierASaisir;
    printf("Saisissez un entier.\n");
    scanf("%d",&entierASaisir);
    return entierASaisir;
}
int calculAire(int largeur, int longueur){
    int aire=0;
    aire=largeur*longueur;
    return aire;
}
int calculPerimetre(int largeur, int longueur){
    int perimetre=0;
    perimetre=(largeur+longueur)*2;
    return perimetre;
}
int multiple(int valeur1, int valeur2){
    return valeur1%valeur2==0;
}
float moyenne(float note1, float note2, float note3){
    float moyenne;
    if ((note1<=20 && note1>=0) && (note2<=20 && note2>=0) && (note3<=20 && note3>=0)){
        moyenne=(note1+note2+note3)/3;
    }
    else{
        moyenne=-1;
    }
    return moyenne;


}
