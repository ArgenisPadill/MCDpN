#include <stdio.h> 
// Incluye la biblioteca de entrada/salida estándar, necesaria para realizar operaciones de entrada y salida, como printf y scanf.

int main(int argc, char *argv[]) 
// Punto de entrada principal del programa. argc y argv son los parámetros para la línea de comandos.
{
    int angulo=0; 
    // Declaración de una variable entera 'angulo' e inicialización en 0.

    printf("Escribe el angulo: \n"); 
    // Imprime en la consola la frase "Escribe el angulo:".

    scanf("%d", &angulo); 
    // Solicita al usuario un valor de entrada que será asignado a la variable 'angulo'.

    int seccion = (angulo % 360) / 90; 
    // Calcula el residuo del ángulo ingresado por el usuario al ser dividido por 360 y luego divide ese residuo por 90.

    switch (seccion) { 
        // Este es el comienzo de una declaración de interruptor. Selecciona la operación a realizar según el valor de 'seccion'.
        case 0: 
        // Si 'seccion' es igual a 0...
            if(angulo == 0) 
            // Comprueba si 'angulo' es igual a 0.
                printf("El angulo está en el eje x positivo\n"); 
                // Si es cierto, imprime en la consola "El angulo está en el eje x positivo".
            else // Si 'angulo' no es igual a 0...
                printf ("El angulo está en el cuadrante I \n"); 
                // Imprime en la consola "El angulo está en el cuadrante I".
            break; 
            // Termina esta sección del interruptor y salta al final de la declaración del interruptor.
        case 1: 
        // Si 'seccion' es igual a 1...
            if((angulo % 360) == 90) 
            // Comprueba si el residuo de 'angulo' dividido por 360 es igual a 90.
                printf("El angulo está en el eje Y positivo\n"); // Si es cierto, imprime en la consola "El angulo está en el eje Y positivo".
            else 
            // Si el residuo de 'angulo' dividido por 360 no es igual a 90...
                printf("El angulo está en el cuadrante II\n"); 
                // Imprime en la consola "El angulo está en el cuadrante II".
            break; 
            // Termina esta sección del interruptor y salta al final de la declaración del interruptor.
        case 2: 
        // Si 'seccion' es igual a 2...
            if((angulo % 360) == 180) 
            // Comprueba si el residuo de 'angulo' dividido por 360 es igual a 180.
                printf ("El angulo está en el eje x negativo\n"); 
                // Si es cierto, imprime en la consola "El angulo está en el eje x negativo".
            else 
            // Si el residuo de 'angulo' dividido por 360 no es igual a 180...
                printf("El angulo está en el cuadrante III\n"); 
                // Imprime en la consola "El angulo está en el cuadrante III".
            break; 
            // Termina esta sección del interruptor y salta al final de la declaración del interruptor.
        case 3: 
        // Si 'seccion' es igual a 3...
            if((angulo % 360) == 270) 
            // Comprueba si el residuo de 'angulo' dividido por 360 es igual a 270.
                printf("El angulo está en el eje Y negativo\n"); 
                // Si es cierto, imprime en la consola "El angulo está en el eje Y negativo".
            else 
            // Si el residuo de 'angulo' dividido por 360 no es igual a 270...
                printf("El angulo está en el cuadrante IV\n"); 
                // Imprime en la consola "El angulo está en el cuadrante IV".
            break; 
            // Termina esta sección del interruptor y salta al final de la declaración del interruptor.
    } 
    // Fin de la declaración de interruptor.

   printf("Presione cualquier tecla para continuar...\n"); 
    // Imprime en la consola "Presione cualquier tecla para continuar...".
}