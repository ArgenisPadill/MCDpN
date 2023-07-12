#include <stdio.h> 
// Incluye la biblioteca de entrada/salida estándar, necesaria para realizar operaciones de entrada y salida, como printf y scanf.

int main(int argc, char *argv[]) 
// Punto de entrada principal del programa. argc y argv son los parámetros para la línea de comandos.
{
    int angulo=0; 
    // Declaración de una variable entera 'angulo' e inicialización en 0.
    int residuo=0; 
    // Declaración de una variable entera 'residuo' e inicialización en 0.

    printf("Escribe el angulo: \n"); 
    // Imprime en la consola la frase "Escribe el angulo:".

    scanf("%d",&angulo); 
    // Solicita al usuario un valor de entrada que será asignado a la variable 'angulo'.

    residuo=(angulo%360); 
    // Calcula el residuo del ángulo ingresado por el usuario al ser dividido por 360.

    if(angulo==0) 
    // Comprueba si el ángulo ingresado es igual a 0.
        printf("Se encuentra en el origen en X y Y \n"); 
        // Si es cierto, imprime en la consola "Se encuentra en el origen en X y Y".
    
    else if ((angulo>0&&angulo<90) || (residuo>0&&residuo<90)) 
    // Comprueba si el ángulo ingresado está en el intervalo (0,90) o si su residuo está en ese mismo intervalo.
        printf ("El angulo está en el cuadrante I \n"); 
    // Si es cierto, imprime en la consola "El angulo está en el cuadrante I".
    
    else if((angulo==90) || (residuo==90)) 
    // Comprueba si el ángulo o su residuo son igual a 90.
        printf("El angulo está en el eje Y positivo\n"); 
        // Si es cierto, imprime en la consola "El angulo está en el eje Y positivo".
    
    else if ((angulo>90&&angulo<180) || (residuo>90&&residuo<180)) 
    // Comprueba si el ángulo ingresado está en el intervalo (90,180) o si su residuo está en ese mismo intervalo.
        printf("El angulo está en el cuadrante II\n"); 
        // Si es cierto, imprime en la consola "El angulo está en el cuadrante II".
    
    else if((angulo==180) || (residuo==180)) 
    // Comprueba si el ángulo o su residuo son igual a 180.
        printf ("El angulo está en el eje x negativo\n");
         // Si es cierto, imprime en la consola "El angulo está en el eje x negativo".
    
    else if ((angulo>180&&angulo<270) || (residuo>180&&residuo<270)) 
    // Comprueba si el ángulo ingresado está en el intervalo (180,270) o si su residuo está en ese mismo intervalo.
        printf("El angulo está en el cuadrante III\n");
         // Si es cierto, imprime en la consola "El angulo está en el cuadrante III".
    
    else if((angulo==270) || (residuo==270)) 
    // Comprueba si el ángulo o su residuo son igual a 270.
        printf("El angulo está en el eje Y negativo\n");
         // Si es cierto, imprime en la consola "El angulo está en el eje Y negativo".
    
    else if ((angulo>270&&angulo<360) || (residuo>270&&residuo<360))
     // Comprueba si el ángulo ingresado está en el intervalo (270,360) o si su residuo está en ese mismo intervalo.
        printf("El angulo está en el cuadrante IV\n"); 
        // Si es cierto, imprime en la consola "El angulo está en el cuadrante IV".
    
    else if((angulo==360) || (residuo==0)) 
    // Comprueba si el ángulo es igual a 360 o si su residuo es igual a 0.
        printf("El angulo está en el eje x positivo\n"); 
        // Si es cierto, imprime en la consola "El angulo está en el eje x positivo".

    system("PAUSE"); 
    // Hace una pausa en la consola para que el usuario pueda leer los resultados antes de que se cierre la consola.
    return 0; 
    // El programa se termina exitosamente y devuelve 0 al sistema oper
