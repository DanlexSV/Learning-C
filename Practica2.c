#include<stdio.h>

int main() {
    int num1, num2, num3;
    printf("Ingrese un valor numérico: ");
    scanf("%i", &num1);
    printf("Ingrese otro valor numérico: ");
    scanf("%i", &num2);
    printf("Ingrese otro valor numérico: ");
    scanf("%i", &num3);

    int mayor, medio, menor;

    if (num1 > num2 && num1 > num3) {
        mayor = num1;
        medio = (num2 > num3) ? num2 : num3;
        menor = (num2 > num3) ? num3 : num2;
    } else if (num2 > num1 && num2 > num3) {
        mayor = num2;
        medio = (num1 > num3) ? num1 : num3;
        menor = (num1 > num3) ? num3 : num1;
    } else {
        mayor = num3;
        medio = (num1 > num2) ? num1 : num2;
        menor = (num1 > num2) ? num2 : num1;
    }

    printf("El número %i es mayor que %i y este es mayor que %i\n", mayor, medio, menor);
    getchar();
    return 0;
}
