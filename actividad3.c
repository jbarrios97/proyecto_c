#include <stdio.h>

int main() {
    float cantidad;
    int opcion;

    printf("Ingrese la cantidad a convertir: ");
    scanf("%f", &cantidad);

    printf("Seleccione la moneda a la que desea convertir:\n");
    printf("1. Quetzales\n");
    printf("2. Dólares estadounidenses\n");
    printf("3. Euros\n");
    printf("Opción: ");
    scanf("%d", &opcion);

    switch(opcion) {
        case 1:
            printf("%.2f quetzales son %.2f dólares y %.2f euros.\n", cantidad, cantidad / 7.75, cantidad / 8.73);
            break;
        case 2:
            printf("%.2f dólares son %.2f quetzales y %.2f euros.\n", cantidad, cantidad * 7.75, cantidad * 0.91);
            break;
        case 3:
            printf("%.2f euros son %.2f quetzales y %.2f dólares.\n", cantidad, cantidad * 8.73, cantidad * 1.10);
            break;
        default:
            printf("Opción no válida.\n");
    }

    return 0;
}