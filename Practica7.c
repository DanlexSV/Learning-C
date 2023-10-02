#include<stdio.h>

int main() {
    float sueldo;
    int antiguedad;

    printf("Escribe el sueldo mensual del empleado:\n");
    scanf("%f", &sueldo);
    printf("Escriba la antiguedad del empleado:\n");
    scanf("%i", &antiguedad);

    if (sueldo < 500){
        if (antiguedad >= 10){
            sueldo = sueldo + ((sueldo * 20)/100);
            printf("El sueldo final del empleado es: %.2f", sueldo);
        }
        else if (antiguedad < 10){
            sueldo = sueldo + ((sueldo * 5)/100);
            printf("El sueldo final del empleado es: %.2f", sueldo);
        }
    } else if (sueldo >= 500)
        printf("El sueldo final del empleado es: %.2f", sueldo);

    getchar();
    return 0;
}
