#include<stdio.h>

int main() {
    int preguntas, preguntas_correctas;
    double porcentaje_aprobado;

    printf("Escribe la cantidad de preguntas del examen: ");
    scanf("%i", &preguntas);
    printf("Escribe la cantidad de preguntas aprobadas del examen: ");
    scanf("%i", &preguntas_correctas);

    porcentaje_aprobado = ((double)preguntas_correctas/preguntas)*100;

    if (porcentaje_aprobado >= 90)
        printf("Haz alcanzado el nivel maximo!");
    else if (porcentaje_aprobado >= 75 && porcentaje_aprobado < 90)
        printf("Haz alcanzado el nivel medio.");
    else if (porcentaje_aprobado >= 50 && porcentaje_aprobado < 75)
        printf("Haz alcanzado el nivel regular.");
    else if (porcentaje_aprobado < 50)
        printf("Estas por debajo del nivel.");
    return 0;
}
