#include <stdio.h>

int main(){
    float costo_comida, porcentaje_propina, propina, total_a_pagar;

    printf("Introduce el costo de tu comida: ");
    scanf("%f", &costo_comida);

    
    printf("Introduce el porcentaje de propina que deseas dejar: ");
    scanf("%f", &porcentaje_propina);

    
    if (costo_comida < 0 || porcentaje_propina < 0) {
        printf("Por favor, introduce valores positivos para el costo y el porcentaje.\n");
        return 1; 
    }

    
    propina = (costo_comida * porcentaje_propina) / 100;
    total_a_pagar = costo_comida + propina;

    printf("\nPropina: %.2f\n", propina);
    printf("Total a pagar: %.2f\n", total_a_pagar);

    return 0 ;
}