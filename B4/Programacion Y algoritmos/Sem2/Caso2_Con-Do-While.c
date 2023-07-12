#include <stdio.h> 
// Incluye la biblioteca de entrada y salida estándar que se utiliza para imprimir en pantalla y recibir entradas del usuario.

int main(int argc, char *argv[]) 
// Punto de entrada principal para el programa. argc y argv son argumentos para la línea de comandos, pero en este caso no se usan.
{
    int angulo=0; 
    // Define y establece la variable 'angulo' a 0.
    char respuesta; 
    // Define la variable 'respuesta' que almacenará la respuesta del usuario.
    
    do {
        printf("Escribe el angulo: \n"); 
        // Imprime una indicación para que el usuario escriba el ángulo.
        scanf("%d", &angulo); 
        // Lee la entrada del usuario como un número entero y lo asigna a la variable 'angulo'.

        int seccion = (angulo % 360) / 90; 
        // Calcula en qué sección (0, 1, 2 o 3) se encuentra el ángulo.

        switch (seccion) { 
            // Comienza a revisar cada posible valor de 'seccion'
            case 0:  
            // Si seccion es 0
                if(angulo == 0) 
                // Si el ángulo es exactamente 0
                    printf("El angulo está en el eje x positivo\n"); 
                    // Imprime que el ángulo está en el eje x positivo
                else
                    printf ("El angulo está en el cuadrante I \n"); 
                    // Si no, entonces el ángulo está en el cuadrante I.
                break; 
                // Sale del switch
            case 1: 
            // Si seccion es 1
                if((angulo % 360) == 90) 
                // Si el ángulo es exactamente 90
                    printf("El angulo está en el eje Y positivo\n"); 
                    // Imprime que el ángulo está en el eje Y positivo
                else
                    printf("El angulo está en el cuadrante II\n"); 
                    // Si no, entonces el ángulo está en el cuadrante II.
                break; // Sale del switch
            case 2: // Si seccion es 2
                if((angulo % 360) == 180) 
                // Si el ángulo es exactamente 180
                    printf ("El angulo está en el eje x negativo\n"); 
                    // Imprime que el ángulo está en el eje x negativo
                else
                    printf("El angulo está en el cuadrante III\n"); 
                    // Si no, entonces el ángulo está en el cuadrante III.
                break; // Sale del switch
            case 3: // Si seccion es 3
                if((angulo % 360) == 270) 
                // Si el ángulo es exactamente 270
                    printf("El angulo está en el eje Y negativo\n"); 
                    // Imprime que el ángulo está en el eje Y negativo
                else
                    printf("El angulo está en el cuadrante IV\n"); 
                    // Si no, entonces el ángulo está en el cuadrante IV.
                break;
                 // Sale del switch
        }
        
        printf("¿Desea introducir otro angulo? (s/n): "); 
        // Pregunta al usuario si desea introducir otro ángulo.
        scanf(" %c", &respuesta); 
        // Lee la respuesta del usuario y la almacena en 'respuesta'.
    } while (respuesta == 's' || respuesta == 'S'); 
    // Si la respuesta es 's' o 'S', entonces repite el ciclo 'do while', de lo contrario, termina el ciclo.

    return 0; 
    // Fin del programa principal, retorna 0 para indicar que el programa se ejecutó correctamente.
}
