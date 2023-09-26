#include<stdio.h>

int main() {
    int num;
    printf("Escribe un numero entero: ");
    scanf("%i", &num);
    if (num > 0)
        printf("El numero %i es positivo.", num);
    else if (num < 0)
        printf("El numero %i es negativo.", num);
    else
        printf("El numero %i es cero.", num);
}
