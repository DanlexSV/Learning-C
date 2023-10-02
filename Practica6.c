#include<stdio.h>

int main(){
    int dd, mm;
    printf("Escribe el numero de un dia: ");
    scanf("%i", &dd);
    printf("Escribe el numero de un mes: ");
    scanf("%i", &mm);

    if (dd == 25 && mm == 12)
        printf("La fecha que has ingresado es Navidad.");
    else
        printf("GRACIAS.");
    return 0;
}
