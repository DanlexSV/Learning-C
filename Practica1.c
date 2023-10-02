#include<stdio.h>

int main() {
    int horasTrabajadas;
    float costoHora;
    float sueldo;

    int *PhorasTrabajadas = &horasTrabajadas;
    float *Psueldo = &sueldo;

    printf("Ingrese las horas trabajadas por el empleado: ");
    scanf("%i", PhorasTrabajadas);
    printf("Ingrese el pago por hora: ");
    scanf("%f", &costoHora);
    *Psueldo = *PhorasTrabajadas * costoHora;
    printf("El sueldo total del operario es: %.2f", *Psueldo);

    getchar();
    return 0;
}
