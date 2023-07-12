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

    int residuo = angulo % 360; 
    // Calcula el residuo del ángulo ingresado por el usuario al ser dividido por 360.

    if (residuo == 0) 
    // Comprueba si el residuo del ángulo es igual a 0.
        printf("El angulo está en el eje x positivo\n");
         // Si es cierto, imprime en la consola "El angulo está en el eje x positivo".
    else if (residuo < 90) 
    // Comprueba si el residuo del ángulo es menor que 90.
        printf ("El angulo está en el cuadrante I \n");
         // Si es cierto, imprime en la consola "El angulo está en el cuadrante I".
    else if (residuo == 90) 
    // Comprueba si el residuo del ángulo es igual a 90.
        printf("El angulo está en el eje Y positivo\n"); 
        // Si es cierto, imprime en la consola "El angulo está en el eje Y positivo".
    else if (residuo < 180) 
    // Comprueba si el residuo del ángulo es menor que 180.
        printf("El angulo está en el cuadrante II\n"); 
        // Si es cierto, imprime en la consola "El angulo está en el cuadrante II".
    else if (residuo == 180) 
    // Comprueba si el residuo del ángulo es igual a 180.
        printf ("El angulo está en el eje x negativo\n");
         // Si es cierto, imprime en la consola "El angulo está en el eje x negativo".
    else if (residuo < 270)
     // Comprueba si el residuo del ángulo es menor que 270.
        printf("El angulo está en el cuadrante III\n"); 
        // Si es cierto, imprime en la consola "El angulo está en el cuadrante III".
    else if (residuo == 270) 
    // Comprueba si el residuo del ángulo es igual a 270.
        printf("El angulo está en el eje Y negativo\n"); 
        // Si es cierto, imprime en la consola "El angulo está en el eje Y negativo".
    else 
    // En cualquier otro caso, es decir, si el residuo del ángulo es mayor que 270 y menor que 360.
        printf("El angulo está en el cuadrante IV\n");
         // Imprime en la consola "El angulo está en el cuadrante IV".

    printf("Presione cualquier tecla para continuar...\n");
     // Imprime en la consola "Presione cualquier tecla para continuar...".
    getchar(); 
    // Espera que el usuario presione una tecla.
    getchar(); 
    // Espera que el usuario presione una tecla. Se usa dos veces para esperar que el usuario presione 'Enter'.
    return 0;
     // El programa se termina exitosamente y devuelve 0 al sistema operativo.
}
