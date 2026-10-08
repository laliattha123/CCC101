#include "stdio.h"

void main (){
    int lyn;
    float ampaso;
    printf("Enter two number: (int float)");
    scanf("%i %f", &lyn, &ampaso);
    if ( lyn > 0){
        printf("%i is positive\n", lyn);
    } else if ( lyn < 0){
        printf("%i is negative\n", lyn);
    } else{
        printf("%i is neutral\n", lyn);
    }
    if ( ampaso > 0){
        printf("%f is positive\n", ampaso);
    } else if ( ampaso < 0){
        printf("%f is negative\n", ampaso);
    } else{
        printf("%f is neutral\n", ampaso);
    }
}