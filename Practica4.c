#include<stdio.h>

int main() {
    int num;
    printf("Escribe un numero entero: ");
    scanf("%i", &num);
    if (num > 0 && num < 10)
        printf("El numero %i tiene 1 cifra", num);
    else if (num > 9 && num < 100)
        printf("El numero %i tiene 2 cifras.", num);
    else if (num > 99 && num < 1000)
        printf("El numero %i tiene 3 cifras.", num);
    else
        printf("Error.\nEl numero %i es mayor a 3 cifras.", num);
    return 0;
}
